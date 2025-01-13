class Solution {
public:
    bool isPalindrome(int x) {
        std::string num = std::to_string(x);
        int start = 0;
        int end = num.size() - 1;
        while(start < end){
            if(num[start] == num[end]){
                start++;
                end--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
