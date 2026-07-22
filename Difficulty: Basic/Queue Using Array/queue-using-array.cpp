class myQueue {
    int* arr;
    int size;
    int front;
    int rear;
  public:
    myQueue(int n) {
        size = n;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return rear == size && front == 0;
    }

    void enqueue(int x) {
        if(isFull()){
            return;
        }
        arr[rear++] = x;
        
        
    }

    void dequeue() {
        if (isEmpty()) return;
    
        front++;
    
        if (front == rear) {
            front = rear = 0;
        }
    }

    int getFront() {
        if(!isEmpty()) return arr[front];
        return -1;
    }

    int getRear() {
        if(!isEmpty()) { 
            return arr[rear -1];
        }
        return -1;
    }
};