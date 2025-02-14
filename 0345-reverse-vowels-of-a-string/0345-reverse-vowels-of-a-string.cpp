class Solution {
public:
bool isVowel(char ch){
    char tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
   

}
    string reverseVowels(string s) {
        int n = s.size();

        int l = 0;
        int r = n - 1;

        while(l<r){

            if(isVowel(s[l]) && isVowel(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;

            }

            else if(isVowel(s[l]) == 0){
                l++;
            }

            else {
                r--;
            }
            
        }
        return s;
    }
};