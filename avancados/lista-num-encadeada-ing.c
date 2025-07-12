#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Error allocating memory.\n");
        exit(1);
    }
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void printNodes(struct Node *head){
    struct Node *current = head;
    while(current != NULL){
        printf("%d\n", current->value);
        current = current->next;
    }
}

void freeMemory(struct Node *head){
    struct Node *current = head;
    while(current != NULL){
        struct Node *temp = current->next;
        free(current);
        current = temp;
    }
}

int main()
{
    struct Node *head = NULL;
    char input[20];
    int value;

    for(int i = 0; i < 5; i++){
        printf("Enter an integer number: ");
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d", &value);

        struct Node *newNode = createNode(value);
        newNode->next = head;
        head = newNode;
    }

    printNodes(head);
    freeMemory(head);
    head = NULL;

    return 0;
}
