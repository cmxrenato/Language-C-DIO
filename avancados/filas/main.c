#include <stdio.h>

struct Node{

    int value;
    struct Node *nextNode;

};

struct Node *newNode(int value)
{
    /* data */
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("Error allocating Memory.\n");
        exit(1);
    }

    newNode->value = value;
    newNode->nextNode = NULL;
    return newNode;

}

void addFila(int **value, struct Node **fila){
    struct Node **newNode = createNode(*value);
        (*newNode)->nextNode = *fila;
        *fila = *newNode;

          

}

void printFila(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL){
        printf("%d\n",current->value);
        current = current->nextNode;

    }

}
void freeFila(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL){
        struct Node *temp = current->nextNode;
        free(current);
        current = temp;
    }


}

int main()
{
    struct Node *fila = NULL;

    return 0;
}