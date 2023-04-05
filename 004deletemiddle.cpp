#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&stack,int count,int size){
    if(count == size/2){
        stack.pop(); // count 0 se jaate rahega jab count size/2 ie mid pe aaye toh pop kardo stack se
        return;
    }
    
    // stack ke top element ko num mei daaldo fir temporarily pop kardo jis sey count top se ek aage jaaye 
    int num = stack.top();
    stack.pop();

    // recursive call
    solve(stack,count+1,size);

    stack.push(num); 
    // jab traverse karlie pura aur count mid oe aake delete kardia fir jo bhi pop kare the temporarily usko wapas stack mei daaldo 
}

void deletemiddle(stack<int>&stack,int size){
    int count = 0;
    solve(stack,count,size);
}