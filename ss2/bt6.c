#include <stdio.h>

int main() {
    int radius = 7;
    float pi = 3.14;
    float circumference = 2 * pi * radius;
    float area = pi * radius * radius;

    printf("Ban kinh hinh tron : %d\n", radius);
    printf("Chu vi hinh tron : %.2f\n", circumference);
    printf("Dien tich hinh tron : %.2f\n", area);

    return 0;
}

