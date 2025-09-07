#include <stdio.h>

int main()
{
int n, c, d, a[100], b[100];

printf("Enter the number of elements in array:");

scanf("%d", &n);

printf("Enter the array elements:");

for (c = 0; c < n ; c++)

scanf("%d", &a[c]);

printf("Address are = ");

for (c = 0; c < n; c++)

printf("%lx ", &a[c]);

return 0;

}
