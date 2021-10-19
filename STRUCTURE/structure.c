#include<stdio.h>
struct StudentData 
{
	char stu_name[30];
	int stu_id;
	int stu_age;
};
int main(){
struct StudentData student1,student2,student3;
//student data 1:
printf("Enter number :");
gets(student1.stu_name);
printf("Enter roll :");
scanf("%d",&student1.stu_id);
printf("Enter age :");
scanf("%d",&student1.stu_age);
printf("\n");
//student data 2:
printf("Enter name :");
gets(student2.stu_name);
printf("Enter roll :");
scanf("%d",&student2.stu_id);
printf("Enter age :");
scanf("%d",&student2.stu_age);
printf("\n");
//student data 3:
printf("Enter name :");
gets(student3.stu_name);
printf("Enter roll :");
scanf("%d",&student3.stu_id);
printf("Enter age :");
scanf("%d",&student3.stu_age);
printf("\n");
			
//puts(student.stu_name);
printf("Student Name is : %s\n",student1.stu_name);
printf("Student Id is : %d\n",student1.stu_id);
printf("Student Age is : %d\n",student1.stu_age);

printf("\nStudent Name is : %s\n",student2.stu_name);
printf("Student Id is : %d\n",student2.stu_id);
printf("Student Age is : %d\n",student2.stu_age);

printf("\nStudent Name is : %s\n",student3.stu_name);
printf("Student Id is : %d\n",student3.stu_id);
printf("Student Age is : %d\n",student3.stu_age);

return 0;
}
