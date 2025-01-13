class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        if(x == INT_MIN) return 0;
    
        bool isNegative = x < 0;
        if (isNegative) x = -x;

        while (x != 0) {
            int lastNum = x % 10;

            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && lastNum > INT_MAX % 10)) {
                return 0;  // Overflow
            }
            
            reversed = reversed * 10 + lastNum;
            x /= 10;
        }
        return isNegative ? -reversed : reversed;
    }
};
