

vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());

    vector<vector<int>> result;
    for (auto& pair : nums1) {
        if (!result.empty() && result.back()[0] == pair[0]) {
            result.back()[1] += pair[1];
        } else {
            result.push_back(pair);
        }
    }
    return result;
}