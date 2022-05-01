class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target)
   {
        int m=matrix.size();
        int n=matrix[0].size();
        if(n==0 ||m==0) return false;
        int start=0,end=m*n -1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int ind=matrix[mid/n][mid%n];
            if(target==ind)
                return true;
            else if(target>ind) start=mid+1;
            else
                end=mid-1;
            
        }
        return false;
    }
};