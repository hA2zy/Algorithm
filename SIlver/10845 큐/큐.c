#include <stdio.h>
#define MAX_QUEUE_SIZE 10000
#define MAX_CMD_SIZE 10000

int queue[MAX_QUEUE_SIZE];
int result[MAX_CMD_SIZE];
int front = 0, rear = 0;
int result_idx = 0;

void push(int x) {
    queue[rear++] = x;
}

int pop() {
    if (front == rear) return -1;
    else return queue[front++];
}

int size() {
    return rear - front;
}

int empty() {
    if (front == rear) return 1;
    else return 0;
}

int getFront() {
    if (front == rear) return -1;
    else return queue[front];
}

int getBack() {
    if (front == rear) return -1;
    else return queue[rear - 1];
}

int main(void) {
    int N, x;
    char cmd[6];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", cmd);
        if (cmd[0] == 'p' && cmd[1] == 'u') {
            scanf("%d", &x);
            push(x);
        }
        else if (cmd[0] == 'p' && cmd[1] == 'o') {
            result[result_idx++] = pop();
        }
        else if (cmd[0] == 's') {
            result[result_idx++] = size();
        }
        else if (cmd[0] == 'e') {
            result[result_idx++] = empty();
        }
        else if (cmd[0] == 'f') {
            result[result_idx++] = getFront();
        }
        else if (cmd[0] == 'b') {
            result[result_idx++] = getBack();
        }
    }

    for (int i = 0; i < result_idx; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}