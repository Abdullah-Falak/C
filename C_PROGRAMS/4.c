#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    int *start = arr, *end = arr + n - 1, temp;
    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    return 0;
}
