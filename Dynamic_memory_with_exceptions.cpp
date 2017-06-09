#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <exception>
using namespace std;

int i = -1;   // top element

class Xstack
{
    
    public:
    int *arr;
    void push(int x)
    {
        if(i==-1)
        {
            arr = (int*)malloc(3*sizeof(int));
            arr[++i] = x;
        }
        else if(i < 2)
        {
            arr[++i] = x;
        }
        else
        {   
             arr = (int*)realloc(arr,2*(i+1)*sizeof(int));
             arr[++i] = x;    
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
            cout << "Exception " << endl;
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
            cout << "Exception " << endl;
        }
        
        
    }
    
};


int main()
{
  Xstack S;
  S.push(23);
  
 cout << S.pop() << endl;
 cout << S.top() << endl;
   
    
}
