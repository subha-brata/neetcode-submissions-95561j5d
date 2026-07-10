class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {
        let ans=0, l=0, r=0, n=s.length;
        let m=new Map();
        while(r<n){
           if(m.has(s[r])){
             l = Math.max(m.get(s[r])+1,l);
           }
            m.set(s[r],r);
            ans = Math.max(ans,r-l+1);
            r++;
        }
        return ans;
    }
}
