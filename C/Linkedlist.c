//Problem: Create a singly linked list and traverse in it.
#include<stdio.h>
#include<stdlib.h>

//Create node of linked list, A node has two field one is data & second is link. Each node contain reference(link) of next node. 
struct Node {
    int data;
    struct Node* next;
};
//linked list traversal
//Complexity: O(n) where n = number of nodes
void LLTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

//Execution of each program start from main function.
int main(void)
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = fourth;

    fourth->data = 2;
    fourth->next = NULL;

    LLTraversal(head);
    return 0;
}
