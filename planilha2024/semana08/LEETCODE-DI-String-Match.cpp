class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> perm (s.size() + 1);
        int begin = 0, end = s.size();
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'I'){
                perm[i] = begin;
                begin++;
            }
            if(s[i] == 'D'){
                perm[i] = end;
                end--;
            }
        }
        perm[s.size()] = begin;
        return perm;
    }
};