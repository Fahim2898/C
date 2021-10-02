#include<stdio.h>
int main()

{
	int ta,da,na,total,k;
	printf("Input your salery:");
	scanf("%d",&k);
	switch(k)
	{
	case 10000:
	{
		ta=10000*.15;
		da=10000*.15;
		na=10000*.55;
		total=(10000+ta+da+na);
		printf("Total=%d",total);
		break;	
	}
	case 20000:
	{
		ta=20000*.15;
		da=20000*.20;
		na=20000*.60;
		total=(20000+ta+da+na);
		printf("Total=%d",total);
		break;	
	}
	case 30000:
	{
		ta=30000*.15;
		da=30000*.25;
		na=30000*.75;
		total=(30000+ta+da+na);
		printf("Total=%d",total);
		break;	
	}
	default :
	{
		printf("Input Error");
		break;
	}	
	} 
return 0;	
}
