#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;

void push(int x) {
    if (top == MAX - 1) return;
    stack[++top] = x;
}

int pop() {
    if (top == -1) return -1;
    return stack[top--];
}

void insertAtBottom(int x) {
    if (top == -1) {
        push(x);
        return;
    }
    int temp = pop();
    insertAtBottom(x);
    push(temp);
}

void reverseStack() {
    if (top == -1) return;
    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}

void display() {
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    printf("Original stack: ");
    display();
    reverseStack();
    printf("Reversed stack: ");
    display();
    return 0;
}