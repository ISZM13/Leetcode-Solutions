class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int i=(nums.size()/2);
        while(nums[i]!=target)
        {
            if(target>nums[i])
            i=(i+nums.size())/2;
            else
            i=i/2;
        }
        return i;
    }
};