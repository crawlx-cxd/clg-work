#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};

void display(struct node*head){
    struct node *temp=head;
    if(head==NULL){
        printf("linked list is empty");
    }
    else{
        while(temp!=NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

struct node* insertAtBeginning(struct node *head,int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL){
        printf("Memory allocation failed!\n");
        return head;
    }
    newnode->data = val;
    newnode->next = head;
    head = newnode;
    return head;
}

struct node* insertAtEnd(struct node *head, int val) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Memory Allocation failed!\n");
        return head;
    }
    newnode->data = val;
    newnode->next = NULL;

    if(head == NULL){
        return newnode;
    }

    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newnode;
    return head;
}   
struct node* insertAfterNode(struct node *head, int targetvalue, int val) {
    struct node *temp = head;

    while(temp != NULL && temp->data != targetvalue) {
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Node with value %d not found in the list!\n", targetvalue);
        return head;
    }

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }

    newnode->data = val;
    newnode->next = temp->next;
    temp->next = newnode;

    return head;
}

int main(){
    struct node *head=NULL,*newnode,*temp;
    int choice = 1;
while(choice == 1) {
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode ==  NULL){
        printf("memory allocation failed\n");
        break;
    }
    printf("enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
        temp = head;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
    printf("Do you want to insert more data?(1 for yes, 0 for no): ");
    scanf("%d",&choice);
}
printf("the linked list is: ");
display(head);
printf("\nTHe Linked list after inserting at the beginning is: ");
head = insertAtBeginning(head, 10);
display(head);
printf("\nThe linked list after inserting at the end is: ");
display(insertAtEnd(head, 200));
printf("\nThe linked list after inserting between: ");
display(insertAfterNode(head, 99, 300));

return 0;

}