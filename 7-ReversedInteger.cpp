class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        while(x != 0){
            int lastNum = x % 10;
            reversed = reversed * 10 + lastNum;
            x /= 10;
        }
        return reversed;
    }
};
