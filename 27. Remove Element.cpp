class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                c++;
                
            }else
            {
                nums[i]=100;
            }
        }
        
        sort(nums.begin(),nums.end());
        return c;
    }
};