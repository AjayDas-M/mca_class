#include <stdio.h>

int main()
{
	float r,area,peri;
	printf("Enter the radius of the circle : ");
	scanf("%f", &r);
	area = 3.14*r*r;
	peri = 2*3.14*r;
	printf("The area  of the circle is :%f\n ",area);
	printf("The Perimeter of the circle is  :%f ",peri);
	return 0;
}
