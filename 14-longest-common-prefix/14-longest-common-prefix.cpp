class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
    for(int j=0; j<strs[0].size(); j++)
    {
        
        for(int i=1; i<strs.size(); i++)
        {
            if(strs[0][j] != strs[i][j])
                return ans;   
        }
        ans += strs[0][j];  
    }
    return ans;
    }
};