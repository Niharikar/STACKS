#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <exception>
using namespace std;

//int i = -1;   // top element

class Xstack
{
    int i = -1;
    int j = 0;
    public:
    int *arr;
    Xstack()
    {
        arr = (int*)malloc(1000*sizeof(int));
    }
    void push(int x)
    {
        
        if((i-j) < 999)
        {
            arr[++i] = x;
        }
        else
        {   
             arr = (int*)realloc(arr,2*(i+1)*sizeof(int));
             arr[++i] = x;    
             j = i;
        }

    }
    
    int pop()
    {
        try
        {
            if(i>-1)
                return arr[i--]; 
            else
                throw i;
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
            if(i>-1)
                return arr[i];
            else
                throw i;
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
