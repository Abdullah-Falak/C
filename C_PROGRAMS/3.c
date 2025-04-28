#include <stdio.h>

int main() {
    int n, i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors: ");
    while (n > 1) {
        if (n % i == 0) {
            printf("%d ", i);
            n /= i;
        } else {
            i++;
        }
    }
    return 0;
}
