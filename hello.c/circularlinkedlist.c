#include <stdio.h>
#include <stdlib.h>

typedef struct College {
    char name[100];
    int students;
    struct College *next;} College;

College* createCollege(char *name, int students) {
    College *newCollege = (College*) malloc(sizeof(College));
    strcpy(newCollege->name, name);
    newCollege->students = students;
    newCollege->next = NULL;
    return newCollege;
}

void insertCollegeAtFront(College **head, College *newCollege) {
    if (*head == NULL) {
        *head = newCollege;
        newCollege->next = newCollege;
    } else {
        newCollege->next = *head;
        College *currentCollege = *head;
        while (currentCollege->next != *head) {
            currentCollege = currentCollege->next;
        }
        currentCollege->next = newCollege;
        *head = newCollege;
    }
}

College* deleteCollegeAtEnd(College **head) {
    if (*head == NULL) {
        return NULL;
    }

    College *prevCollege = *head;
    College *currentCollege = *head;

    while (currentCollege->next != *head) {
        prevCollege = currentCollege;
        currentCollege = currentCollege->next;
    }

    if (prevCollege == currentCollege) {
        *head = NULL;
    } else {
        prevCollege->next = currentCollege->next;
    }

    return currentCollege;
}

void printCollegeList(College *head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    printf("Colleges in the list:\n");
    College *currentCollege = head;
    do {
        printf("%s, %d students\n", currentCollege->name, currentCollege->students);
        currentCollege = currentCollege->next;
    } while (currentCollege != head);
}

int main() {
    College *head = NULL;

    College *college1 = createCollege("College1", 5000);
    insertCollegeAtFront(&head, college1);

    College *college2 = createCollege("College2", 4000);
    insertCollegeAtFront(&head, college2);

    printCollegeList(head);

    College *deletedCollege = deleteCollegeAtEnd(&head);
    printf("Deleted college: %s, %d students\n", deletedCollege->name, deletedCollege->students);

    printCollegeList(head);

    free(deletedCollege);

    return 0;
}