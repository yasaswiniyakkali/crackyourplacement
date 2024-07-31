//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        int min=1000;
        int N=arr.size();
        string s;
        string ans="";
        // your code here
        for(int i=0;i<N;i++)
        {
            if(arr[i].length()<min)
            {
                min=arr[i].size();
                s=arr[i];
            }
        }
        int x=0,j=0;
        for(j=0;j<s.size();j++)
        {
            for(int k=0;k<N;k++)
            {
                if(s[j]!=arr[k][j]){
                    x=1;
                }
            }
            
            if(x==1){
                break;
            }
            ans+=s[j];
        }
        if(j==0)
        {
            return("-1");
        }
        return(ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends