#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& s,int element){
    if(s.empty()){
        s.push(element);
        return ;
    }

    // basically pop kardo stack ko pura 
    int num = s.top();
    s.pop();
    
    // recursive call to pop all the elements present in the stack till the base case is satisfied 
    // that is ki stack empty hoajaaye 
    // jab empty hojaaye usme fir ham insert karenge element
    solve(s,element);

    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}