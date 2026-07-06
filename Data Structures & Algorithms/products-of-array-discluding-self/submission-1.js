class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    productExceptSelf(nums) {
        const n=nums.length;
        const l = new Array(n);
        const r = new Array(n);
        l[0]=r[n-1]=1;
        for(let i=1;i<n;i++){
            l[i]=l[i-1]*nums[i-1];
        }
        for(let i=n-2;i>=0;i--){
            r[i]=r[i+1]*nums[i+1];
        }
        for(let i=0;i<n;i++) nums[i]=l[i]*r[i];
        return nums;
    }
}
