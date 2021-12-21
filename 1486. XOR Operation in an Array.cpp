class Solution {
public:
    int xorOperation(int n, int start) {
        int r=0;
        int nums[n];
        nums[0]=(start);
        
        if(n==1) return start;
        
        for(int i=1;i<n;i++)
        {
            if(i==1)
            {
                r = nums[0]^(start+(2*i));
            }else
            {
                r = r^(start+(2*i));
            }
        }
        return r;
    }
};