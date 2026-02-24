#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, value, key;
    scanf("%d", &n);

    struct Node *head = NULL, *last = NULL;

    // Create list
    for(int i = 0; i < n; i++) {
        scanf("%d", &value);

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else
            last->next = newNode;

        last = newNode;
    }

    scanf("%d", &key);

    struct Node *temp = head, *prev = NULL;

    // Delete first occurrence
    while(temp != NULL) {
        if(temp->data == key) {
            if(prev == NULL)  // deleting head
                head = temp->next;
            else
                prev->next = temp->next;

            free(temp);
            break;   // delete only first occurrence
        }
        prev = temp;
        temp = temp->next;
    }

    // Print list
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}