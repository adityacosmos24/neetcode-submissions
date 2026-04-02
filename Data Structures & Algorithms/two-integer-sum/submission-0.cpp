class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;

        unordered_map<int,int> mp;
        while(i<n)
        {
            int req=target-nums[i];
            if(mp.find(req)!=mp.end()) return {mp[req],i};
            mp[nums[i]]=i;
            i++;
        }

        return {-1,-1};
    }
};
