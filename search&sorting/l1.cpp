#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int binarysearch(int a[],int size,int target)
{
  int start = 0;
  int end = size - 1;
  int mid = (start + (end-start))/2;
  while(start<=end)
  {
  if (a[mid]==target)
  {
    return mid;
  }
  else if(a[mid]<target)
  {
    start = mid+1;
  }
  else
  {
    end = mid - 1;
  }
    mid = (start + end)/2;
  }
  return -1;
}
int firstOcc(vector<int> arr, int target) 
{
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;
  int ans = -1;

  while(s <= e) 
  {
  if(arr[mid] == target) 
  {
    //ans store
    ans = mid;
    //left search
    e = mid - 1;
  }
  else if(target < arr[mid] ) 
  {
    //left me search
    e = mid - 1;
  }
  else if(target > arr[mid] ) 
  {
    //right search
    s = mid + 1;
  }
    mid = s + (e-s)/2;
  }
  return ans;
}
int lastOccu(vector<int> arr,int target)
{
  int s = 0;
  int e = arr.size()-1;
  int mid = s + (e-s)/2;
  int ans = -1;
  while (s<=e)
  {
    if(arr[mid]==target)
    {
      ans=mid;
      s = mid+1;
    }
    else if(arr[mid]>target)
    {
      e=mid-1;
    }
    else if(arr[mid]<target)
    {
      s=mid+1;
    }
    mid = s+(e-s)/2;
  }
  return ans;
}
int searchtheno(vector<int> v,int key)
{
  int s = 0;
  int e = v.size() - 1;
  int mid = s + (e-s)/2;
  int ans = -1;
  while (s<=e)
  {
    if (v[mid]==key)
    {
      ans=mid;
      return ans;
    }
    else if (v[mid]>key)
    {
      e=mid - 1;
    }
    else
    {
      s=mid+1;
    }
    mid = s+(e-s)/2;
  }
  return ans;
}
int sqrroot(int t)
{
  int n = t;
  int s = 0;
  int e = t;
  int mid = s+(e-s)/2;
  int ans=-1;
  while (s<=e)
  {
    if (mid*mid==n)
    {
      return mid;
    }
    else if (mid*mid<n)
    {
      ans=mid;
      s=mid+1;
    }
    else
    {
      e=mid-1;
    }
    mid = s+(e-s)/2;
  }
  return ans;
}
int main()
{
  // //binary search
  // int k[8]={1,3,7,9,11,13,15,19};
  // int t = 19;
  // int n = 8;
  // int searchindex=binarysearch(k,n,t);
  // if (searchindex == -1)
  // {
  //     cout<<"not found"<<endl;
  // }
  // else
  // {
  //     cout<<searchindex<<endl;
  // }
  
  // //stl(preloaded)
  // vector<int>v{1,3,7,9,11,13,15,19};
  // if (binary_search(v.begin(),v.end(),11))
  // {
  //     cout<<"found"<<endl;
  // }
    
  // //first occurence
  // vector<int> v{1,3,3,3,3,3,3,4,4,4,4,6,7};
  // int target = 3;
  // int ans1 = firstOcc(v,target);
  // cout<<"1 "<<ans1<<endl;
  // auto ans2 = lower_bound(v.begin(),v.end(),target);
  // cout<<"2 "<<ans2-v.begin()<<endl;
  
  // //last occurence
  // vector<int> v1{1,3,3,3,3,3,3,4,4,4,4,6,7};
  // int trgt = 3;
  // int ans3 = lastOccu(v,target);
  // cout<<"3 "<<ans3<<endl;
  // auto ans4 =upper_bound(v.begin(),v.end(),target);
  // cout<<"4 "<<ans4-v.begin()-1<<endl;

  // //no. of occ
  // int anso = ans3 - ans1 + 1;
  // cout<<anso<<endl;

  // //searchinbinary
  // int k = 1;
  // int ans = searchtheno(v,k);
  // cout<<ans<<endl;

  // //sqrroot
  // int num = 10;
  // int ans = sqrroot(num);
  // cout<<ans<<endl;
  // int precision = 3;
  // double step = 0.1;
  // double finalans = ans;
  // for (int i = 0; i < precision; i++)
  // {
  //   for (double j = 0; j*j<=num; j=j+step)
  //   {
  //     finalans=j;
  //   }
  //   step=step/10;
  // }
  // cout<<finalans+0.001<<endl;
  

  return 0;
}