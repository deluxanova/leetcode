class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);
        string word,res="";
        
        while(ss>>word){
            reverse(word.begin(),word.end());
            res+=word;
            res+=" ";
        }
        res.erase(res.size()-1);
        return res;
    }
};