class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char,int> visit;
        for(char c : s ) visit[c]++;
        for(char c : t ){
           visit[c]--; 
           if(visit[c] < 0 ) return false;
        }
        return true;
    }
};
