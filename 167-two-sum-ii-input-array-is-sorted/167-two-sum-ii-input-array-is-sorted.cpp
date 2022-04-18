class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int left=0,right=nums.size()-1,tempsum;
      
        while(left<right)
        {  
            tempsum=nums[left]+nums[right];
         if(tempsum==target)
             break;
            if(tempsum>target)
                right--;
            else
                left++;
        
        }
        return{left+1,right+1};
   
    }
};