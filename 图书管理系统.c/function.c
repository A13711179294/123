#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
void menu()                                                     //���˵�
{
	printf("\t--------------------------------------\n");
	printf("\t    ������ӭʹ��ͼ����Ϣ����ϵͳ����  \n");
	printf("\t  0. �˳�ѧͼ����Ϣ����ϵͳ           \n");
	printf("\t  1. �����ͼ����ISBN��             \n"); // 1.ISBN 2.���ͼ��
	printf("\t  2. ��ͼ�����                       \n");
	printf("\t  3. ��ͼ�����                       \n");
	printf("\t  4. �޸�ͼ��                         \n");
	printf("\t  5. ��ͼ��۸�����                   \n"); // �۸��������Ĭ������
	printf("\t  6. ͳ��ͼ������                     \n");
	printf("\t  7. ͼ��ȥ��                         \n");
	printf("\t  8. ��������                         \n");
	printf("\t  9. ��������ͼ��                   \n");
	printf("\t  10.�������λ��ͼ��                 \n");
	printf("\t  11.��ʾͼ���                       \n");
	printf("\t  12.βɾ                             \n");
	printf("\t--------------------------------------\n");
}
//---------------------------------������---------------------------------(������)

Status InitList(LinkList* L)                                   //---��ʼ��ָ��L
{
	*L = (LinkList)malloc(1 * sizeof(LNode));
	(*L)->next = NULL;                                         //��
	return OK;
}
Status CreateList(LinkList p, LinkList q, Book* book)          //---��ʼ��ָ��L��nextָ��p
{                                                              //q = p->next;
	q = (LinkList)malloc(1 * sizeof(LNode));//p->next��ʼ����
	Book* b = (Book*)malloc(1 * sizeof(Book));
	*b = *book;
	q->book = b;//p->next������ֵ
	q->next = NULL;//p->nextָ����Ϊ�գ��ȴ������������ӡ�
	p->next = q;// ָ�������ʼ�����ָ�뽨������
	return OK;
}

LNode* LocateELem(LinkList L, char ISBN[], char name[])          //---����
{
	int i = 0, choose = 0, flag = 0;//flag=1˵��ѡ��ʽ��ȷ��flag=-1˵�����ҵ�ͼ��
	LinkList p = L->next;//��ʼ����pָ����Ԫ���
	printf("\n\t��ѡ�����ͼ��ķ�ʽ�� 1.��ISBN���ң�2.�����ͼ��:\n");
	printf("\t�����룺");
	scanf("%d", &choose);
	while (flag != 1) {
		switch (choose) {
		case 1://���
			printf("\t������Ҫ����ͼ���ISBN��");
			scanf("%s", ISBN);
			while (p != NULL)
			{
				if (strcmp(ISBN, p->book->ISBN) == 0) {
					printf("\n\t���ҵ�ISBNΪ%s��ͼ�����Ϊ%d\n", ISBN, p->book->num);
					flag = -1;
					break;
				}
				p = p->next;
			}
			if (flag != -1)
				printf("\n\t�����ڸ�ͼ��\n");
			flag = 1;
			break;
		case 2://����
			printf("\t�������ͼ������֣�");
			scanf("%s", name);
			while (p != NULL)
			{
				if (strcmp(name, p->book->name) == 0) {
					printf("\n\t���ҵ��ͼ������Ϊ%s��ͼ�����Ϊ%d\n", name, p->book->num);
					flag = -1;
					break;
				}
				p = p->next;
			}
			if (flag != -1)
				printf("\n\t�������ͼ��\n");
			flag = 1;
			break;
		default:
			printf("\n\t���������룺");
			scanf("%d", &choose);
			break;
		}
	}
	return p;
}

