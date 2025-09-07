#include <stdio.h>
int main(){
int N, num;
int evenCount = 0, oddCount = 0;
int evenSum = 0, oddSum=0, totalSum=0;
int largest, smallest;
printf ("Enter Total Number of Inputs (N) : ");
scanf("%d", &N);
if (N<=0){
        printf("Invalid Input, N must be greater than 0.\n");
return 1;
}
printf ("Enter %d numbers : \n", N);
for (int i=0; i<N; i++){
        scanf ("%d", &num);
if (i==0){
    largest = smallest = num;
}
if (num % 2 == 0){
    evenCount++;
    evenSum += num;
} else {
 oddCount++;
 oddSum += num;
 }
 if (num > largest){
    largest = num;
 }
 if (num < smallest){
    smallest = num;
 }
 totalSum += num;
}
float avg = (float)totalSum / N;
printf("\nResults:\n");
printf ("Even numbers: %d\n", evenCount);
printf ("Odd numbers: %d\n", oddCount);
printf("Sum of even numbers: %d\n", evenSum);
printf("Sum of odd numbers: %d\n", oddSum);
printf ("Total sum of numbers: %d\n",totalSum);
printf ("Average of numbers: %.2f\n", avg);
printf ("Largest number: %d\n", largest);
printf("Smallest number: %d\n", smallest);
}
