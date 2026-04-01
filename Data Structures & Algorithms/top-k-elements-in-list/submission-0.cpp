class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<pair<int,int>> v;
        vector<int>ans;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i:mp){
            v.push_back({i.second,i.first});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++) ans.push_back(v[i].second);
        return ans;
    }
    
};
