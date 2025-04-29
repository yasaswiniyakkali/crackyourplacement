class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<=n-3;i++)
        {
            unordered_map<char,int> d;
            int count=0;

            for(int j=0;j<3;j++)
            {
                if(d.find(s[i+j])==d.end())
                {
                    d[s[i+j]]=1;
                    count=count+1;
                }
                else{
                    d[s[i+j]]=d[s[i+j]]+1;
                }
            }
            if(count==3)
            {
                ans=ans+1;
            }

        }
        return ans;
    }
};