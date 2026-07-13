#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *nextAdd;
};

struct Node *createNode(int value);
void display(struct Node *node);


int main(){
    struct Node *first, *second, *third;
    first = createNode(12);
    second = createNode(67);
    third = createNode(98);

    first->nextAdd=second;
    second->nextAdd=third;
    
    printf("Linked List before insertion : ");
    display(first);
    return 0;
}
struct Node *createNode(int value){
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->nextAdd = NULL;
    return newNode;
}
void display(struct Node *node){
    if(node == NULL){
        printf("The Linked list is Empty.\n");
        return;
    }
    else{
        while(node != NULL){
            printf("%d ", node->data);
            node = node->nextAdd;
        }
        printf("\n");
    }
}
