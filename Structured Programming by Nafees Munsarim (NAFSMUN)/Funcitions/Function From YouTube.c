#include <stdio.h>

int get_sum ( int x, int y){
    int sum = x + y;

    return sum;
    }
void say_hi(){
printf ("NAFSMUN\n");
}
int main(){
    printf("Main Start\n");
    say_hi();
    int result = get_sum(10,20);
    printf("My Sum = %d\n", result);
}
