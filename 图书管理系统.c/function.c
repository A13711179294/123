#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
void menu()                                                     //主菜单
{
	printf("\t--------------------------------------\n");
	printf("\t    ——欢迎使用图书信息管理系统——  \n");
	printf("\t  0. 退出学图书信息管理系统           \n");
	printf("\t  1. 查找最爱图书与ISBN码             \n"); // 1.ISBN 2.最爱的图书
	printf("\t  2. 新图书入库                       \n");
	printf("\t  3. 旧图书出库                       \n");
	printf("\t  4. 修改图书                         \n");
	printf("\t  5. 按图书价格排序                   \n"); // 价格排序后变回默认排序
	printf("\t  6. 统计图书数量                     \n");
	printf("\t  7. 图书去重                         \n");
	printf("\t  8. 逆序排序                         \n");
	printf("\t  9. 查找最贵的图书                   \n");
	printf("\t  10.查找最佳位置图书                 \n");
	printf("\t  11.显示图书库                       \n");
	printf("\t  12.尾删                             \n");
	printf("\t--------------------------------------\n");
}
//---------------------------------主函数---------------------------------(单链表)

Status InitList(LinkList* L)                                   //---初始化指针L
{
	*L = (LinkList)malloc(1 * sizeof(LNode));
	(*L)->next = NULL;                                         //★
	return OK;
}
Status CreateList(LinkList p, LinkList q, Book* book)          //---初始化指针L的next指针p
{                                                              //q = p->next;
	q = (LinkList)malloc(1 * sizeof(LNode));//p->next初始化★
	Book* b = (Book*)malloc(1 * sizeof(Book));
	*b = *book;
	q->book = b;//p->next数据域赋值
	q->next = NULL;//p->next指针域为空，等待后续建立连接★
	p->next = q;// 指针域与初始化后的指针建立连接
	return OK;
}

LNode* LocateELem(LinkList L, char ISBN[], char name[])          //---查找
{
	int i = 0, choose = 0, flag = 0;//flag=1说明选择方式正确；flag=-1说明查找到图书
	LinkList p = L->next;//初始化，p指向首元结点
	printf("\n\t请选择查找图书的方式： 1.按ISBN查找，2.查找最爱图书:\n");
	printf("\t请输入：");
	scanf("%d", &choose);
	while (flag != 1) {
		switch (choose) {
		case 1://序号
			printf("\t请输入要查找图书的ISBN：");
			scanf("%s", ISBN);
			while (p != NULL)
			{
				if (strcmp(ISBN, p->book->ISBN) == 0) {
					printf("\n\t查找到ISBN为%s的图书序号为%d\n", ISBN, p->book->num);
					flag = -1;
					break;
				}
				p = p->next;
			}
			if (flag != -1)
				printf("\n\t不存在该图书\n");
			flag = 1;
			break;
		case 2://名字
			printf("\t请输入最爱图书的名字：");
			scanf("%s", name);
			while (p != NULL)
			{
				if (strcmp(name, p->book->name) == 0) {
					printf("\n\t查找到最爱图书名字为%s的图书序号为%d\n", name, p->book->num);
					flag = -1;
					break;
				}
				p = p->next;
			}
			if (flag != -1)
				printf("\n\t不存在最爱图书\n");
			flag = 1;
			break;
		default:
			printf("\n\t请重新输入：");
			scanf("%d", &choose);
			break;
		}
	}
	return p;
}

Status Listinsert(LinkList L, LinkList p, LinkList q)          //---添加
{
	char ISBN[20], name[N + 1];
	int price;
	Book* book = (Book*)malloc(1 * sizeof(Book));
	p = L;
	q = (LinkList)malloc(1 * sizeof(LNode));//插入结点
	while (p->next != NULL)
	{
		p = p->next;
	}
	printf("\t请输入要添加的图书信息：\n");
	printf("\t请输入图书的ISBN："); scanf("%s", book->ISBN);
	printf("\t请输入图书的名字："); scanf("%s", book->name);
	printf("\t请输入图书的价格："); scanf("%d", &(book->price));
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
	printf("\n\t添加成功\n");
	return OK;
}

Status ListDelete(LinkList L, LinkList p)                       //---删除
{
	int i, j, num, flag = 0;
	char ISBN[20];
	LinkList q = (LinkList)malloc(1 * sizeof(LNode));//保存被释放的结点
	LinkList temp = (LinkList)malloc(1 * sizeof(LNode));
	p = L;
	printf("\t请输入你要删除的图书的ISBN："); scanf("%s", ISBN);
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
		printf("\n\t找不到此图书\n");
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
		printf("\n\t删除成功\n");
		return OK;
	}
}

