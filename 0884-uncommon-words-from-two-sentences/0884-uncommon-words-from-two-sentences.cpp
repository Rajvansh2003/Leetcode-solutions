class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        vector<string> ans;

        istringstream streamA(s1), streamB(s2);
        string word;

        while(streamA >> word){
            mp[word]++;
        }

        while(streamB >> word){
            mp[word]++;
        }

        for(auto it: mp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }

        return ans;

    }
};