class Solution {
public:
    
    void swap(int *a, int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==1 && nums[0]==val)
            return NULL;
        int j=nums.size()-1;
        for(int i=nums.size()-1; i>=0; --i){
                if(nums[i]==val){
                    swap(&nums[i], &nums[j]);
                    --j;
                }
        }
        return j+1;
    }
};