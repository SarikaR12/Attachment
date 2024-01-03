#include<stdio.h>

struct student{
	char id[100];
	char name[100];
	int age;
	char course[100];
	char city[100];
	int std;
	char school[100];
};

main()
{
	int n;
	printf("Enter student count = ");
	scanf("%d",&n);
	struct student s[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter student id =");
		scanf("%s",&s[i].id);
		printf("Enter student name =");
		scanf("%s",&s[i].name);
		printf("Enter student age=");
		scanf("%d",&s[i].age);
		printf("Enter student course =");
		scanf("%s",&s[i].course);
		printf("Enter student city =");
		scanf("%s",&s[i].city);
		printf("Enter student std =");
		scanf("%d",&s[i].std);
		printf("Enter student school =");
		scanf("%s",&s[i].school);
	}
	printf("\n----------------student structure----------\n");
	for(i=0;i<n;i++)
	{
		printf("\nstudent id = %s\n",s[i].id);
		printf("student name =%s\n",s[i].name);
		printf("student age =%d\n ",s[i].age);
		printf("student course =%s\n ",s[i].course);
		printf("student city =%s\n ",s[i].city);
		printf("student std =%d\n ",s[i].std);
		printf("student school =%s\n ",s[i].school);
	}
	
}