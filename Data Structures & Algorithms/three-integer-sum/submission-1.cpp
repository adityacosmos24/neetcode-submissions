class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        
        set<vector<int>> s;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int req=-(nums[i]+nums[j]);
                if(mp.find(req)!=mp.end())
                {
                    vector<int> temp={nums[i],nums[j],nums[mp[req]]};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
            }
            mp[nums[i]]=i;
        }

        vector<vector<int>> ans;
        for(auto &vec:s) ans.push_back(vec);
        
        return ans;
    }
};
