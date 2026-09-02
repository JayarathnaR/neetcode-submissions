class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left =0;
        int right = heights.size()-1;
        int ans = 0;
        while(left<right){
            int l = min(heights[left],heights[right]);
            int w = right - left;
            int area = l*w;
            ans = max(ans , area);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
       return ans; 
    }
};
