class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) 
    {
        if(time.size()==0)
        return 0;
        int long long answer=1;
        int long long count =0;
        while(1)
        {
            for(int i=0;i<time.size();i++)
            {
                if(answer%time[i]==0)
                count++;
            }
            if((int)count>=totalTrips)
            break;
            answer++;
        }
        return answer;
    }
};