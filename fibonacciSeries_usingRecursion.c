/*
Fibonacci series is a sequence of Integers 
that starts with 0 followed by 1, 
in this sequence the first two terms 
i.e. 0 and 1 are fixed, 
and we get the successive terms by 
summing up their previous last two terms. 
i.e, the series follows a pattern that 
each number is equal to the sum of its 
preceding two numbers.

Example: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...

Explanation:
0
1
0 + 1 = 1
1 + 1 = 2
2 + 1 = 3
3 + 2 = 5
5 + 3 = 8
...

Mathematically it can be written as : 

F(n)=F(n-1)+F(n-2)
where F is the Fibonacci function having base values 

F(0)=0 and F(1)=1

*/ 
#include <stdio.h>

// fibonacci() funtion definition
int fibonacci(int num)
{
    // first base condition check
    if (num == 0)
    {
        return 0; // retuning 0, if condition meets
    }
    // second base condition check
    else if (num == 1)
    {
        return 1; // returning 1, if condition meets
    }
    // else calling the fibonacci() function recursively till we get to the base conditions
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2); // recursively calling the fibonacc() function and then adding them
    }
}

int main()
{
	// variable to store how many elements to be displayed in the series
    int num,i; 
    // taking user input
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); 

    for ( i = 0; i < num; i++)
    {
    	// calling fibonacci() function for 
		//each iteration and printing the returned value
        printf("%d\t ", fibonacci(i)); 
    }

    return 0;
}
