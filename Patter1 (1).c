/*
  Pattern Printing Program
Pattern 1:

  *
  **
  ***
  ****
  
  1
  12
  123
  1234
  
  A
  AB
  ABC
  ABCD
  
*/

#include<stdio.h>
void main()
{
	int r,c,n; 	
	printf("\nEnter number of line = ");
	scanf("%d",&n);
	for(r = 1; r <= n; r++)//line control or Row control
	{
		for(c = 1; c<=r; c++) //value control loop 
		{
			printf("*");  // Value 
			printf("\n");
		}		
		//printf("\n");   // New Line
	}
	
}

/* 
 n = 4 (Example)
 
  r  r <= n   c		c<=r   Output		c++		r++
  1		1	  1		1		*			2
  			  2		0							2
  2		1	  1		1					2
  			  2		1		**			3
  			  3		0							3
  3

*/
