// Using stack to implement tower of hanoi
#include <stdio.h>
#include <stdlib.h>

#define MAX_DISKS 10

typedef struct Stack {
    int arr[MAX_DISKS];
    int top;
} Stack;

void initStack(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

void push(Stack *stack, int disk) {
    stack->arr[++stack->top] = disk;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(Stack *stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->arr[stack->top];
}

// Function to solve ToF
void towerOfHanoi(int numDisks, Stack *src, Stack *aux, Stack *dest) {
    // Push all disks to source peg
    for (int i = numDisks; i >= 1; i--) {
        push(src, i);
    }

    int moves = (1 << numDisks) - 1;  // (2^n - 1)

    for (int move = 1; move <= moves; move++) {
        Stack *from, *to;

        // Determine the source and destination peg for the move
        if (move % 3 == 1) {
            from = src;
            to = dest;
        } else if (move % 3 == 2) {
            from = src;
            to = aux;
        } else {
            from = aux;
            to = dest;
        }

        // Move the top disk from 'from' stack to 'to' stack
        if (peek(from) == -1 || (!isEmpty(to) && peek(to) < peek(from))) {
            push(from, pop(to));
        } else {
            push(to, pop(from));
        }

        // Print the state of the pegs after each move
        printf("Move %d: \n", move);
        printf("Source Peg: ");
        for (int i = 0; i <= src->top; i++) printf("%d ", src->arr[i]);
        printf("\nAuxiliary Peg: ");
        for (int i = 0; i <= aux->top; i++) printf("%d ", aux->arr[i]);
        printf("\nDestination Peg: ");
        for (int i = 0; i <= dest->top; i++) printf("%d ", dest->arr[i]);
        printf("\n\n");
    }
}

int main() {
    Stack src, aux, dest;
    initStack(&src);
    initStack(&aux);
    initStack(&dest);

    int numDisks;

    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    if (numDisks < 1 || numDisks > MAX_DISKS) {
        printf("Please enter a number of disks between 1 and %d\n", MAX_DISKS);
        return 1;
    }

    towerOfHanoi(numDisks, &src, &aux, &dest);

    return 0;
}