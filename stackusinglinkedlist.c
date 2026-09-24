#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void push(struct Node** top, int value);
int pop(struct Node** top);
int isEmpty(struct Node* top);
void display(struct Node* top);


int main() {
    struct Node* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    display(top);

    printf("Top element is: %d\n", peek(top));

    printf("Popped element: %d\n", pop(&top));
    printf("Popped element: %d\n", pop(&top));

    display(top);
    

    return 0;
}

void Push(struct Node** top, int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow!! Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %d onto the stack.\n", value);
}

int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack Underflow!! Cannot pop from an empty stack.\n");
        return -1;
    }
    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedValue;
}