#include <stdio.h>

int a(int n) 
{
    return (n % 3 == 0) && (n % 5 == 0);
}

void main() 
{
    int number,n= (n % 3 == 0) && (n % 5 == 0);


    printf("Enter a number: ");
    scanf("%d", &number);

    if (a(number)) 
	{
        printf("Number is divisible by both 3 & 5.\n");
    } 
	else 
	{
        printf("Number is not divisible by both 3 & 5.\n");
    }

    
}