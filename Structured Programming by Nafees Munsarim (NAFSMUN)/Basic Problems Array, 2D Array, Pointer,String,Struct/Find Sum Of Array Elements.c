#include <stdio.h>
#define MAX_SIZE 100
int main(){
int arr[MAX_SIZE];
int i, n, sum=0;

// Input Size of Arr
printf("Enter Size of the Array: ");
scanf("%d", &n);

// Input Element in Arr
printf("Enter %d elements in the array: ",n);
for (i=0; i<n; i++){

     scanf("%d", &arr[i]);
// Add each array element to use sum
     sum = sum + arr[i];
    }
printf("Sum Of all elements in array = %d", sum);
}
