class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) 
    {
        if(time.size()==0)
        return 0;
        int long long answer=0;
        int long long count =0;
        while(1)
        {
            count=(int)(answer/time[0]);
            for(int i=1;i<time.size();i++)
            {
                count+=(int)(answer/time[i]);
            }
            if((int)count>=totalTrips)
            break;
            answer++;
            count=0;
        }
        return answer;
    }
};