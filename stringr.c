#define max 100
	struct  stack
	{
		char a[100];
		int top;
}s1;
	void init()
	{
		s1.top=-1;
		}
	int isfull()
	{
		if(s1.top==max-1)
		return 1;
		else
		return 0;
		}
	
	void push(char c)
	{
		if(isfull())
	printf("stack is fill do not push....");
	else
	{
	
		s1.top++;
		s1.a[s1.top]=c;
	}
}
	void disp()
	{
		int i;
			for(i=s1.top;i>=0;i--)
		printf("%c",s1.a[i]);
	}
	
			
	 int main()
	 {
	 	char s[100];
	 	int i;
	 	printf("enter string:");
	 	scanf("%s",&s);
	 	init();
	 	for(i=0;s[i]!='\0';i++)
	 	{
	 		push(s[i]);
	 		
		 }
	 disp();
}  
	
