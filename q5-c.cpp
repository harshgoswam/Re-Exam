#include<stdio.h>
main()
{
	int firstdigit,lastdigit,sum=0,n;
	
	printf("Enter firstdigit and lastdigit:");
	scanf("%d",&n);
	
	 lastdigit=n%10;
	 
	 while(n>=10)
	 {
	 	n=n/10;
	 }
	 
	 firstdigit=n;
	 
	 sum =firstdigit+lastdigit;
	 
	 printf("sumof firstdigit and lastdigit =%d",sum);
}
