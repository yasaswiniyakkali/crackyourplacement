//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{ 
    bool f(int ind,vector<int>arr,int sum,vector<vector<int>> &dp)
    {
        if(sum==0)return true;
        if(ind==0 )return (arr[0]==sum);
        
        if(dp[ind][sum]!=-1)return dp[ind][sum];
        bool np=f(ind-1,arr,sum,dp);
        bool p=false;
        if(arr[ind]<=sum){
            p=f(ind-1,arr,sum-arr[ind],dp);
        }
        return dp[ind][sum]=(p|np);
    }
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int m=arr.size();
        vector<vector<int>> dp(m,vector<int>(sum+1,-1));
        return f(arr.size()-1,arr,sum,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends