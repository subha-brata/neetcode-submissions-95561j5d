class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {
        let ans=0, l=0, r=0, n=s.length;
        let st=new Set();
        while(r<n){
            while (st.has(s[r])) {
            st.delete(s[l]);
            l++;
        }
            st.add(s[r]);
            ans = Math.max(ans,r-l+1);
            r++;
        }
        return ans;
    }
}
