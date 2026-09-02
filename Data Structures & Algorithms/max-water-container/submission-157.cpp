class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int lp = 0, rp = heights.size() - 1;
        while(lp<rp){
            int area = min(heights[lp], heights[rp]) * (rp - lp);
            maxArea = max(maxArea, area);
            heights[lp] < heights[rp] ? lp++ : rp--;
        }
        return maxArea;
    }
};
