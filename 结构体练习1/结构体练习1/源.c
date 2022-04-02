#include<stdio.h>
struct Book 
{
	char name[20];
	char id[20];
	int price; 
};
int main()
{
	struct Book b = { "C语言","12345678",50 };
	struct Book* pb = &b;
	printf("书名：%s\n", b.name);
	printf("书号：%s\n", b.id);
	printf("定价：%d\n", b.price);
	printf("书名：%s\n", pb->name);
	printf("书号：%s\n", pb->id);
	printf("定价：%d\n", pb->price);
	printf("书名：%s\n", (*pb).name);
	printf("书号：%s\n", (*pb).id);
	printf("定价：%d\n", (*pb).price);
	return 0;
}