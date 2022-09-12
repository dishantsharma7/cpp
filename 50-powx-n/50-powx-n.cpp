class Solution {
public:
    double myPow(double x, int n) {
         long exponent = abs(n);
        double result = helper(x, exponent);
        if (n >= 0) {
            return result;
         }
        return 1.0 / result;
     }
 private:
     double helper(double x, long n) {
         if (x == 0.0) {
             return 0;
         }
         if (n == 0) {
             return 1.0;
         }
         double result = helper(x * x, n / 2);
         if (n % 2 == 0) {
             return result;
         }
         return result * x;
        
    }
};