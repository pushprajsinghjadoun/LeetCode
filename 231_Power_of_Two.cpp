class Solution {
public:
    bool isPowerOfTwo(int n) {
        int long long c = 0;
        if(n<0)
        {
            return false;
        }
        while(n)
        {
            if((n&1>0)) c++;
            n = n>>1;
        }
        if(c==1){
            return true;
        }else{
            return false;
        }
        
    }
};