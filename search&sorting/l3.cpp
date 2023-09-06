#include<iostream>
using namespace std;
int binnearsort(vector<int> v,int target)
{
    int s = 0;
    int e = v.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if (v[mid]==target)
        {
            return mid;
        }
        else if (mid+1<e && v[mid+1]==target)
        {
            return mid+1;
        }
        else if (v[mid-1]>=s && v[mid-1]==target)
        {
            return mid-1;
        }
        else if (v[mid]<target)
        {
            e=mid-2;
        }
        else
        {
            s=mid+2;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int divideinbin(int dividend,int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int mid = s+(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (abs(mid*divisor)==dividend)
        {
            ans=mid;
        }
        else if (abs(mid*divisor)<=dividend)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    if (dividend<0&&divisor<0 || dividend>0&&divisor>0)
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int oddoccur(vector<int> v)
{
    int s = 0;
    int e = v.size()-1;
    int mid = s+(e-s)/2;
    while (s<=e)
    {
        if(s==e)
        {
            return s;
        }
        if (mid%2==0)
        {
            if (v[mid]==v[mid+1])
            {
                s=mid+2;
            }
            else
            {
                e=mid;
            }
        }
        else
        {
            if (v[mid]==v[mid-1])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    // //binary search in nearly sorted array
    // vector<int> v{10,3,40,20,50,80,70};
    // vector<int> v1{10,3,40,20,50,80,70};
    // int target = 40;
    // int ans1 = binnearsort(v,target);
    // cout<<ans1<<endl;

    // //divide using binary
    // int dividend = 22;
    // int divisor  = 7;
    // double step = 0.1;
    // int ans2 = divideinbin(dividend,divisor);
    // double finalans = ans2;
    // for (int i = 0; i < 3; i++)
    // {
    //     for(int j = finalans;j*divisor<=dividend;j+=step)
    //     {       
    //         finalans=j;
    //     }
    //     step=step/10;
    // }
    // cout<<finalans<<endl;

    // //find odd occuring element in array
    // vector<int> v3{1,1,2,2,3,3,4,4,3,600,600,4,4};
    // int ans3 = oddoccur(v3);
    // cout<<v3[ans3]<<endl;
    // return 0;
}