Status Listinsert(LinkList L, LinkList p, LinkList q)          //---���
{
	char ISBN[20], name[N + 1];
	int price;
	Book* book = (Book*)malloc(1 * sizeof(Book));
	p = L;
	q = (LinkList)malloc(1 * sizeof(LNode));//������
	while (p->next != NULL)
	{
		p = p->next;
	}
	printf("\t������Ҫ��ӵ�ͼ����Ϣ��\n");
	printf("\t������ͼ���ISBN��"); scanf("%s", book->ISBN);
	printf("\t������ͼ������֣�"); scanf("%s", book->name);
	printf("\t������ͼ��ļ۸�"); scanf("%d", &(book->price));
	if (L->next == NULL)
	{
		book->num = 1;
	}
	else 
	{
		book->num = (p->book->num) + 1;
	}
	q->book = book;
	q->next = NULL;
	p->next = q;
	printf("\n\t��ӳɹ�\n");
	return OK;
}

Status ListDelete(LinkList L, LinkList p)                       //---ɾ��
{
	int i, j, num, flag = 0;
	char ISBN[20];
	LinkList q = (LinkList)malloc(1 * sizeof(LNode));//���汻�ͷŵĽ��
	LinkList temp = (LinkList)malloc(1 * sizeof(LNode));
	p = L;
	printf("\t��������Ҫɾ����ͼ���ISBN��"); scanf("%s", ISBN);
	while (p->next != NULL)
	{
		if (strcmp(ISBN, p->next->book->ISBN) == 0) {
			q = p->next;
			temp = p->next;
			flag = 1;
			break;
		}
		p = p->next;
	}
	if (flag != 1)
	{
		printf("\n\t�Ҳ�����ͼ��\n");
		return ERROR;
	}
	else {
		if (temp->next != NULL) {
			temp->next->book->num = temp->book->num;
			temp = temp->next;
		}
		while (temp->next != NULL) {
			temp->next->book->num = (temp->book->num) + 1;
			temp = temp->next;
		}
		if (q->next != NULL) {
			p->next = q->next;
			free(q);
		}
		else {
			p->next = NULL;
		}
		printf("\n\tɾ���ɹ�\n");
		return OK;
	}
}

Status ListAlter(LinkList L, LinkList p)                         //---�޸�
{
	int i, choose, price, flag = 0;
	char ISBN[20], name[N + 1];
	p = L;
	printf("\t��������Ҫ�޸ĵ�ͼ���ISBN��"); scanf("%s", ISBN);
	while (p->next != NULL)
	{
		if (strcmp(ISBN, p->next->book->ISBN) == 0) {
			p = p->next;
			flag = 1;
			break;
		}
		p = p->next;
	}
	if (flag == 1) {
		while (1)
		{
			printf("\t0. �˳��޸�\n");
			printf("\t1. �޸�ISBN\n");
			printf("\t2. �޸�����\n");
			printf("\t3. �޸ļ۸�\n");
			printf("\n\t��������Ҫѡ��Ĺ���ǰ�����:");
			scanf("%d", &choose);
			if (choose == 0)   break;
			switch (choose)
			{
			case 1://"1. �޸�ISBN");
				printf("\t������ͼ���ISBN��"); scanf("%s", ISBN);
				strcpy(p->book->ISBN, ISBN);
				break;
			case 2://"2. �޸�����");
				printf("\t������ͼ������֣�"); scanf("%s", name);
				strcpy(p->book->name, name);
				break;
			case 3://3. �޸ļ۸�");
				printf("\t������ͼ��ļ۸�"); scanf("%d", &price);
				p->book->price = price;
				break;
			}
		}//while
		printf("\n\t�޸ĳɹ�\n");
	}
	else {
		printf("\t�Ҳ�����ͼ��\n");
		return ERROR;
	}
	return OK;
}

