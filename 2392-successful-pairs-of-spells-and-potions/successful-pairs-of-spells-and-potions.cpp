class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        vector<int> ans;
        sort(potions.begin(), potions.end());
        for(int i=0;i<n;i++)
        {
            int low=0,high=m-1;
            int target=m;
            while(low<=high)
            {
                int mid=(low+high)/2;
                long long prod=(long long)spells[i]*(long long)potions[mid];
               if (prod >= success) {
                target = mid;  // found a possible index
                high = mid - 1; // search left part for smaller index
            } else {
                low = mid + 1;
            }

            }
            ans.push_back(m-target);
        }
        return ans;
    }
};