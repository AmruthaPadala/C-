#include <stdio.h>
#include<stdlib.h>
int main() 
{
	float x,y;
	scanf("%.2f %.2f", &x, &y);
	if(x % 5 == 0)
	{
	    printf("%.2f\n", y - x - 0.5);
	}
	else
	{
	    printf("%.2f\n", y);
	}
	return 0;
	

}


