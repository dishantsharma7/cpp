class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=(m+n)-1,y=n-1,x=m-1;
        while(y>=0){
            if(x>=0 && nums1[x]>nums2[y]){
                nums1[i--]=nums1[x--];
        }
        else{
            nums1[i--]=nums2[y--];
        }          
        }
    }
};