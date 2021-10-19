//infix to prefix
#include<stdio.h>
#include<ctype.h>
int top=-1;
//int Isalpha(char s)
//{
//	if((s!='*')&&(s!='/')&&(s!='+')&&(s!='-')&&(s!='(')&&(s!=')'))
//		return 1;
//	else
//		return 0;
//}
void push(char stack[],char s){
	stack[++top]=s;
}
int pop(char stack[]){
	return stack[top--];
}
int priority(s)
{
	if(s=='('|| s==')')
		return 0;
	if (s=='+'||s=='-')
		return 1;
	if(s=='*'||s=='/')
		return 2;
}
main()
{
	char stack[30],exp[30],output[30];
	printf("Enter a expression :");
	gets(exp);
	strrev(exp);
	puts(exp);
	int i=0,j=0;
	while(exp[i]!='\0')
	{
		char e=exp[i];
		if(isalnum(e))
			output[j++]=e;
		else if(e==')')
			push(stack,e);
		else if(e=='('){
			while(pop(stack)!=')'){
				++top;
				output[j++]=pop(stack);
				
			}
		}
		else if(priority(e)<=priority(stack[top])){
			while(priority(e)<=priority(stack[top])){
				output[j++]=pop(stack);
			}
			push(stack,e);
		}
		else
			push(stack,e);
		i++;
	}
	while(top!=-1)
		output[j++]=pop(stack);
	strrev(output);
	puts(output);
}





