class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size(),res=0;
        vector<int> a(n);
        vector<int> b(n);
        a[0] = h[0], b[n-1] = h[n-1];
        for(int i=1;i<n;i++) a[i] = max(a[i-1],h[i]);
        for(int i=n-2;i>=0;i--) b[i] = max(b[i+1],h[i]);
        for(int i=0;i<n;i++) res += min(a[i],b[i]) - h[i];
        return res;
    }
};
