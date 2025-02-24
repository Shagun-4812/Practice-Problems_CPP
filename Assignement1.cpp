#include <iostream>

using namespace std;

class queue {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        count = 0;
        cout << "Queue of size " << capacity << " has been created." << endl;
    }

  void dequeue() {
        if (count == 0) {
            cout << "Queue is underflow" << endl;
            return;
        }

        front = (front + 1);
        count--;
        for(int i=front;i<=rear;i++){
            arr[i]=arr[i-1];
           
        }
        front=front-1;
        rear=rear-1;
    }

    void enqueue(int value) {
        if (count == capacity) {
            cout << "Queue overflow" << endl;
            return;
        }

        rear = (rear + 1);
        arr[rear] = value;
        count++;
    }

    int front_element() {
        if (count == 0) {
            cout << "Queue underflow" << endl;
            return 0;
        }

        return arr[front];
    }

    void peek() {
        if (count == 0) {
            cout << "Queue underflow" << endl;
            return;
        }

        cout << "Elements in the queue: ";
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }

   
    ~queue() {
        delete[] arr;
        cout << "Memory freed" << endl;
    }
};

int main() {
    queue q1(6);

    q1.dequeue();

    q1.enqueue(4);
    q1.enqueue(14);
    q1.enqueue(45);
    q1.enqueue(55);
    q1.enqueue(957);

    cout << "Front element: " << q1.front_element() << endl;

    q1.peek();

    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
   
    return 0;
}

