#include<iostream>
#include<stack>
using namespace std;

class TwoStacks{
    // property
    public:
        int *arr;
        int top1;
        int top2;
        int size;
    
    // behaviour
    TwoStacks(int s){
        this->size=s;
        arr = new int[s];
        int top1 = -1;
        int top2 = s;
    }

    void push1(int element){
        if(top2-top1 > 1){
            top1++;
            arr[top1]=element;
        }
    }
    
    void push2(int element){
        if(top2-top1 > 1){
            top2--;
            arr[top2]=element;
        }
    }
    
    int pop1(){
        if(top1>=0){ // check karo ki top1 kisi index pe hai array ke so pop karne ko kuch hai
            int ans = arr[top1];
            top1--; 
            return ans;
        }
        else{
            return -1;
        }
    }

    int pop2(){
        if(top2<size){ // top2 jo peeche se check kar rahe hai woh size se chota ie last index ya uske pehle mei hai kahi jis sey usko pop karde
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};