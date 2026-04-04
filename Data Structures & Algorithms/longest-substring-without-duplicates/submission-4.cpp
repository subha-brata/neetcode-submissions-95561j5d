class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        int l=0,r=0,ans=0, n=s.size();
        map<char,int>st;
        while(r<n){
           if(st.find(s[r])!=st.end()){
             l= max(st[s[r]]+1,l);
           }
           st[s[r]]=r;
           ans= max(ans, r-l+1);
           r++;
        }
         return ans;
    }
};
