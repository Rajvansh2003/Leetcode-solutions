class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sortArr = heights;

        int count = 0;
        sort(sortArr.begin(),sortArr.end());

        for(int i = 0; i<heights.size(); i++){
            if(sortArr[i] != heights[i]){
                count++;
            }
        }
        return count;
    }
};