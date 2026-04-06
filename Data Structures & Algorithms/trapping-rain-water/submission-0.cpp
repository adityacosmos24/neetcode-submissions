class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftmax=0,rightmax=0;
        int s=0,e=n-1;

        int ans=0;
        while(s<=e)
        {
            if(height[s]<height[e])
            {
                if(height[s]>leftmax)
                leftmax=height[s];
                else
                ans+=leftmax-height[s];

                s++;
            }
            else
            {
                if(height[e]>rightmax)
                rightmax=height[e];
                else
                ans+=rightmax-height[e];

                e--;
            }
        }
        
        return ans;
    }
};