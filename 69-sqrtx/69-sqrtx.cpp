// class Solution {
// public:
//     int mySqrt(int x) {
//         long long num=1;
//         if(x==0||x==1)
//             return x;
//         while(num*num<=x){
//             num++;
//         }
//         return num-1;
//     }
// };
class Solution{
    public:
    int mySqrt(int x){
       long long i,num;
        if(x<=1)
            return x;
        for(i=1;i<=x;i++)
        {
            if(i*i>x)
            {
                num=i-1;
                break;
            }
        }
        return num;
    }
};