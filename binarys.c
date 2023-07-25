//accpt no and search (usig binary search)//

#include<stdio.h>
int main()
{
	int a[100],i,n,top,bottom,mid,flag=0,num;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n numbers=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 printf("enter no.to search");
	 scanf("%d",&num);
	 top=0;
	 bottom=n-1;
	 while(top<=bottom)
	{
		mid=(top+bottom)/2;
		
			if(a[mid]==num)
			{
				flag=1;
				break;
			}
		if(a[mid]<num)
		top=mid+1;
		else 
		bottom=mid-1;
	}
		if(flag==1)
		printf("no is found" );
		else
		printf("no is not found");
	}



