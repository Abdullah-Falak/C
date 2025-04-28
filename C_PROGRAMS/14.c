#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int words = 0, lines = 0, chars = 0;

    fp = fopen("text.txt", "r");
    if(fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        chars++;
        if(ch == ' ' || ch == '\n')
            words++;
        if(ch == '\n')
            lines++;
    }
    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words+1, lines+1);
    return 0;
}
