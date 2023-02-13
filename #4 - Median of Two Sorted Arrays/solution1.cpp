class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        double answer;
        int i=0;int j=0;
        int l= nums1.size() + nums2.size();
        if(l%2==0)
        {
            while(i!=nums1.size() || j!=nums2.size())
            {
                if(nums1[i]<nums2[j])
                {
                    i++;
                }
                else
                {
                    j++;
                }
                if(i+j==(l-1)/2)
                {
                    double sum=0;
                    for(int a=0;a<2;a++)
                    {
                        if(nums1[i]<nums2[j])
                        {
                            sum= sum + nums1[i];
                            i++;
                        }
                        else
                        {
                            sum =  sum + nums2[j];
                            j++;
                        }
                    }
                    answer=sum/2;
                    break;
                }
                   
            }
        }
        else
        {
            while(i!=nums1.size() || j!=nums2.size())
            {
                if(nums1[i]<nums2[j])
                {
                    i++;
                }
                else
                {
                    j++;
                }
                if(i+j==(l-1)/2)
                {
                    if(nums1[i]<nums2[j])
                    answer=nums1[i];
                    else
                    answer=nums2[j];
                    break;
                }
                   
            }
        }     
       return answer;
    }
};