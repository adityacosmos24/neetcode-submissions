class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            string copy=strs[i];
            sort(copy.begin(),copy.end());
            mp[copy].push_back(i);
        }

        vector<vector<string>> ans;

        for(auto [str,group]:mp)
        {
            vector<string> temp;
            for (int idx : group) temp.push_back(strs[idx]);
            ans.push_back(temp);
        }

        return ans;
    }
};
