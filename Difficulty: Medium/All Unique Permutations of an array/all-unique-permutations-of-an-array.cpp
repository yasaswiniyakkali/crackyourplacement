//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    void recurpermute(int index,vector<int> &arr,set<vector<int>> &s)
    {
        if(index==arr.size())
        {
            s.insert(arr);
            return;
        }
        for(int i=index;i<arr.size();i++)
        {
            swap(arr[index],arr[i]);
            recurpermute(index+1,arr,s);
            swap(arr[index],arr[i]);
        }
    }
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        set<vector<int>> s;
        vector<vector<int>> ans;
        recurpermute(0,arr,s);
        for(auto it:s){
            ans.push_back(it);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends