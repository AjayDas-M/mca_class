#include <stdio.h>

void main()
{
	//using temp variable
	
	int a=1,b=2,temp;
	
	printf("Method 1 : Using Temp variable \n");
	printf("Before swaping \n a = %d \n b = %d\n",a,b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("after swaping \n a = %d \n b = %d",a,b);
	
	
	//using arithmatic operators
	printf("\n Method 2 : Using arithmatic operators \n");
	printf("Before swaping \n a = %d \n b = %d\n",a,b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("after swaping \n a = %d \n b = %d",a,b);
}
