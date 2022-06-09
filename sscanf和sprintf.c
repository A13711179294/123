#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct S
{
	char ch[10];
	int i;
	float f;
};
int main()
{
	struct S s = { "hello",20,5.5f };
	struct S tmp = { 0 };
	char buf[100] = { 0 };
	sprintf(buf, "%s %d %f", s.ch,s.i,s.f);
	printf("%s\n", buf);
	sscanf(buf, "%s %d %f", tmp.ch, &(tmp.i), &(tmp.f));
	printf("%s %d %f\n",tmp.ch,tmp.i,tmp.f);
	return 0;
}
