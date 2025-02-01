class Solution {
public:
    bool isValid(string s)
    {
        unordered_map<char,int> umap;
        umap['(']=1;
        umap[')']=-1;
        umap['{']=2;
        umap['}']=-2;
        umap['[']=3;
        umap[']']=-3;
        stack<char> paudi;
        paudi.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(paudi.empty())
            {
                paudi.push(s[i]);
                continue;
            }
                if(umap[s[i]]+umap[paudi.top()]==0 && umap[s[i]]<0)
            paudi.pop();
            else
            paudi.push(s[i]);
        }
        // cout<<paudi.top();
        return paudi.empty();
    }
};