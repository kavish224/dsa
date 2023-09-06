#include<iostream>
using namespace std;
int pivot(vector<int> v)
{
    if (v.size()==1)
    {
        return 0;
    }
    int s = 0;
    int e = v.size()-1;
    int mid = s+(e-s)/2;
    while (s<=e)
    {
        if (s==e)
        {
            return s;
        }
        if (mid+1<v.size() && v[mid]>v[mid+1])
        {
            return mid; 
        }
        if (mid-1>=0 && v[mid-1]>v[mid])
        {
            return mid-1;
        }
        if (v[s]>=v[mid])
        {
            e = mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid = s+ (e-s)/2;
    }
    return -1;
}
int binarysearch(vector<int> v,int element,int k,int l)
{
    int s = k;
    int e = l;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (v[mid]==element)
        {
            ans=mid;
            break;
        }
        else if (v[mid]<element)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int search(vector<int>& v, int element)
{
   int pivotindex=pivot(v);
   if (element>=v[0]&&element<=v[pivotindex])
    {
        int ans = binarysearch(v,element,0,pivotindex);
        return ans;
    }
    if (pivotindex+1<v.size() && element<=v[pivotindex+1]&&element<=v[v.size()-1])
    {
        int ans = binarysearch(v,element,pivotindex+1,v.size()-1);
        return ans;
    }
    return -1;
}
bool binarymatrix(int arr[][4],int element, int rows,int col)
{
    int s = 0;
    int e = rows*col -1;
    int mid = s+(e-s)/2;
    while (s<=e)
    {
        int rowindex = mid/col;
        int colindex = mid%col;
        if (arr[rowindex][colindex]==element)   
        {
            return true;
        }
        else if (arr[rowindex][colindex]<element)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}
int main()
{
    // vector<int> v{3,4,5,6,7,1,2};
    // vector<int> v1{1,3,7,9,11,13,15,19};
    // vector<int> v2{5};
    // vector<int> v3{7,7,7,7,7,7,1,2};
    // int ans = binarysearch(v1,7,0,v1.size()-1);
    // cout<<ans<<endl;
    // int ans = pivot(v);
    // cout<<ans<<endl;
    // int ans3 = search(v,5);
    // cout<<ans3<<endl;
    // int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    // int r =5;
    // int c =4;
    // int t =17;
    // bool ans4 = binarymatrix(arr,t,r,c);
    // if (ans4)
    // {
    //     cout<<"found"<<endl;
    // }
    // else
    // {
    //     cout<<"notfound"<<endl;
    // }
    
}