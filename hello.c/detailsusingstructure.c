#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students:");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("For roll number%d\n", s[i].roll);
        printf("Enter first name:\t\n ");
        scanf("%s", &s[i].firstName);
        printf("Enter marks:\t\n ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name:\n ");
        puts(s[i].firstName);
        printf("Marks: %.1f\n", s[i].marks);
        
    }
    return 0;
}
