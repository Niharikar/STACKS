#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

class xstack   
{
    public:
    struct Node* top = NULL;
    void Push(int x)
    {
        Node* temp = new Node;
        temp->data = x;
        temp->next = top;
        top = temp;
    }
    
    int Pop()
    {
        struct Node* temp;
        if(top==NULL)
            return INT_MIN;
        int val;
        temp = top;
        top  = top->next;
        val = temp->data;
        delete temp;
        return val;
    }
    
    int Top()
    {
        if(top)
            return top->data;
        else
            return INT_MIN;
    }
};


int main()
{
    xstack S;
   S.Push(56);
   S.Push(34);
   S.Push(45);
   cout << S.Pop() << endl;
   cout << S.Top() << endl;
   return 0;
}

