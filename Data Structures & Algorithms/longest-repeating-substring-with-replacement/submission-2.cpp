class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0, n=s.size(), ans=0, maxf=0;
        map<char,int> mp;
        while(r<n){
            mp[s[r]]++;
            maxf = max(maxf, mp[s[r]]);
            while(r-l+1-maxf>k){
                mp[s[l]]--;
                maxf = max(maxf,mp[s[l]]);
                l++;
            }
            if(r-l+1-maxf<=k) ans = max(r-l+1,ans);
            r++;
        }
      
        return ans;
    }
};
