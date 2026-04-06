class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0) return 0;
        int i=0,j=0;
        int ans=1;
        unordered_map<char,int> mp;
        while(i<n)
        {
            mp[s[i]]++;
            while(mp.size()<(i-j+1))
            {
                mp[s[j]]--;
                if(mp[s[j]]==0) mp.erase(s[j]);
                j++;
            }

            ans=max(ans,i-j+1);
            i++;
        }

        return ans;
    }
};
