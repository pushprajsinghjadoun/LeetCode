class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v(nums.size(),1);
        int p=1;
        for(int i=0;i<nums.size();i++){
            v[i]*=p;
            p*=nums[i];
        }
        p=1;
        for(int i=nums.size()-1;i>=0;i--){
            v[i]*=p;
            p*=nums[i];
        }
        return v;
    }
};