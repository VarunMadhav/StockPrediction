#include<iostream>
#include<stack>
using namespace std;
// pehle sort karne ke lie stack se sab num ko pop kardo 
// fir insert jab karoge wapas tab sorted order mei insert karo num ko stack mei
void sortinsert(stack<int> &stack,int num){
    // stack ya toh empty hai... empty nahi toh fir top wala element agar num se chota hai sirf tab hi push karo stack mei
    // agar top.. num se badha hai toh fir top ko pop karenge aur num ko push fir jo nikala tha usko wapas stack mei num ke baad 
    if(stack.empty() || (!stack.empty() && stack.top() < num) ){
        stack.push(num);
        return ;
    }

    int n = stack.top();
    stack.pop();

    sortinsert(stack,num);

    stack.push(n);
}

void sortstack(stack<int> &stack){
    if(stack.empty()){
        return ;
    }

    int num = stack.top();
    stack.pop();

    sortstack(stack);

    sortinsert(stack,num);
}