#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[10];
    FILE *fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    for(int i = 0; i < 10; i++) {
        fscanf(fp, "%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }
    fclose(fp);

    printf("Students with marks above 80:\n");
    for(int i = 0; i < 10; i++) {
        if(students[i].marks > 80) {
            printf("%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
        }
    }
    return 0;
}
