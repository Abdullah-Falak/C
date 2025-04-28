#include <stdio.h>

double factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

double seriesSum(int n) {
    if(n == 1)
        return 1.0;
    else
        return (1.0 / factorial(n)) + seriesSum(n-1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum of series: %lf\n", seriesSum(n));
    return 0;
}
