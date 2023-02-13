class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int ans=0;
        for(int i=0;i<accounts.size();i++)
        {
            int newans=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                newans+=accounts[i][j];
            }
            if(newans>ans)
            ans=newans;
        }
    return ans;
    }
};