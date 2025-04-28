#include <stdio.h>

int isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n-1)) == 0);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPowerOfTwo(n))
        printf("%d is a power of two.\n", n);
    else
        printf("%d is not a power of two.\n", n);

    return 0;
}
