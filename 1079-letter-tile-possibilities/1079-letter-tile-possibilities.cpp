class Solution {
public:
void backtrack(unordered_map<char, int>& counter, int& total) {
    for (auto [ch, freq] : counter) {
        if (freq > 0) {
            counter[ch]--;
            total++;
            backtrack(counter, total);
            counter[ch]++;
        }
    }
}
    int numTilePossibilities(string tiles) {
         unordered_map<char, int> counter;
    for (char ch : tiles) {
        counter[ch]++;
    }
    int total = 0;
    backtrack(counter, total);
    return total;
    }
};