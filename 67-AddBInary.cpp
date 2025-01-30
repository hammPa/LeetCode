class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) { 
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0'; // sum di tambah dengan string pada index yang sama yang diubah jadi string
            if (j >= 0) sum += b[j--] - '0';
            
            result += (sum % 2) + '0';  // Tambahkan hasil (0 atau 1)
            carry = sum / 2;            // Update carry (0 atau 1)
        }

        reverse(result.begin(), result.end()); // Balik hasil karena kita tambah dari belakang
        return result;
    }
};
