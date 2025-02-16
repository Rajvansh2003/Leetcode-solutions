class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto it: mp){
            if(it.second >= 2){
                return true;
            }
        }

        return false;
    }
};