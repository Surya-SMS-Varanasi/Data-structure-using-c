/*
    This code is for the linked List insert at beginining.

*/

#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *nextAdd;
};
struct Node *node = NULL;
struct Node *createNode(int value);
void display(struct Node *node);
void insert(int value);
void freeList();

int main(){
    printf("Linked List before insertion : ");
    display(node);

    insert(89);
    insert(78);

    printf(" Linked List after insertion : ");
    display(node);
    getch();
    freeList();
    return 0;
}
struct Node *createNode(int value){
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->nextAdd = NULL;
    return newNode;
}
void freeList() {
    struct Node *temp;
    while(node != NULL){
        temp = node;
        node = node->nextAdd;
        free(temp);
    }
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
void insert(int value){
    if(node == NULL){
        node = createNode(value);
        if(node == NULL){
            printf("Memory Allocation Failed !");
            return;
        }
    }
    else{
        struct Node *temp = createNode(value);
        if(temp == NULL){
            printf("Memory Allocation Failed !");
            return;
        }
        temp->nextAdd = node;
        node = temp;
    }
}
