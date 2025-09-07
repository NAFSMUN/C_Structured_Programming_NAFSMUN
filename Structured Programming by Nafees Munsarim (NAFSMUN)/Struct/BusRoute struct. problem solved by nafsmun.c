#include <stdio.h>

struct BusRoute {
    int route_no;
    char start[20];
    char destination[20];
};

int main() {
    struct BusRoute r1;

    printf("Enter route number: ");
    scanf("%d", &r1.route_no);

    printf("Enter starting point: ");
    scanf("%s", r1.start);

    printf("Enter destination: ");
    scanf("%s", r1.destination);

    printf("\nRoute %d: %s to %s\n", r1.route_no, r1.start, r1.destination);

    return 0;
}
