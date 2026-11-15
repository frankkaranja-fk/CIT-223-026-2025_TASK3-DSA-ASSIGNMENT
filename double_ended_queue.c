
#include <stdio.h>
#define SIZE 5

int deque[SIZE];
int front = -1;
int rear = -1;

// Check whether deque is full
int isFull() {
    return (front == 0 && rear == SIZE - 1)
           || (front == rear + 1);
}

// Check whether deque is empty
int isEmpty() {
    return front == -1;
}

// A. Insert at front
void insertFront(int value) {
    if (isFull()) {
        printf("Deque is full!\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else if (front == 0) {
        front = SIZE - 1;
    } else {
        front--;
    }

    deque[front] = value;
    printf("%d inserted at front\n", value);
}

// B. Insert at rear
void insertRear(int value) {
    if (isFull()) {
        printf("Deque is full!\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else if (rear == SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }

    deque[rear] = value;
    printf("%d inserted at rear\n", value);
}

// C. Delete from front
void deleteFront() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return;
    }

    printf("%d deleted from front\n", deque[front]);

    if (front == rear) {
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
}

// D. Delete from rear
void deleteRear() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return;
    }

    printf("%d deleted from rear\n", deque[rear]);

    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = SIZE - 1;
    } else {
        rear--;
    }
}

// Display deque
void display() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return;
    }

    int i = front;

    printf("Deque elements: ");

    while (1) {
        printf("%d ", deque[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);

    display();

    deleteFront();
    deleteRear();

    display();

    return 0;
}
