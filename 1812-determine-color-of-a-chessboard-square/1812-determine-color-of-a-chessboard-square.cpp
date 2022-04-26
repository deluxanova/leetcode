class Solution {
public:
    bool squareIsWhite(string s) {
        char letter = s[0],pos = s[1];
        if( (int)(letter)%2!=0 )
            return ( (int)pos%2!=0 )?false:true;
        else
            return ( (int)pos%2!=0 )?true:false; 
    }
};