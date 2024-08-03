class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].length();
        for(int i=1;i<n;i++)
        {
            if(strs[i].length()<m)
            {
                m=strs[i].length();
            }
        }
        string res="";
        char cur;
        for(int i=0;i<m;i++)
        {
            cur=strs[0][i];
            for(int j=1;j<n;j++)
            {
                if(cur!=strs[j][i]){
                    return res;
                }
            }
            res.push_back(cur);
        }
        return res;
    }
};