#include<stdio.h>
struct employee
{
	char name[20];
	float salary;
	int age ;
}s[3];
 main()
{
	int i=0;
	for(i=0;i<3;i++)
	{
	printf("\nenter details for employee:%d\n",i);
	printf("enter name:\n");
	scanf("%s",&s[i].name);
	printf("enter salary:\n");
	scanf("%f",&s[i].salary);
	printf("enter age:\n");
	scanf("%d",&s[i].age);
    }
}
