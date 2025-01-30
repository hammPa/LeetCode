// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int newLastDigit = digits[digits.size() - 1] + 1; // angka paling belakang ditambah 1
//         if(newLastDigit >= 10){
//             int sum = newLastDigit / 10;
//             int mod = newLastDigit % 10;
//             digits[digits.size() - 1] = sum;
//             digits.emplace_back(mod);
//         }
//         else {
//             digits[digits.size() - 1] = newLastDigit;
//         }
//         return digits;
//     }
// };



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) { 
                digits[i]++;  
                return digits; 
            }
            digits[i] = 0; // ubah ke 0 semua angka 9, jika ukan 9 tambahkan 1
        }
        // jika semua digit adalah 9 maka akan di tambahkan di vector paling depan angka 1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
