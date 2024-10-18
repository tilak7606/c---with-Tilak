#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Doubly
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Doubly(int size)
    {
        this->size = size;
        front = rear = -1;
        arr = new int[size];
    }

    void push_front(int data)
    {
        if (is_full())
        {
            cout << "Queue is Totally full : " << endl;
        }

        else if (front == -1) // if Queue is initially empty :
            front = rear = 0;

        else if (front == 0) // To maintain the cyclic structure :
            front = size - 1;
        else
            front--;

        arr[front] = data;
    }

    void push_back(int data)
    {
        if (is_full())
        {
            cout << "Queue is Totally full : " << endl;
            return;
        }

        else if (front == -1)
            rear = front = 0;

        else if (rear == size - 1 && front != 0)
            rear = 0;

        else
            rear++;

        arr[rear] = data;
    }

    void pop_front()
    {
        if (is_empty())
        {
            cout << "Queue is Totally Empty : " << endl;
            return;
        }
        else if (front == size - 1)
            front = 0;

        else if (front == rear) // i.e Queue only have one element :
            front = rear = -1;

        else
            front++;
    }

    void pop_back()
    {
        if (is_empty())
        {
            cout << "Queue is Totally empty : " << endl;
            return;
        }
        else if (rear == front)
            rear = front = -1;

        else if (rear == 0)
            rear = size - 1;
        else
            rear--;
    }

    int Getfront()
    {
        if (is_empty())
        {
            cout << "Queue is empty : " << endl;
            return -1;
        }
        return arr[front];
    }

    int getrear()
    {
        if (is_empty())
        {
            cout << "Queue is Empty : " << endl;
            return -1;
        }
        return arr[rear];
    }

    bool is_empty()
    {
        if (front == -1)
            return true;

        return false;
    }

    bool is_full()
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
            return true;

        return false;
    }
};

int main()
{
    Doubly q(5);
    q.push_front(5);
    q.push_back(10);
    cout << "front = " << q.Getfront() << endl;

    cout << "Rear = " << q.getrear() << endl;
    q.push_back(20);
    cout << "Rear = " << q.getrear() << endl;

    q.pop_front();
    cout << "front = " << q.Getfront() << endl;
    cout << "Rear = " << q.getrear() << endl;
    return 0;
}