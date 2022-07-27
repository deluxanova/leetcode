class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = 0;
        for(string s : operations){
            if(s[1] == '+') n++;
            if(s[1] == '-') n--;
        }
        return n;
    }
};