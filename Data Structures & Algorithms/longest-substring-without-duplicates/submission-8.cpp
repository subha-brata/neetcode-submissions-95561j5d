class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l=0,r=0,n=s.size();
        int ans=0;
        map<char,int> mp;
        while(r<n){
          if(mp.find(s[r]) != mp.end()){
            l=max(l,mp[s[r]]+1);
          }
          mp[s[r]]=r;
          ans =max( r-l+1,ans);
          r++;
        } 
        return ans;
    }
};
