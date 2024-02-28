/*----Written by :- Vishal Yadav----*/
/*----Date :- 28-02-24----*/

/*Program to implement Queue using Array*/

#include<bits/stdc++.h>
using namespace std;

class Queue
{
    public:
    int* arr;
    int size;
    int front;
    int rear;
    Queue(int n)
    {
        this->size = n;
        arr = new int(size);
        front = 0;
        rear = 0;
    }

    //User  defined functions to perform queue operations
    bool isEmpty()
    {
        if(front == rear) return true;
        else return false;
    }
    void enqueue(int data)          //enqueue means push
    {
        //Overflow
        if(rear == size-1) cout<<"Queue OverFlow"<<endl;
        arr[rear] = data;
        rear++;
    }
    int dequeue()              //dequeue means pop
    {
        //Underflow
        if(front == rear) cout<<"Queue Underflow"<<endl;
        arr[front] = -1;       //This is just to clarify things, it just means that we deleted element so we put -1 
                                //inplace of it
        front++;
        if(front == rear )
        {
            front = 0;
            rear = 0;
        }
    }
    int qfront()
    {
        if(front == rear)  cout<<"No elements"<<endl;
        return arr[front];
    }
    int qsize()
    {
        return rear - front;
    }

};

int main()
{
    Queue qq(6);
    qq.enqueue(54);
    qq.enqueue(87);
    qq.enqueue(34);
    qq.enqueue(93);

    cout<<"Size of Queue:- "<<qq.qsize()<<endl;
    cout<<"Front element is:- "<<qq.qfront()<<endl;

    qq.dequeue();
    cout<<"Size of Queue:- "<<qq.qsize()<<endl;
    cout<<"Front element is:- "<<qq.qfront()<<endl;

    cout<<"Is Queue empty? "<<qq.isEmpty()<<endl;

    return 0;
}