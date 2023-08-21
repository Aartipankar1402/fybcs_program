#include<stdio.h>
#include<ctype.h>
# define max 100
 	
 		struct  stack
 		{
 			char a[max];
 			int top;
 		}s;
 			void init()
 			{
 				
 				s.top=-1;
 				
			 }
		 int isempty()
		 {
		 	if(s.top==-1)
		 	return 1;
		 	else
		 	return 0;
		 	
			 }
		int isfull()
		{
			if(s.a[s.top]==max-1)
				return 1;
			else
			return 0;
			
		}
		void push(char ch)

		{
			  if (isfull())	
			  printf("stack is full..do not push");
			  else
			  {
			  	s.top++;
			  	s.a[s.top]=ch;
			  	
			  }
			  }
		int pop()
		{
			char ch;
			if(isempty())

	printf("stack is empty ..do not pop");
			else
			{
			s.a[s.top];					
			s.top--;
			return ch;
		}
	}
	int priority(int x)
	{
		if(x=='(')
		return 0;
		if(x=='+'||x=='-')
			return 1;
		if(x=='*'||x=='/')
			return 2;
		return 0;
	}
	int main()
	{
		char s1[100];
	char i, x;
		char exp[100];
		printf("enter infix expression");
		scanf("%s",&exp);
		void init();
		{
			while(s1[i]!='\0')
			{
				if(isalnum(s1[i]))
				printf("%c",s1[i]);
				else if(s1[i]=='(')
				push(s1[i]);
				else if(s1[i]==')')
				{
				while((x=pop())!='(')
					printf("%c",x);
				}
				else
				{
					while(priority(s.a[s.top])>=priority(s1[i]))
					printf("%c",pop());
					push(s1[i]);
				}
		
			}
		}
			while(!isempty())
			{
			
			printf("%c",pop());
			}
			}
	
