class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int white =0, blue =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                white++;
                nums[i]=0;
            }
            if(nums[i]==2)
            {
                blue++;
                nums[i]=0;
            } 
        }
        for(int i=nums.size()-blue-white;i<nums.size()-blue;i++)
        {
            nums[i]=1;
        }
        for(int i=nums.size()-blue;i<nums.size();i++)
        {
            nums[i]=2;
        }
    }
};