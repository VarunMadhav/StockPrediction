#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "varun";

    stack<char> s;
    
    // insert karo str ke saare characters ko stack mei
    for(int i =0; i<s.size();i++){
        char ch = str[i];
        s.push(ch);
    }
    
    // empty string banao jisme reverse order mei stack se element ko daalenge
    string ans = "";
    
    // stack ke top element ko ch mei daaldo aur then ans string mei upar se stack ke elements ko
    // ans string mei daalte raho 
    // aur fir stack mei jo tha pehle element usko pop kardo
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }
}