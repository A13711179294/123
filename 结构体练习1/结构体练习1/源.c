#include<stdio.h>
struct Book 
{
	char name[20];
	char id[20];
	int price; 
};
int main()
{
	struct Book b = { "C����","12345678",50 };
	struct Book* pb = &b;
	printf("������%s\n", b.name);
	printf("��ţ�%s\n", b.id);
	printf("���ۣ�%d\n", b.price);
	printf("������%s\n", pb->name);
	printf("��ţ�%s\n", pb->id);
	printf("���ۣ�%d\n", pb->price);
	printf("������%s\n", (*pb).name);
	printf("��ţ�%s\n", (*pb).id);
	printf("���ۣ�%d\n", (*pb).price);
	return 0;
}