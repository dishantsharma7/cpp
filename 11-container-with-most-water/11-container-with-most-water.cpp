class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int maxm=0,area;
        while(left<right)
        {   int w=right-left;
            int h=min(height[left],height[right]);
            area=w*h;
           maxm=max(maxm,area);
            if(height[left]<height[right])
                left++;
            else
                if(height[left]>height[right])
                    right--;
            else
                {
                    left++;
                    right--;
                    
                }
            
            
        }
        return maxm;
    }
};