#include <stdio.h>

void concat(char *s1, char *s2) {
    while(*s1)
        s1++;
    while(*s2) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main() {
    char str1[100], str2[50];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    concat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
