class Solution {
public:
    int addDigits(int num) {
        int temp = num,r = 0,cnt = 0,sum = 0;
        
        if( floor(log10(num)+1)<=1 )
            return num;
        
        while(temp!=0){
            cnt++;
            r = temp%10;
            sum += r;
            temp /= 10;
        }
        return addDigits(sum);
    }
};