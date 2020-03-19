#include <stdio.h>

struct grade_node {
    char surname[20];
    double grace;
    struct grade_node * next;
}

typedef struct grade_node GRADE_NODE;
typedef GRADE_NODE * GRADE_NODE_PTR;