Status ListOrder(LinkList L)                                        //---�۸�����
{
	LinkList E = (LinkList)malloc(1 * sizeof(LNode));
	LinkList p = (LinkList)malloc(1 * sizeof(LNode));
	LinkList q = (LinkList)malloc(1 * sizeof(LNode));
	Book* temp = (Book*)malloc(1 * sizeof(Book));
	E = L;
	L = L->next;
	while (L->next != NULL)
	{
		p = L;
		q = L->next;
		while (q != NULL)
		{
			if (p->book->price > q->book->price)
			{
				temp = p->book;
				p->book = q->book;
				q->book = temp;
			}
			q = q->next;
		}
		L = L->next;
	}
	L = E->next;
	printf("\n\t���\t\tISBN\t\t����\t\t\t�۸�\n");
	while (L != NULL)
	{
		printf("\t %d \t %-13s \t %-22s \t %d\n", L->book->num, L->book->ISBN, L->book->name, L->book->price);
		L = L->next;
	}
	L = E;
	return OK;
}
Status ListDefaultOrder(LinkList L)                                  //---Ĭ������
{
	LinkList E = (LinkList)malloc(1 * sizeof(LNode));
	LinkList p = (LinkList)malloc(1 * sizeof(LNode));
	LinkList q = (LinkList)malloc(1 * sizeof(LNode));
	Book* temp = (Book*)malloc(1 * sizeof(Book));
	E = L;
	L = L->next;
	while (L->next != NULL)
	{
		p = L;
		q = L->next;
		while (q != NULL)
		{
			if (p->book->num > q->book->num)
			{
				temp = p->book;
				p->book = q->book;
				q->book = temp;
			}
			q = q->next;
		}
		L = L->next;
	}
	L = E;
	return OK;
}

int GetNumber(LinkList L)                                          //---ͳ�Ƹ���
{
	LinkList p = (LinkList)malloc(1 * sizeof(LNode));
	p = L;
	while (p->next != NULL)
	{
		p = p->next;
	}
	return p->book->num;
}

Status Remove(LinkList L)                                        //ȥ��ͼ��
{
	LinkList temp1 = L->next, PreNode = L;
	int BookNum = 0;
	if (temp1 != NULL)
	{
		printf("��������Ҫȥ�ص�ͼ��ĵ�һ�������\n");
		scanf("%d", &BookNum);
		while (temp1 != NULL)
		{
			if (temp1->book->num == BookNum)
			{
				break;
			}
			PreNode = temp1;
			temp1 = temp1->next;//�¸��ڵ��ָ��
		}
		if (temp1 == NULL)
		{
			printf("�Ҳ�����ͼ��\n");
			return ERROR;
		}
		if (temp1->book->num == BookNum)
		{
			char BookISBN[MAXISBN] = { 0 };
			strcpy(BookISBN, temp1->book->ISBN);//����Ҫȥ�ص�ͼ���ISBN�������
			LinkList temp2 = temp1->next, DelNode = NULL;
			PreNode = temp1;
			while (temp2 != NULL)
			{
				if (strcmp(BookISBN, temp2->book->ISBN) == 0)//�Ƚ�ISBN�Ƿ����
				{
					DelNode = temp2;
					PreNode->next = temp2->next;
					temp2 = PreNode;
					free(DelNode);//�ͷ��ڴ�
					DelNode = NULL;//�ÿ�ָ��
				}
				PreNode = temp2;//�ýڵ��ָ��
				temp2 = temp2->next;//��һ���ڵ��ָ��
			}
			printf("�����ȥ��\n");
		}
	}
	else
	{
		printf("��ϵͳ������Ϊ��\n");
	}
	return OK;
}

Status Listinverted(LinkList L)                                      //��������
{
	LinkList E = (LinkList)malloc(1 * sizeof(LNode));
	LinkList p = (LinkList)malloc(1 * sizeof(LNode));
	LinkList q = (LinkList)malloc(1 * sizeof(LNode));
	Book* temp = (Book*)malloc(1 * sizeof(Book));
	E = L;
	L = L->next;
	while (L->next != NULL)
	{
		p = L;
		q = L->next;
		while (q != NULL)
		{
			if (p->book->num < q->book->num)
			{
				temp = p->book;
				p->book = q->book;
				q->book = temp;
			}
			q = q->next;
		}
		L = L->next;
	}
	L = E->next;
	printf("\t---------------------------------------------------------------(����)\n");
	printf("\n\t���\t\tISBN\t\t����\t\t\t�۸�\n");
	while (L != NULL)
	{
		printf("\t %d \t %-13s \t %-22s \t %d\n", L->book->num, L->book->ISBN, L->book->name, L->book->price);
		L = L->next;
	}
	printf("\t---------------------------------------------------------------\n");
	L = E;
	return OK;
}

