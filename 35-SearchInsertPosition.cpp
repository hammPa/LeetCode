class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (size_t i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;  // Jika ditemukan, kembalikan indeks
            }
            if (nums[i] > target) {
                return i;  // Jika ditemukan angka lebih besar dari target, kembalikan indeksnya
            }
        }
        return nums.size();  // Jika target lebih besar dari semua elemen, return indeks setelah elemen terakhir
    }
};
