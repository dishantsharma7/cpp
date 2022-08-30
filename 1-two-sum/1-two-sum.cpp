class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> res;
       for(int i=0;i<nums.size();i++){
           int comp= target-nums[i];
           if(m.find(comp)!=m.end()){
               res.push_back(m[comp]);
               res.push_back(i);
               break;
           }
           else
           m.insert({nums[i],i});
           
       }
        return res;
    }
};