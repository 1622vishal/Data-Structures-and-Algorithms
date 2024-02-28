/*----Written by :- Vishal Yadav----*/
/*----Date :- 28-02-24----*/

/*Program to implement Queue using Circular Array*/

#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    public:
    int* arr;
    int size;
    int front;
    int rear;
    CircularQueue(int n){
        this->size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((front==0 && rear==size-1) || (front-rear==1))
            return false;
        if(front == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = value;
            return true;
        }
        else if(rear == size-1 && front!=0)
        {
            rear = 0;
            arr[rear] = value;
            return true;
        }
        else
        {
            rear++;
            arr[rear] = value;
            return true;
        }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front==-1)  return -1;
        int ans = arr[front];
  
        if(front == rear)
        {
            front=-1;
            rear=-1;
        }
        else if(front == size-1)
        {
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }
};

int main()
{
    //Everything is same as the normal array implementation. So, I am not writing again.
    return 0;
}