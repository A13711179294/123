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
	int   num;             //���
	char  ISBN[MAXISBN];   //���
	char  name[N + 1];     //����
	int   price;           //�۸�
}Book;

typedef struct LNode
{
	Book* book;        //����������
	struct LNode* next;//����ָ����
}LNode, * LinkList;    //LinkList Ϊָ��ṹ�� LNode ��ָ������

void menu();                                            //���˵�
Status InitList(LinkList* L);                           //��ʼ��ָ��L
Status CreateList(LinkList L, LinkList q, Book* book);  //��ʼ��ָ��L��nextָ��p
LNode* LocateELem(LinkList L, char ISBN[], char name[]);//1 ����ISBN����ͼ��
Status Listinsert(LinkList L, LinkList p, LinkList q);  //2 ���
Status ListDelete(LinkList L, LinkList p);  //3 ɾ��
Status ListAlter(LinkList L, LinkList p);   //4 �޸�
Status ListOrder(LinkList L);               //5 �۸�����
Status ListDefaultOrder(LinkList L);        //5 Ĭ������
int GetNumber(LinkList L);                  //6 ͳ�Ƹ���
Status Remove(LinkList L);                  //7 ͼ��ȥ��
Status Listinverted(LinkList L);            //8 ��������
Status ExpensiveBooks(LinkList L);          //9 ��������ͼ��
Status locationBooks(LinkList L);           //10 �������λ��ͼ��
Status showbook(LinkList L);     //11 ��ʾͼ���
Status poplist(LinkList L);		//βɾ
void exit1(LinkList* L);			//�˳�����