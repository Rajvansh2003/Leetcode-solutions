class Solution {
public:
    string removeOccurrences(string s, string part) {
        int index = s.find(part);
        while(index != string::npos){
            s.erase(index,part.length());
            index = s.find(part);
        }
        return s;
    }
};