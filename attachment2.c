#include<stdio.h>

struct employee{
	char emp_id[100];
	char emp_name[100];
	int emp_age;
	int emp_roll;
	int emp_experience;
	char emp_city[100];
	char emp_company_name[100];
};

main()
{
	int n;
	printf("Enter employee count = ");
	scanf("%d",&n);
	struct employee s[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter  emp_id =");
		scanf("%s",&s[i].emp_id);
		printf("Enter emp_name =");
		scanf("%s",&s[i].emp_name);
		printf("Enter emp_age=");
		scanf("%d",&s[i].emp_age);
		printf("Enter emp_roll =");
		scanf("%d",&s[i].emp_roll);
		printf("Enter emp_experience =");
		scanf("%d",&s[i].emp_experience);
		printf("Enter emp_city =");
		scanf("%d",&s[i].emp_city);
		printf("Enter emp_company_name =");
		scanf("%s",&s[i].emp_company_name);
	}
	printf("\n----------------employment structure----------\n");
	for(i=0;i<n;i++)
	{
		printf("student id = %s\n",s[i].emp_id);
		printf("student name =%s\n",s[i].emp_name);
		printf("student age =%d\n ",s[i].emp_age);
		printf("student course =%d\n ",s[i].emp_roll);
		printf("student experience =%d\n ",s[i].emp_experience);
		printf("student city =%d\n ",s[i].emp_city);
		printf("student company_name =%s\n",s[i].emp_company_name);
	}
}