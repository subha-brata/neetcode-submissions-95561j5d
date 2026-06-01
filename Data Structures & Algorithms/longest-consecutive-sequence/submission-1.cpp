class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        set<int>s;
        for(auto i:nums) s.insert(i);
        for(auto i:s){
            int cnt=0;
            while(s.find(i++)!=s.end())
                cnt++;
                ans=max(ans,cnt);           
        }
        return ans;
    }
};
