class Solution {
public:
    int trap(vector<int>& arr) {
        int ans = 0,lmax=0, rmax=0;
        int l=0, r = arr.size()-1;
        while( l < r){
            if(arr[l]<=arr[r]){
                if(lmax > arr[l]) ans+= lmax-arr[l];
                else lmax = arr[l];
                l++;
            }
            else{
                if(rmax > arr[r]) ans += rmax-arr[r];
                else rmax = arr[r];
                r--;
            }
        }
        return ans;
    }
};
