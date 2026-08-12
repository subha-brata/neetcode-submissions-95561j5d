class Solution {
    /**
     * @param {string} s
     * @param {number} k
     * @return {number}
     */
    characterReplacement(s, k) {
        var ans =0;
        var n = s.length;
        var l=0,r=0;
        var maxf=0;
        var count = new Map();
        while(r<n){
            count.set(s[r],(count.get(s[r])||0)+1);
            maxf= Math.max(maxf,count.get(s[r]));
            while (r - l + 1 - maxf > k) {
                count.set(s[l], count.get(s[l]) - 1);
                l++;
            }
            ans= Math.max(ans, r-l+1);
            r++;
        }
        return ans;
    }
}
