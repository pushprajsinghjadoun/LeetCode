class Solution {
public
    bool isPalindrome(int x) {
        if(x0)
        {
            return false;
        }
        if(x0 and x10)
        {
            return true;
        }
        long int temp = x;
        long int sum = 0;
        while(x0)
        {
            int r=x%10;    
            sum=(sum10)+r;    
            x=x10;    
        }
        
        if(temp==sum)
        {
            return true;
        }else
        {
            return false;
        }
    }
};