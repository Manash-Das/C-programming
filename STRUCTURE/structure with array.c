#include<stdio.h>
struct StudentData 
{
	char stu_name[30];
	int stu_id;
	int stu_age;
};
int main()
{
	int i;
	struct StudentData student[5];
	for(i=0;i<5;i++)
	{
		printf("Enter name :");
		scanf("%s",&student[i].stu_name);
		printf("Enter roll :");
		scanf("%d",&student[i].stu_id);
		printf("Enter age :");
		scanf("%d",&student[i].stu_age);
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		printf("Student Name is : %s\n",student[i].stu_name);
		printf("Student Id is : %d\n",student[i].stu_id);
		printf("Student Age is : %d\n",student[i].stu_age);
	}
	
	return 0;
}
