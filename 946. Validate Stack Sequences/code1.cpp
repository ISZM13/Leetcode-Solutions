class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        bool answer = true;
        unordered_map<int, int > umap;
        for(int i=0;i<pushed.size();i++)
        {
            umap[pushed[i]]=1;
        }
        for(int i=0;i<pushed.size();i++)
        {
            if(umap[popped[i]]==1)
            {
                umap[popped[i]]=0;
            }
            else
            {
                answer = false;
                break;
            }
        }
        return answer;
    }
};