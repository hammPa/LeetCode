class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged = nums1;
        int m = nums1.size();
        int n = nums2.size();
        merged.insert(merged.end(), nums2.begin(), nums2.end());
        for(int i = 0; i < m + n; i++){
            for(int j = i + 1; j < m + n; j++){
                if(merged[i] > merged[j]){
                    int temp = merged[i];
                    merged[i] = merged[j];
                    merged[j] = temp;
                }
            }
        }
        int index = merged.size() / 2;
        return (merged.size() % 2 == 1) ? merged[index] : (merged[index] + merged[index-1]) / 2.0;
    }
};
