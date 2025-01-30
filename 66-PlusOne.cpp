class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int newLastDigit = digits[digits.size() - 1] + 1; // angka paling belakang ditambah 1
        if(newLastDigit >= 10){
            int sum = newLastDigit / 10;
            int mod = newLastDigit % 10;
            digits[digits.size() - 1] = sum;
            digits.emplace_back(mod);
        }
        else {
            digits[digits.size() - 1] = newLastDigit;
        }
        return digits;
    }
};
