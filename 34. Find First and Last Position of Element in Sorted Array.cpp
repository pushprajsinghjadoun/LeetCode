class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> r;
        if(nums.size()==0)
        {
            r.push_back(-1);
            r.push_back(-1);
            return r;
        }
       
        vector<int>::iterator low1;
        vector<int>::iterator upper1;
        low1 = lower_bound(nums.begin(),nums.end(),target);
        upper1 = upper_bound(nums.begin(),nums.end(),target);
        r.push_back((low1 - nums.begin()));
        r.push_back(upper1 - nums.begin()-1);
        
        int mm = r[0];
        int mmm = r[1];
        
        if(mm>=nums.size() || mmm>=nums.size() )
        {
               r[0] = -1;
               r[1] = -1;
        }
        else if(nums[r[0]]!=target)
          {
               r[0] = -1;
               r[1] = -1;
          }
        
        
        return r;
    }
};