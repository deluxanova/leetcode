class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ' && res) return res;
            else if (s[i] != ' ') res++;
        }
        return res;
    }
};