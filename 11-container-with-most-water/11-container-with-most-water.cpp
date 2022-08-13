class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int mx=INT_MIN;
        while(i<j){
           int amount=(j-i)*min(height[i],height[j]);
            mx=max(mx,amount);
            height[i]<height[j] ?i++ :j--;
        }
        return mx;
    }
};