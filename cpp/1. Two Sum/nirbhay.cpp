class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int left=0, right =nums.size()-1;
        vector<int> answer;
        while(left<right)
        {
            if(nums[left]+nums[right]==target)
            {
                answer.push_back(nums[left]);
                answer.push_back(nums[right]);
                left++;
                right--;
            }
            else if(nums[left]+nums[right]>target)
            {   
                right--;
            }
            else
            {
                left++;
            }
        }
       return answer; 
    }
};