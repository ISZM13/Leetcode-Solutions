class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        int sum=0;
        vector<int> answer;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            answer.push_back(sum);
        }
        return answer;
    }
};