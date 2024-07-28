//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
         set<char>s;
        for(auto it:str) s.insert(it);
        string new_str="";
        for(int i=0;i<str.size();i++)
        {
            char ch=str[i];
            if(s.find(ch)!=s.end()){
                 new_str+=ch;
                 s.erase(ch);
            }
        } 
        return  new_str;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends