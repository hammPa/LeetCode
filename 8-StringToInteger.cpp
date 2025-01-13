class Solution {
public:
    int myAtoi(string s) {
        int num = 0;
        int i = 0;
        bool isNegative = false;

        while (i < s.size() && std::isspace(s[i])) {
            i++;
        }

        if (i < s.size() && s[i] == '-') {
            isNegative = true;
            i++;
        } else if (i < s.size() && s[i] == '+') {
            i++;
        }

        while (i < s.size() && std::isdigit(s[i])) {
            int temp = s[i] - '0';  // Mengonversi karakter ke angka
            
            if (num > (INT_MAX - temp) / 10) {
                return isNegative ? INT_MIN : INT_MAX;
            }

            num = num * 10 + temp;
            i++;
        }
        return isNegative ? -num : num;
    }
};
