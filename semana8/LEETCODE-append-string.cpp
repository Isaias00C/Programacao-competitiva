class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        for(i, j; i < t.size() || j < s.size(); j++){
            if(t[i] == s[j]) i++;
        }
        return s.size() - i;
    }
};