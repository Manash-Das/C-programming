/* Conversion of Infix to Postfix expression*/
#include<stdio.h>
char stk[40];
// Stack declaration to hold the operators of the infix expression
int top=-1;
int empty(top)
// check for empty stack
{
if(top==-1)
return(1);
else
return(0);
}
int chkopnd(char s)
// check for operand
{

if((s!='(')&& (s!=')')&& (s!='*')&& (s!='+')&&(s!='-')&&(s!='$')&&
(s!='/')&&(s!='%'))
return(1);

else

return(0);

}
void push(char stk[], char s)
{

top++;
stk[top]=s;

}
char pop(char stk[])
{

return(stk[top--]);

}
int prcd( char s)
// priority check for instack operator
{

switch(s)
{

case ')': return(5);
case '$': return(4);
case '%': return(3);
case '/': return(3);
case '*': return(3);
case '+': return(2);
case '-': return(2);
case '(': return(1);

}

}
int preced( char s)
// priority check to incoming operator
{

switch(s)
{

case ')': return (1);
case '$': return(4);
case '%': return(3);
case '/': return(3);
case '*': return(3);
case '+': return(2);
case '-': return(2);
case '(': return(5);

}

}
char opnd(char stk[])
// return topmost element from the stack
{

return(stk[top]);

}
main()
{
char str[40], tstr[40], topsymb,s,op;
int i,j;
printf("Enter the infix notation:");
gets(str);
i=0,j=0;
while(str[i]!='\0')
{
s=str[i];
if(chkopnd(s)) //if the input character is an operand
tstr[j++]=s;
else
{
if(top==-1)
// push the first operator into the stack
{
push(stk,s);
i++;
s=str[i];
}
op=opnd(stk); // op will hold the topmost operator in stack

while(!empty(top)&&prcd(op)>=preced(s)&&stk[top]!='(')

//check if instack operator has higher priority than incoming operator

{

topsymb=pop(stk);
if(topsymb!='('&& topsymb!=')')
tstr[j++]=topsymb;

}
if(stk[top]==0 ||s!=')')
push(stk,s);

else

topsymb=pop(stk);

}
i++;

}
while(!empty(top))

// Pop the remainning elements from the stack & add to the postfix expression

{

	topsymb=pop(stk);
	tstr[j++]=topsymb;

}
tstr[j]='\0';
printf("\n");
puts(tstr);
return(0);
}
