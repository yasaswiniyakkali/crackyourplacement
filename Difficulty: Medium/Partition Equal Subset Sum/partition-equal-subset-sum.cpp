//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    int f(int i,int arr[],int s,int N,vector<vector<int>> &dp)
    {
        if(s==0){
            return 1;
        }
        if(i==0)return arr[0]==s;
        
        if(dp[i][s]!=-1)return dp[i][s];
        
        int np=f(i-1,arr,s,N,dp);
        int p=0;
        if(arr[i]<=s)
        {
            p=f(i-1,arr,s-arr[i],N,dp);
        }
        return dp[i][s]=max(p,np);
    }
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0)return 0;
        int x=sum/2;
        vector<vector<int>> dp(N,vector<int> (x+1,-1));
        return f(N-1,arr,x,N,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends