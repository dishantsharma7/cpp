class Solution {
public:
    int getSum(int a, int b) {
      int sum=a;
        unsigned int carry; //handle all the negative cases
        while(b)
        {
            sum=a^b;
            carry=a&b;
            a=sum;
            b=carry<<1;
        }
        return sum;
    }
};