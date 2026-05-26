class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int j = 0;
        int mx = 0;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            while(mp[s[i]] > 1) {
                mp[s[j]]--;
                j++;
            }
            mx = max(mx, i - j + 1);
        }
        return mx;
    }
};