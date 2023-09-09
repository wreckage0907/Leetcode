#pragma GCC optimize("Ofast,funroll-loops")
class MyCircularQueue {
public:
    int* arr;
    int size;
    int front;
    int rear;

    MyCircularQueue(int k) : size(k), front(-1), rear(-1) {
        arr = new int[size];

    }

    bool enQueue(int value) {
        if (isFull()) return false;
        if (isEmpty()) front = 0;
        rear = (rear + 1) % size;
        arr[rear] = value;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        if (front == rear) front = rear = -1;
        else front = (front + 1) % size;
        return true;
    }

    int Front() {
        return isEmpty() ? -1 : arr[front];
    }

    int Rear() {
        return isEmpty() ? -1 : arr[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    ~MyCircularQueue() {
        delete[] arr;
    }
};