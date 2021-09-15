class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       vector<int> ::iterator itr;
        itr = unique(nums.begin(), nums.end());
        int re = distance(nums.begin(), itr);
        return re;
    }
};