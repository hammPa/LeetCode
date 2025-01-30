class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];  // Inisialisasi dengan elemen pertama
        int currentSum = nums[0];  // Inisialisasi dengan elemen pertama
        
        for (int i = 1; i < nums.size(); i++) {
            // Tentukan apakah lebih baik menambahkan elemen saat ini atau memulai subarray baru
            if (currentSum + nums[i] > nums[i]) {
                currentSum += nums[i];  // Lanjutkan subarray yang ada
            } else {
                currentSum = nums[i];  // Mulai subarray baru dari elemen ini
            }
            
            // Update maxSum jika currentSum lebih besar
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }

        return maxSum;
    }
};
