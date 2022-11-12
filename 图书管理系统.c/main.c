#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
//---------------------------------主菜单---------------------------------(单链表)
int main()
{
	LinkList L = NULL, p = NULL, temp = NULL;
	char ISBN[20], name[N + 1];
	int length = 0;
	system("color f1");//字体颜色
	FILE* fp = fopen("DataBase.dat", "rb");
	InitList(&L);
	if (fp == NULL)
	{
		Book  book1 = { 1, "9787302257646","程序设计基础",25 };
		Book  book2 = { 2, "9787302219972","单片机技术及应用",32 };
		Book  book3 = { 3, "9787302203513","编译原理",46 };
		Book  book4 = { 4, "9787811234923","汇编语言程序设计教程",21 };
		Book  book5 = { 5, "9787512100831","计算机操作系统",17 };
		Book  book6 = { 6, "9787302265436","计算机导论实验指导",18 };
		Book  book7 = { 7, "9787302180630","实用数据结构",29 };
		Book  book8 = { 8, "9787302225065","数据结构(C语言版)",38 };
		Book  book9 = { 9, "9787302171676","C#面向对象程序设计",39 };
		Book  book10 = { 10,"9787302250692","C语言程序设计",42 };
		Book  book11 = { 11,"9787302150664","数据库原理",35 };
		Book  book12 = { 12,"9787302260806","Java编程与实践",56 };
		Book  book13 = { 13,"9787302252887","Java程序设计与应用教程",39 };
		Book  book14 = { 14,"9787302198505","嵌入式操作系统及编程",25 };
		Book  book15 = { 15,"9787302169666","软件测试",24 };
		Book  book16 = { 16,"9787811231557","Eclipse基础与应用",35 };
		
		InitList(&p);//初始化头指针，L做头指针始终指向头节点
		CreateList(p, p->next, &book1);             //现在L和p的数据域空，指针域指向空
		p = p->next;  //p的指针域指向第一条图书信息
		L->next = p;  //L的下一个指向首元结点
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
		p = p->next;       //现在p在16
	}
	else//读取文件内容
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

	menu();     //打印菜单
	showbook(L);//输出单链表,显示图书库

	while (1)
	{
		int choose = 0;
		printf("\n\t请输入你要选择的功能前的序号:");
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
			printf("\n\t退出成功，谢谢使用图书信息管理系统！");
			break;
		}

		switch (choose)
		{
		case 1:                 //1. 查找最爱图书与ISBN码
			LocateELem(L, ISBN, name);
			break;
		case 2:                 //2. 新图书入库 
			Listinsert(L, p, p->next);
			break;
		case 3:                 //3. 旧图书出库 
			ListDelete(L, p);
			break;
		case 4:                 //4. 修改图书
			ListAlter(L, p);
			break;
		case 5:                 //5. 按图书价格排序
			ListOrder(L);
			ListDefaultOrder(L);//   默认按序号排序
			break;
		case 6:                 //6. 统计图书数量
			length = GetNumber(L);
			printf("\n\t共有%d本图书\n", length);
			break;
		case 7:                 //7. 去重图书
			Remove(L);
			break;
		case 8:                 //8. 逆序排序
			Listinverted(L);
			ListDefaultOrder(L);//   默认按序号排序
			break;
		case 9:                 //9. 查找最贵的图书
			ExpensiveBooks(L);
			break;
		case 10:                //10. 查找最佳位置图书
			locationBooks(L);
		case 11:                //11. 显示图书库(正序排序图书)
			showbook(L);
			break;
		case 12:
			poplist(L);			//尾删
			break;
		default:
			printf("请重新输入\n");
		}
	}
	return 0;
}