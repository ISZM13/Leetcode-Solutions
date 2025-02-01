class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> answer;         
        unordered_map<int, int> umap;
        umap[nums[0]]=0;
        for(int i=1;i<nums.size();i++)
        {
            int val=target-nums[i];
            if(!(umap.find(val)==umap.end()))
            {
                answer.push_back(umap[target-nums[i]]);
                answer.push_back(i);
                break;
            }
            else
            umap[nums[i]]=i;
        }
        return answer;
    }
};