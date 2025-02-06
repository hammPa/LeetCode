class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Jika input kosong, langsung return string kosong
        if (strs.empty()) return "";

        // Loop untuk mengecek setiap karakter dalam string pertama
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i]; // Ambil karakter dari string pertama pada posisi ke-i

            // Bandingkan karakter ini dengan setiap string lain dalam array
            for (int j = 1; j < strs.size(); j++) {
                // Jika indeks i sudah melebihi panjang string strs[j] 
                // atau karakter ke-i tidak sama dengan karakter dari strs[0]
                if (i >= strs[j].size() || strs[j][i] != c) { 
                    return strs[0].substr(0, i); // Kembalikan prefix yang sudah ditemukan sejauh ini
                }
            }
        }
        return strs[0]; // Jika semua karakter cocok, return string pertama sebagai prefix
    }
};
