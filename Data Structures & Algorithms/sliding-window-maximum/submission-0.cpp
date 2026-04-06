class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int l=0, r=0, n=nums.size();
        deque<int>pq;
        while(r<n){
            while(!pq.empty() && nums[pq.back()]<nums[r]) pq.pop_back();
            pq.push_back(r);
            if(l>pq.front()) pq.pop_front();
            if(r+1>=k) {
                ans.push_back(nums[pq.front()]);
                l++;
            }
            r++;
        }
        return ans;
    }
};
