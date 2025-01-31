class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); // Penanda awal, digunakan sebagai basis untuk menghitung panjang substring valid
        int result = 0; // Variabel untuk menyimpan panjang parentheses yang valid maksimal
        
        // loop setiap karakter
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i); // Jika karakter adalah '(', simpan indeksnya ke stack
            }
            else { // Jika karakter adalah ')'
                st.pop(); // Pop elemen teratas (indeks '(' terakhir) untuk mencocokkan ')'
                
                if (st.empty()) {
                    // Jika stack kosong setelah pop, itu berarti ')' ini tidak memiliki pasangan
                    // Maka, push indeks ')' sekarang sebagai penanda batas baru
                    st.push(i);
                }
                else {
                    // Jika stack tidak kosong, hitung panjang substring valid
                    // Substring valid dimulai dari posisi st.top() + 1 hingga indeks i
                    result = max(result, i - st.top()); // Update hasil jika panjang valid lebih panjang
                }
            }
        }
        return result;
    }
};
