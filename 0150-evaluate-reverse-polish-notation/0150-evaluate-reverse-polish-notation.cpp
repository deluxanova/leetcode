class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        long t1 = 0,t2 = 0;
        stack<long> stk;
        
        for(string it:tokens){
            if( it=="+" || it=="-" || it=="*" || it=="/" ){
                t1 = stk.top();
                stk.pop();
                t2 = stk.top();
                stk.pop();
                if( it=="+" )
                    stk.push( t2+t1 );
                if( it=="-" )
                    stk.push( t2-t1 );
                if( it=="*" )
                    stk.push( t2*t1 );
                if( it=="/" )
                    stk.push( t2/t1 );
            }
            else
                stk.push( stoi(it) );
        }
        return stk.top();
    }
};