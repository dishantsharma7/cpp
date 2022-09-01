class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0;
        int i=0,j=height.size()-1;
        if(height.size()<2){
            return max;
        }
        while(i<j){
            int ar=min(height[i],height[j])*(j-i);
            if(ar>max){
                max=ar;
            }
            if(height[i]>height[j]){
                j--;
            }
            else
                i++;
        }
   return max;
    }
};