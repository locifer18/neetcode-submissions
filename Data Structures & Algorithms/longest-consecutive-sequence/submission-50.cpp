class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxLen = 0;
        for(int n : nums){
            if(!s.count(n-1)){
               int len = 1, curr = n;
               while(s.count(curr+1)){
                curr++;
                len++;
               }
               maxLen = max(maxLen,len);
            }
        }
        return maxLen;
    }
};
