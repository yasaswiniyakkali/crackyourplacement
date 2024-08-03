class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        int m=height.size();
        int i=0,j=m-1;
        int water;
        while(i<j)
        {
            water=(j-i)*min(height[i],height[j]);
            maxi=max(water,maxi);
            if(height[i]<height[j])
            {
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
};