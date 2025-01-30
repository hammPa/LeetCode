class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;

        long N = n;

        if (N < 0) {
            x = 1 / x;  // Ambil invers dari x
            N = -N;     // Ubah n menjadi positif
        }

        double result = 1.0;
        while (N > 0) {
            if (N % 2 == 1) {
                result *= x;  // jika ganjil kali dengan x
            }
            x *= x;  // jika genap pangkatkan
            N /= 2;  // bagi n 2
        }
        return result;
    }
};
