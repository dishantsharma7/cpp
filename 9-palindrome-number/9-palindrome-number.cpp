class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int a=0;
        int temp=x;
        while(temp>0){
            int r=temp%10;
            a=a*10+r;
            temp/=10;
        }
        if(a==x){
            return true;
        }
        return false;
        
    }
};