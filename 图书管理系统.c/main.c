#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
//---------------------------------���˵�---------------------------------(������)
int main()
{
	LinkList L = NULL, p = NULL, temp = NULL;
	char ISBN[20], name[N + 1];
	int length = 0;
	system("color f1");//������ɫ
	FILE* fp = fopen("DataBase.dat", "rb");
	InitList(&L);
	if (fp == NULL)
	{
		Book  book1 = { 1, "9787302257646","������ƻ���",25 };
		Book  book2 = { 2, "9787302219972","��Ƭ��������Ӧ��",32 };
		Book  book3 = { 3, "9787302203513","����ԭ��",46 };
		Book  book4 = { 4, "9787811234923","������Գ�����ƽ̳�",21 };
		Book  book5 = { 5, "9787512100831","���������ϵͳ",17 };
		Book  book6 = { 6, "9787302265436","���������ʵ��ָ��",18 };
		Book  book7 = { 7, "9787302180630","ʵ�����ݽṹ",29 };
		Book  book8 = { 8, "9787302225065","���ݽṹ(C���԰�)",38 };
		Book  book9 = { 9, "9787302171676","C#�������������",39 };
		Book  book10 = { 10,"9787302250692","C���Գ������",42 };
		Book  book11 = { 11,"9787302150664","���ݿ�ԭ��",35 };
		Book  book12 = { 12,"9787302260806","Java�����ʵ��",56 };
		Book  book13 = { 13,"9787302252887","Java���������Ӧ�ý̳�",39 };
		Book  book14 = { 14,"9787302198505","Ƕ��ʽ����ϵͳ�����",25 };
		Book  book15 = { 15,"9787302169666","�������",24 };
		Book  book16 = { 16,"9787811231557","Eclipse������Ӧ��",35 };
		
		InitList(&p);//��ʼ��ͷָ�룬L��ͷָ��ʼ��ָ��ͷ�ڵ�
		CreateList(p, p->next, &book1);             //����L��p��������գ�ָ����ָ���
		p = p->next;  //p��ָ����ָ���һ��ͼ����Ϣ
		L->next = p;  //L����һ��ָ����Ԫ���
		CreateList(p, p->next, &book2);
		p = p->next;
		CreateList(p, p->next, &book3);
		p = p->next;
		CreateList(p, p->next, &book4);
		p = p->next;
		CreateList(p, p->next, &book5);
		p = p->next;
		CreateList(p, p->next, &book6);
		p = p->next;
		CreateList(p, p->next, &book7);
		p = p->next;
		CreateList(p, p->next, &book8);
		p = p->next;
		CreateList(p, p->next, &book9);
		p = p->next;
		CreateList(p, p->next, &book10);
		p = p->next;
		CreateList(p, p->next, &book11);
		p = p->next;
		CreateList(p, p->next, &book12);
		p = p->next;
		CreateList(p, p->next, &book13);
		p = p->next;
		CreateList(p, p->next, &book14);
		p = p->next;
		CreateList(p, p->next, &book15);
		p = p->next;
		CreateList(p, p->next, &book16);
		p = p->next;       //����p��16
	}
	else//��ȡ�ļ�����
	{
		LinkList tail = L;
		Book* pb = NULL;
		while (!feof(fp))
		{
			InitList(&p);
			Book* pb = (Book*)malloc(sizeof(Book));
			p->book = pb;
			if (p != NULL)
			{
				fread(pb, sizeof(Book), 1, fp);
				tail->next = p;
				p->next = NULL;
				tail = p;
			}
			else
			{
				exit(-1);
			}
		}
		fclose(fp);
		fp = NULL;
		poplist(L);
	}
	system("cls");

	menu();     //��ӡ�˵�
	showbook(L);//���������,��ʾͼ���

	while (1)
	{
		int choose = 0;
		printf("\n\t��������Ҫѡ��Ĺ���ǰ�����:");
		scanf("%d", &choose);

		if (choose == 0)
		{
			fp = fopen("DataBase.dat", "wb");
			temp = L->next;
			while (temp != NULL)
			{
				fwrite(temp->book, sizeof(Book), 1, fp);
				temp = temp->next;	
			}
			fclose(fp);
			fp = NULL;
			exit1(&L);
			printf("\n\t�˳��ɹ���ллʹ��ͼ����Ϣ����ϵͳ��");
			break;
		}

		switch (choose)
		{
		case 1:                 //1. �����ͼ����ISBN��
			LocateELem(L, ISBN, name);
			break;
		case 2:                 //2. ��ͼ����� 
			Listinsert(L, p, p->next);
			break;
		case 3:                 //3. ��ͼ����� 
			ListDelete(L, p);
			break;
		case 4:                 //4. �޸�ͼ��
			ListAlter(L, p);
			break;
		case 5:                 //5. ��ͼ��۸�����
			ListOrder(L);
			ListDefaultOrder(L);//   Ĭ�ϰ��������
			break;
		case 6:                 //6. ͳ��ͼ������
			length = GetNumber(L);
			printf("\n\t����%d��ͼ��\n", length);
			break;
		case 7:                 //7. ȥ��ͼ��
			Remove(L);
			break;
		case 8:                 //8. ��������
			Listinverted(L);
			ListDefaultOrder(L);//   Ĭ�ϰ��������
			break;
		case 9:                 //9. ��������ͼ��
			ExpensiveBooks(L);
			break;
		case 10:                //10. �������λ��ͼ��
			locationBooks(L);
		case 11:                //11. ��ʾͼ���(��������ͼ��)
			showbook(L);
			break;
		case 12:
			poplist(L);			//βɾ
			break;
		default:
			printf("����������\n");
		}
	}
	return 0;
}