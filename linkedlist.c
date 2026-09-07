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
return 0;


}