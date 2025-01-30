class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Buang elemen yang bukan bagian dari input awal
        nums1.resize(m);

        // Gabungkan nums2 ke nums1
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        // Urutkan hasil akhir
        sort(nums1.begin(), nums1.end());
    }
};
