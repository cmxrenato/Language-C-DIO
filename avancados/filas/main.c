#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *nextNode;
   
};

struct Node *newNode(int value)
{
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Error allocating memory.\n");
        exit(1);
    }

    newNode->value = value;
    newNode->nextNode = NULL;
   
    return newNode;
}


void addFila(int value, struct Node **fila)
{
    struct Node *novo = newNode(value);
    struct Node *ultimo = NULL;
    if(*fila == NULL){
        *fila = novo;
        return;
    }
    struct Node *current = *fila;
    
    while (current != NULL)
    {
        ultimo = current;
        current = current->nextNode;
    }
    
    
    novo->nextNode = NULL;
   
    ultimo->nextNode = novo;

}

void printFila(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->nextNode;
    }
}

void freeFila(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL) {
        struct Node *temp = current->nextNode;
        free(current);
        current = temp;
    }
}

int main()
{
    struct Node *fila = NULL;
    addFila(1, &fila);
    addFila(2, &fila);
    addFila(3, &fila);
    addFila(4, &fila);

    printFila(fila);
    freeFila(fila);
    fila = NULL;

    return 0;
}
