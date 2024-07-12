class Solution {
public:
    string getEncryptedString(string s, int k) {
        string aux = s;
        for(int i = 0; i < s.size(); i++){
            aux[i] = s[(i+k)%s.size()];
        }
        return aux;
    }
};