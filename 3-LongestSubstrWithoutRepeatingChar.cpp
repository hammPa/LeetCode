class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        unordered_set<char> charSet; // Melacak karakter unik
        int start = 0; // Pointer awal
        int maxLength = 0; // Panjang maksimum substring

        for (int end = 0; end < s.size(); ++end) {
            // Jika ada karakter yang berulang
            while (charSet.find(s[end]) != charSet.end()) {
                charSet.erase(s[start]); // Hapus karakter awal
                ++start; // Geser pointer awal
            }
            charSet.insert(s[end]); // Tambahkan karakter saat ini
            maxLength = max(maxLength, end - start + 1); // Hitung panjang maksimum
        }

        return maxLength;
    }
};
