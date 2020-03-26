#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct grade_node {
    char surname[20];
    double grade;
    struct grade_node * next;
};

typedef struct grade_node GRADE_NODE;
typedef GRADE_NODE * GRADE_NODE_PTR;

int main() {
    GRADE_NODE_PTR head = NULL;
    GRADE_NODE_PTR adam = (GRADE_NODE_PTR) malloc(sizeof(GRADE_NODE));
    GRADE_NODE_PTR jones = (GRADE_NODE_PTR) malloc(sizeof(GRADE_NODE));
    GRADE_NODE_PTR pritchard = (GRADE_NODE_PTR) malloc(sizeof(GRADE_NODE));

    strcpy(adam->surname, "Adams"); 
    adam->grade = 85.0;

    strcpy(jones->surname, "Jones");
    jones->grade = 91.5;

    strcpy(pritchard->surname, "Pritchard");
    pritchard->grade = 66.5;
    
    
    adam->next = jones;
    jones->next = pritchard;
    pritchard->next = NULL;
    head = adam;

    GRADE_NODE_PTR temp = head;
    printf("User: %s\n", temp->surname);
    printf("Grade: %f\n", temp->grade);
    temp = temp->next;
    printf("User: %s\n", temp->surname);
    printf("Grade: %f\n", temp->grade);
    temp = temp->next;
    printf("User: %s\n", temp->surname);
    printf("Grade: %f\n", temp->grade);
    temp = temp->next;

    free(adam);
    free(jones);
    free(pritchard);
}