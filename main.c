#include <stdio.h>

int main() {
    int a;
    int b;
    int sum;

    printf("First number: ");  //fix number 1
    scanf("%d", &a);

    printf("Second number: "); //fix number 2
    scanf("%d", &b);

    sum = a + b;

    printf("The sum is: %d\n", sum); //this is the sum

    return 0;
}
