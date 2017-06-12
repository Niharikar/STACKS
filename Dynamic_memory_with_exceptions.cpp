#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <exception>
#define DEFAULT_STACK_SIZE 1000
using namespace std;


//int i = -1;   // top element

class Xstack
{
    int t; // top element in stack
    int size;
    
    public:
    int *arr;
    Xstack()
    {
        arr = (int*)malloc(DEFAULT_STACK_SIZE*sizeof(int));
        t = -1;
        size = DEFAULT_STACK_SIZE;
    }
    ~Xstack()
    {
        free(arr);
    }
    void push(int x)
    {
        
        if(t < size-1)
        {
            arr[++t] = x;
        }
        else
        {   
            size  = size*2;
            arr = (int*)realloc(arr,(size)*sizeof(int));
            arr[++t] = x;    
            
        }

    }
    
    int pop()
    {
        try
        {
            if(t>-1)
                return arr[t--]; 
            else
                throw t;
        }
        
        catch(int e)
        {
            cout << "Exception: No elements in the stack" << endl;
        }
        
    }
    
    int top()
    {
        try
        {
            if(t>-1)
                return arr[t];
            else
                throw t;
        }
       
        catch(int e)
        {
            cout << "Exception: No elements in the stack " << endl;
        }
        
        
    }
    
};


int main()
{
  Xstack S1,S2;
  for(int i = 0;i<1050;i++)
      S1.push(23);
  S2.push(344);
  S2.push(45);
  
  cout << S2.pop() << endl;
  cout << S2.pop() << endl;
  cout << S2.top() << endl;
  
  
  cout << S1.top() << endl;
   
    
}
