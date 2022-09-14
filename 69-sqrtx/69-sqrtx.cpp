class Solution {
public:
    int mySqrt(int x) {
        long long num=1;
        if(x==0||x==1)
            return x;
        while(num*num<=x){
            num++;
        }
        return num-1;
    }
};