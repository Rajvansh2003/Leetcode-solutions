class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        
        for (int i = 0; i < k; i++) {
           
            int richestPileIndex = 0;

            for (int currentPileIndex = 0; currentPileIndex < n;
                 currentPileIndex++) {
                
                if (gifts[richestPileIndex] < gifts[currentPileIndex]) {
                    richestPileIndex = currentPileIndex;
                }
            }

            
            gifts[richestPileIndex] = sqrt(gifts[richestPileIndex]);
        }

        long long int numberOfRemainingGifts = accumulate(gifts.begin(), gifts.end(), 0LL);

        return numberOfRemainingGifts;
    }
};