class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        
        vector<pair<int,int>> vec;
        for(auto [num,fr]:mp) vec.push_back({fr,num});

        sort(vec.rbegin(),vec.rend());

        vector<int> ans;
        int i=0;
        while(k--)
        {
            ans.push_back(vec[i].second);
            i++;
        }

        return ans;
    }
};