Status ListAlter(LinkList L, LinkList p)                         //---修改
{
	int i, choose, price, flag = 0;
	char ISBN[20], name[N + 1];
	p = L;
	printf("\t请输入你要修改的图书的ISBN："); scanf("%s", ISBN);
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
			printf("\t0. 退出修改\n");
			printf("\t1. 修改ISBN\n");
			printf("\t2. 修改名字\n");
			printf("\t3. 修改价格\n");
			printf("\n\t请输入你要选择的功能前的序号:");
			scanf("%d", &choose);
			if (choose == 0)   break;
			switch (choose)
			{
			case 1://"1. 修改ISBN");
				printf("\t请输入图书的ISBN："); scanf("%s", ISBN);
				strcpy(p->book->ISBN, ISBN);
				break;
			case 2://"2. 修改名字");
				printf("\t请输入图书的名字："); scanf("%s", name);
				strcpy(p->book->name, name);
				break;
			case 3://3. 修改价格");
				printf("\t请输入图书的价格："); scanf("%d", &price);
				p->book->price = price;
				break;
			}
		}//while
		printf("\n\t修改成功\n");
	}
	else {
		printf("\t找不到此图书\n");
		return ERROR;
	}
	return OK;
}

Status ListOrder(LinkList L)                                        //---价格排序
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
	printf("\n\t序号\t\tISBN\t\t名字\t\t\t价格\n");
	while (L != NULL)
	{
		printf("\t %d \t %-13s \t %-22s \t %d\n", L->book->num, L->book->ISBN, L->book->name, L->book->price);
		L = L->next;
	}
	L = E;
	return OK;
}
Status ListDefaultOrder(LinkList L)                                  //---默认排序
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

int GetNumber(LinkList L)                                          //---统计个数
{
	LinkList p = (LinkList)malloc(1 * sizeof(LNode));
	p = L;
	while (p->next != NULL)
	{
		p = p->next;
	}
	return p->book->num;
}

Status Remove(LinkList L)                                        //去重图书
{
	LinkList temp1 = L->next, PreNode = L;
	int BookNum = 0;
	if (temp1 != NULL)
	{
		printf("请输入需要去重的图书的第一个的序号\n");
		scanf("%d", &BookNum);
		while (temp1 != NULL)
		{
			if (temp1->book->num == BookNum)
			{
				break;
			}
			PreNode = temp1;
			temp1 = temp1->next;//下个节点的指针
		}
		if (temp1 == NULL)
		{
			printf("找不到该图书\n");
			return ERROR;
		}
		if (temp1->book->num == BookNum)
		{
			char BookISBN[MAXISBN] = { 0 };
			strcpy(BookISBN, temp1->book->ISBN);//把需要去重的图书的ISBN码存起来
			LinkList temp2 = temp1->next, DelNode = NULL;
			PreNode = temp1;
			while (temp2 != NULL)
			{
				if (strcmp(BookISBN, temp2->book->ISBN) == 0)//比较ISBN是否相等
				{
					DelNode = temp2;
					PreNode->next = temp2->next;
					temp2 = PreNode;
					free(DelNode);//释放内存
					DelNode = NULL;//置空指针
				}
				PreNode = temp2;//该节点的指针
				temp2 = temp2->next;//下一个节点的指针
			}
			printf("已完成去重\n");
		}
	}
	else
	{
		printf("该系统存书量为零\n");
	}
	return OK;
}

Status Listinverted(LinkList L)                                      //逆序排序
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
	printf("\t---------------------------------------------------------------(逆序)\n");
	printf("\n\t序号\t\tISBN\t\t名字\t\t\t价格\n");
	while (L != NULL)
	{
		printf("\t %d \t %-13s \t %-22s \t %d\n", L->book->num, L->book->ISBN, L->book->name, L->book->price);
		L = L->next;
	}
	printf("\t---------------------------------------------------------------\n");
	L = E;
	return OK;
}

Status ExpensiveBooks(LinkList L)                                   //查找最贵的图书   
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
			printf("\n\t查找到最贵的图书价格为%d的图书序号为%d\n", temp->book->price, temp->book->num);
		}
	}
	else
	{
		printf("\t系统内无图书\n");
	}
	return OK;
}

 Status locationBooks(LinkList L)                                          //查找最佳位置图书
{
	LinkList p = L->next, temp = L;
	int Goodnum = -1, num1 = 0, length = 0;
	printf("\t请输入当前书库您认为最佳位置的序号:");
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
				printf("\t最佳位置的图书信息为:\n");
				printf("\t序号\t\tISBN\t\t名字\t\t\t价格\n");
				printf("\t %d \t %-13s \t %-22s \t %d\n", temp->book->num, temp->book->ISBN, temp->book->name, temp->book->price);
			}
		}
		else
		{
			printf("\t系统内无图书\n");
		}
	}
	else
		printf("\t系统内无此序号图书\n");
	return OK;
}

Status showbook(LinkList L)                                                 //显示图书库                       
{
	LinkList q = L;
	if (L->next == NULL)
	{
		printf("\t该系统无图书\n");
		return ERROR;
	}
	if (q->next != NULL)
	{
		LinkList p = (LinkList)malloc(1 * sizeof(LNode));
		p = q->next;
		printf("\t---------------------------------------------------------------(正序)\n");
		printf("\t序号\t\tISBN\t\t名字\t\t\t价格\n");
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
Status poplist(LinkList L)//尾删
{
	if (L->next == NULL)
	{
		printf("该系统存书量为零\n");
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
		printf("该系统存书量为零\n");
		return OK;
	}
	printf("删除成功\n");
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