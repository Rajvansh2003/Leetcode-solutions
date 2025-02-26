
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int positive = 0, negative = 0, prefixSum = 0, ans = 0;

        for (int n : nums) {
            prefixSum += n;
            ans = max(ans, max(abs(prefixSum - negative), abs(prefixSum - positive)));

            if (prefixSum >= 0) {
                positive = max(positive, prefixSum);
            } else {
                negative = min(negative, prefixSum);
            }
        }
        return ans;
    }
};