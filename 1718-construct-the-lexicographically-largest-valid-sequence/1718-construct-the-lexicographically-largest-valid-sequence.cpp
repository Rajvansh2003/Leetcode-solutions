class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        int size = 2 * n - 1;
        vector<int> res(size, 0);
        vector<bool> used(n + 1, false);

        function<bool(int)> backtrack = [&](int index) {
            if (index == size) return true;
            if (res[index] != 0) return backtrack(index + 1);

            for (int num = n; num >= 1; --num) {
                if (used[num]) continue;
                int secondPos = (num == 1) ? index : index + num;

                if (secondPos < size && res[secondPos] == 0) {
                    res[index] = res[secondPos] = num;
                    used[num] = true;

                    if (backtrack(index + 1)) return true;

                    res[index] = res[secondPos] = 0;
                    used[num] = false;
                }
            }
            return false;
        };

        backtrack(0);
        return res;
    }
};
