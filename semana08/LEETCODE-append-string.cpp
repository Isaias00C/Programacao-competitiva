class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        for(i, j; i < s.size() || j < t.size(); i++){
            if(s[i] == t[j]) j++;
        }
        return t.size() - j;
    }
};