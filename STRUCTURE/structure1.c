#include<stdio.h>
struct book
{
	char name;
	float price;
	int pages;
};
int main()
{
	struct book b1,b2,b3;
	printf("Enter names,price,& no. of pages of book\n");
	scanf("%c %f %d",&b1.name,&b1.price,&b1.pages);
	scanf("%c %f %d",&b2.name,&b2.price,&b2.pages);
	scanf("%c %f %d",&b3.name,&b3.price,&b3.pages);
	printf("And this is what you entered\n");
	printf("%c %f %d\n",b1.name,b1.price,b1.pages);
	printf("%c %f %d\n",b2.name,b2.price,b2.pages);
	printf("%c %f %d\n",b3.name,b3.price,b3.pages);
}

