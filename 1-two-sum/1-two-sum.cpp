class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                a.push_back(m[target-nums[i]]);
                a.push_back(i);
                return a;
                
            }
            m[nums[i]]=i;
        } return a;
    }
};