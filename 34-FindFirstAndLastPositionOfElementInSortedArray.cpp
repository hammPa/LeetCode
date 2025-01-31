class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Find the first occurrence using find()
        auto start = find(nums.begin(), nums.end(), target);
        
        // If target is not found, return {-1, -1}
        if (start == nums.end()) return {-1, -1};
        
        // Find the last occurrence using reverse iterator (rbegin, rend)
        auto end = find(nums.rbegin(), nums.rend(), target);
        
        // Convert reverse iterator to normal iterator and calculate the index
        return {static_cast<int>(distance(nums.begin(), start)),
                static_cast<int>(distance(nums.begin(), end.base()) - 1)};
    }
};
