#include <stdio.h>

int main() {
    int matrix[3][3], sum = 0;
    printf("Enter 3x3 matrix elements:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            if(i == j)
                sum += matrix[i][j];
        }
    }

    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}
