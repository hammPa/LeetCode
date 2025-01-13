class Solution {
public:
    int maxArea(vector<int>& height) {
        int out = 0;
        int max = 0;
        for(int i = 0; i < height.size(); i++){
            for (int j = i + 1; j < height.size(); j++) {
                int h = std::min(height[i], height[j]); 
                int w = j - i;
                out = std::max(out, h * w);
            }
        }
        return out;
    }
};




class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        // Lakukan perhitungan sampai kedua pointer bertemu
        while (left < right) {
            // Hitung area dengan memilih garis terpendek di antara left dan right
            int h = std::min(height[left], height[right]);
            int w = right - left;
            maxArea = std::max(maxArea, h * w);

            // Pindahkan pointer yang mengarah pada garis yang lebih pendek
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};
