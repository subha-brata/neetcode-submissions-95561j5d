class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r= *max_element(piles.begin(),piles.end());
        int res = r;
        while(l<=r){
            int mid = l + (r - l) / 2;
            long long total=0;
            for(int i = 0 ;i < piles.size(); i++){
                total += (piles[i] + (long long)mid - 1) / mid;
            }
            if(total <= h){
                res = mid;
                r = mid - 1;
            }
            else l=mid+1;
        }
        return res;
    }
};