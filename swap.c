#include<stdio.h>
 int main()
 {
     int a,b,*x,*y,t;
     printf("enter two nos:");
     scanf("%d%d",&a,&b);
     x=&a;
     y=&b;
     t=*x;
     a=*y;
     b=t;
     printf("after swap=%d",*x);
     printf("after swap=%d",*y);
 }


#include<stdio.h>
#include<string.h>
int main()
{
  	int s1[100],s2[100];
	printf("enter  first string:");
	gets(s1);
	prinrf("enter second string:");
	gets(s2);
       printf("\n copy \n compare");
	printf("enter choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:strcpy(s1,s2);
	{
	printf("first string=%s",s1);
	pritf("copy string=%s",s2);
	break;
   	case 2:strcmp(s1,s2);
	{
	if(k>0)
	printf("first string is greater");
 	else if(k<0)
	printf("second string is greater");
     	else
	("strings are equal");
	break;
	default:("invalid choice");
	}
}
 



