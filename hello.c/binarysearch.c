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
    for (i = 0; i < 10; ++i) {
        s[i].roll = i + 1;
        printf("For roll number%d,", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:");

    // displaying information
    for (i = 0; i < 10; ++i) {
        printf("\nRoll number: %d", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        
    }
    return 0;
}
