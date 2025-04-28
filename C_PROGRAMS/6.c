#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, max;
    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    max = *arr;
    for(int i = 1; i < n; i++) {
        if(*(arr + i) > max)
            max = *(arr + i);
    }

    printf("Largest element: %d\n", max);
    free(arr);
    return 0;
}
