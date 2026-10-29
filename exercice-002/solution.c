#include <stdio.h>
int main() {
    printf("Enter 3 integers: ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Inputs: a=%d, b=%d, c=%d\n", a, b, c);
    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    printf("Largest of the three: %d\n", largest);
    return 0;
}