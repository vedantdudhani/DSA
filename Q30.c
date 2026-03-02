#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Node *head = NULL, *last = NULL;

    // Create polynomial
    for(int i = 0; i < n; i++) {
        int c, e;
        scanf("%d %d", &c, &e);

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->coeff = c;
        newNode->exp = e;
        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else
            last->next = newNode;

        last = newNode;
    }

    // Print polynomial
    struct Node* temp = head;

    while(temp != NULL) {
        if(temp->exp == 0)
            printf("%d", temp->coeff);
        else if(temp->exp == 1)
            printf("%dx", temp->coeff);
        else
            printf("%dx^%d", temp->coeff, temp->exp);

        if(temp->next != NULL)
            printf(" + ");

        temp = temp->next;
    }

    return 0;
}