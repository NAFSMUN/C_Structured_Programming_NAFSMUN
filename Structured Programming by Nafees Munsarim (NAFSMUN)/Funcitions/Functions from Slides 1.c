#include <stdio.h>
int max(int num1, int num2);
int main()
{
    int num1, num2, maximum;
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    maximum = max(num1, num2);

    printf("\nMaximum=%d\n",maximum);
    return 0;
}
int max(int n1, int n2)
{
   if (n1 > n2) {
	    return n1;
    }
   else {
         return n2;
    }
}
