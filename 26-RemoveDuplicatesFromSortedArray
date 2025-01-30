class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::vector<int>::iterator it = unique(nums.begin(), nums.end()); // pindahkan semua duplikat ke belakang, ambil alamat element unik terakhir
        nums.erase(it, nums.end());
        return nums.size();
    }
};