Status ExpensiveBooks(LinkList L)                                   //��������ͼ��   
{
	LinkList p = L->next, temp = L;
	int Maxprice = -1;
	if (p != NULL)
	{
		while (p != NULL)
		{
			if (p->book->price > Maxprice)
			{
				Maxprice = p->book->price;
				temp = p;
			}
			p = p->next;
		}
		if (Maxprice != -1)
		{
			printf("\n\t���ҵ�����ͼ��۸�Ϊ%d��ͼ�����Ϊ%d\n", temp->book->price, temp->book->num);
		}
	}
	else
	{
		printf("\tϵͳ����ͼ��\n");
	}
	return OK;
}

 Status locationBooks(LinkList L)                                          //�������λ��ͼ��
{
	LinkList p = L->next, temp = L;
	int Goodnum = -1, num1 = 0, length = 0;
	printf("\t�����뵱ǰ�������Ϊ���λ�õ����:");
	scanf("%d", &num1);
	length = GetNumber(L);
	if (num1 <= length)
	{
		if (p != NULL)
		{
			while (p != NULL)
			{
				if (p->book->num == num1)
				{
					Goodnum = p->book->num;
					temp = p;
				}
				p = p->next;
			}
			if (Goodnum != -1)
			{
				printf("\t���λ�õ�ͼ����ϢΪ:\n");
				printf("\t���\t\tISBN\t\t����\t\t\t�۸�\n");
				printf("\t %d \t %-13s \t %-22s \t %d\n", temp->book->num, temp->book->ISBN, temp->book->name, temp->book->price);
			}
		}
		else
		{
			printf("\tϵͳ����ͼ��\n");
		}
	}
	else
		printf("\tϵͳ���޴����ͼ��\n");
	return OK;
}

Status showbook(LinkList L)                                                 //��ʾͼ���                       
{
	LinkList q = L;
	if (L->next == NULL)
	{
		printf("\t��ϵͳ��ͼ��\n");
		return ERROR;
	}
	if (q->next != NULL)
	{
		LinkList p = (LinkList)malloc(1 * sizeof(LNode));
		p = q->next;
		printf("\t---------------------------------------------------------------(����)\n");
		printf("\t���\t\tISBN\t\t����\t\t\t�۸�\n");
		while (p != NULL)
		{
			printf("\t %d \t %-13s \t %-22s \t %d\n", p->book->num, p->book->ISBN, p->book->name, p->book->price);
			p = p->next;
		}
		free(p);
		p = NULL;
		printf("\t---------------------------------------------------------------\n");
	}
	return OK;
}
Status poplist(LinkList L)//βɾ
{
	if (L->next == NULL)
	{
		printf("��ϵͳ������Ϊ��\n");
		return OK;
	}
	LinkList temp = L->next, pretemp = L;
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			pretemp = temp;
			temp = temp->next;
		}
		free(temp->book);
		free(temp);
		temp = NULL;
		pretemp->next = NULL;
	}
	else
	{
		printf("��ϵͳ������Ϊ��\n");
		return OK;
	}
	printf("ɾ���ɹ�\n");
}
void exit1(LinkList* L,int flag)
{
	if ((*L)->next != NULL)
	{
		LinkList p = (*L)->next, q = p;
		while (p != NULL)
		{
			q = p;
			q->book = p->book;
			p = p->next;

			free(q->book);
			q->book = NULL;
			free(q);
			q = NULL;
		}
	}
	free((*L));
	*L = NULL;
}