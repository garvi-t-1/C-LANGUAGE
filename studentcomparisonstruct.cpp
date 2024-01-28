#include<stdio.h>
#include<string.h>

typedef struct student {
    char name[20];
    int rollnumber;
    char department[15];
    char course[15];
    int yearofjoining;
} student;

int havesamedepartment(struct student student1, struct student student2) {
    return strcmp(student1.department, student2.department) == 0;
}

int main() {
    struct student student1;
    struct student student2;

    printf("Enter details for the first student:\n");
    printf("Roll number: ");
    scanf("%d", &student1.rollnumber);
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Department: ");
    scanf("%s", student1.department);
    printf("Course: ");
    scanf("%s", student1.course);
    printf("Year of joining: ");
    scanf("%d", &student1.yearofjoining);

    printf("Enter details for the second student:\n");
    printf("Roll number: ");
    scanf("%d", &student2.rollnumber);
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Department: ");
    scanf("%s", student2.department);
    printf("Course: ");
    scanf("%s", student2.course);
    printf("Year of joining: ");
    scanf("%d", &student2.yearofjoining);

    if (havesamedepartment(student1, student2)) {
        printf("\nBoth students have the same department.\n");
    } else {
        printf("\nStudents are from different departments.\n");
    }

    return 0;
}

