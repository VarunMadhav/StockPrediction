//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    private:
    bool knows(vector<vector<int> >&M,int a,int b,int n){
        if(M[a][b]==1){
            return true;
        }
        else{
            return false;
        }
    }
    
    public:
    
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        // push all elements into stack
        for(int i=0; i<n; i++){
            s.push(i);
        }
        
        // get 2 elements ie pop them and compare them.
        
        while(s.size() > 1){
            
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            // if a knows b then discard a and push b
            if(knows(M,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        
        int ans = s.top();
        // verify that the single element remaining by check for row and col
        
        // row check ki sab zero hai ya nahi.
        int zerocount = 0;
        for(int i=0;i<n;i++){
            if(M[ans][i]==0){
                zerocount++;
            }
        }
        
        // all zeroes.. pura row check so n tak mei agar zero nah mile toh teek warna -1 return
        if(zerocount != n){
            return -1;
        }
        
        // column check
        int onecount = 0;
        for(int i=0;i<n;i++){
            if(M[i][ans]==1){
                onecount++;
            }
        }
        // exclude diagonal
        if(onecount != n-1){
            return -1;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends