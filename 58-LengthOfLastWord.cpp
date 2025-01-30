class Solution {
public:
    int lengthOfLastWord(string s) {
        // Hapus spasi yang mungkin ada di akhir string
        size_t end = s.find_last_not_of(' ');
        if (end == std::string::npos) return 0;  // Jika string kosong atau hanya berisi spasi

        // Cari posisi spasi terakhir sebelum kata terakhir
        size_t start = s.rfind(' ', end);
        
        return end - start;  // Panjang kata terakhir
    }
};
