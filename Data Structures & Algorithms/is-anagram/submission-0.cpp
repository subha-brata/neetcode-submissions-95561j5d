class Solution {
public:
    bool isAnagram(string s, string t) {
        map< char, int> a,b;
        for(auto i:s) a[i]++;
        for(auto i:t) b[i]++;
        if(a.size() != b.size())
            return false;
       for (auto i = a.begin(), j = b.begin(); i != a.end() && j != b.end(); ++i, ++j) {
            if (*i != *j) return false;
        }
        return true;
    }
};
