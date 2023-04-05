#include<iostream>
#include<stack>
using namespace std;
// extra jo brackets hai unko nikaln 
// extra brackets nikalo agar brackets ke beech mei 
// operators ho toh fir redundant nhi hai false kardo
// operators nahi ho toh fir redundant hai since beech mei extra brackets ya
// useless hai brackets woh toh pop kardo.

bool redundantbracket(string &s){
    stack<char> st;
    for(int i =0; i<s.length();i++){
        char ch = s[i];

        if(ch == '(' || ch == '+' ||ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            // ch ya toh close bracket or lowercase letter
            if(ch==')'){
                bool isredundant = true;

                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        isredundant = false;
                    }
                    st.pop();
                }
                
                if(isredundant == true){
                    return true;
                }
                st.pop();
            }

        }
    }
    return false;
}