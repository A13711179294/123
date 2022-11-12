#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N   100 
#define OK  1
#define ERROR  0
#define MAXISBN 20

typedef int Status;

typedef struct Book
{
	int   num;             //序号
	char  ISBN[MAXISBN];   //书号
	char  name[N + 1];     //书名
	int   price;           //价格
}Book;

typedef struct LNode
{
	Book* book;        //结点的数据域
	struct LNode* next;//结点的指针域
}LNode, * LinkList;    //LinkList 为指向结构体 LNode 的指针类型

void menu();                                            //主菜单
Status InitList(LinkList* L);                           //初始化指针L
Status CreateList(LinkList L, LinkList q, Book* book);  //初始化指针L的next指针p
LNode* LocateELem(LinkList L, char ISBN[], char name[]);//1 查找ISBN码和最爱图书
Status Listinsert(LinkList L, LinkList p, LinkList q);  //2 添加
Status ListDelete(LinkList L, LinkList p);  //3 删除
Status ListAlter(LinkList L, LinkList p);   //4 修改
Status ListOrder(LinkList L);               //5 价格排序
Status ListDefaultOrder(LinkList L);        //5 默认排序
int GetNumber(LinkList L);                  //6 统计个数
Status Remove(LinkList L);                  //7 图书去重
Status Listinverted(LinkList L);            //8 逆序排序
Status ExpensiveBooks(LinkList L);          //9 查找最贵的图书
Status locationBooks(LinkList L);           //10 查找最佳位置图书
Status showbook(LinkList L);     //11 显示图书库
Status poplist(LinkList L);		//尾删
void exit1(LinkList* L);			//退出程序