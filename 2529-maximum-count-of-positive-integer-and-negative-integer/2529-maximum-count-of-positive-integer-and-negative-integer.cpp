class Solution {
public:
    int maximumCount(std::vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;

        // Find the index of the first positive number
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > 0) {
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        }
        // Now, 'left' is the index of the first positive number
        int positiveCount = n - left;

        // Find the last negative number using binary search
        left = 0; 
        right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < 0) {
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }
        // Now, 'right' is the index of the last negative number
        int negativeCount = right + 1;

        // Return the maximum count of positive and negative integers
        return std::max(positiveCount, negativeCount);
    }
};