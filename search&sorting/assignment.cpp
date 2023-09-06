#include<iostream>
#include<set>
#include<vector>
#include<numeric>
using namespace std;
int binarysearch(vector<int> &a,int k,int l,int target)
{
  int start = k;
  int end = l;
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
  int ans = e;

  while(s <= e) 
  {
  if(arr[mid] >= target) 
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
void findpairs(vector<int> v,int k)
{
    //2 pair approach
    sort(v.begin(),v.end());
    set<pair<int,int>> ans1;
    int i=0,j=1;
    while (j<v.size())
    {
        int diff = v[j]-v[i];
        if (diff==k)
        {
            ans1.insert({v[j],v[i]});
            i++,j++;
        }
        else if (diff>k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if (i==j) j++;
    }
    cout<<ans1.size();
    cout<<endl;
    //binary search approach
    set<pair<int,int>> ans2;
    for (int i = 0; i < v.size(); i++)
    {
        if (binarysearch(v,i+1,v.size()-1,v[i]+k) != -1)
        {
            ans2.insert({v[i],v[i]+k});
        }
    }
    cout<<ans2.size();
}
void closestelement(vector<int>& v,int x,int k)
{
    //2 pointer method
    //top to bottom approach
    int l = 0;
    int h = v.size()-1;
    while(h-l>=k)
    { 
        if (x-v[l]>v[h]-x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    for (int i = l; i < h+1; i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}
vector<int> closele(vector<int>& v,int x,int k)
{
    //bottom to top approach
    int H = firstOcc(v,x);
    int L = H-1;
    while(k--)
    {
        if(L<H)
        {
            H++;
        }
        else if (H>=v.size())
        {
            L--;
        }
        else if (x-v[L]>v[H]-x)
        {
            H++;
        }
        else
        {
            L--;
        }
    }
    return vector<int>(v.begin()+L+1,v.begin()+H+1);
}
int exposearch(vector<int> v,int x)
{
    if (v[0]==x)
    {
        return 0;
    }
    int i=1;
    int k = v.size();
    while (i<k && v[i]<=x)
    {
        i = i * 2;
    }
    return binarysearch(v, i/2 ,min(i,k-1),x);
}
bool ispossiblesolution(int a[],int n,int m,int sol)
{
    int pagesum = 0;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if(pagesum+a[i]<=sol)
        {
            pagesum +=a[i];
        }
        else
        {
            c++;
            if (c>m||a[i]>sol)
            {
                return false;
            }
            pagesum = a[i];
        }
    }    
    return true;
}
int bookallo(int v[],int n,int m)
{
    if (m>n)
    {
        return -1;
    }
    int s = 0;
    int e = accumulate(v,v+n,0);
    int ans = INT_MAX;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if (ispossiblesolution(v,n,m,mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
//int painterpartition()
int aggresivecows(vector<int> &v,int k)
{

}
bool isposs(vector<long long int> v,long long int m,long long int mid)
{
    long long woodcollected = 0;
    for (long long int i = 0; i < v.size(); i++)
    {
        if (v[i]>mid)
        {
            woodcollected = woodcollected + v[i]-mid;
        }
        
    }
    return woodcollected >= m; 
}
long long int maxsawbladeheight(vector<long long int> v,long long int m)
{
    long long int start = 0,end,ans = -1;
    end = *max_element(v.begin(),v.end());
    while (start<=end)
    {
        long long int mid = start+(end-start)/2;
        if (isposs(v,m,mid))
        {
            ans = mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}
bool isposs(vector<int> v,int p ,int mid)
{
    int currp = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int r = v[i],j=1;
        int time = 0;
        while (true)
        {
            if (time+j*r<=mid)
            {
                ++currp;
                time += j*r;
                ++j;
            }
            else
            {
                break;
            }
        }
        if(currp>=p)
        {
            return true;
        }
    }
    return false;
}
int mintime(vector<int> v,int p)
{
    int s = 0;
    int h = *max_element(v.begin(),v.end());
    int e = h*(p*(p+1)/2);
    int ans = -1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if (isposs(v,p,mid))
        {
            ans=mid;
            e = mid -1;
        }
        else
        {
            s=mid+1;
        }
        
    }
    return ans;
}
int main()
{
    // //k diff pair in array
    // vector<int> v{3,1,4,1,5};
    // findpairs(v,2);

    // //find k closest element
    // vector<int> v{1,2,3,4,5,6};
    // vector<int> a;
    // closestelement(v,6,3);  
    // cout<<endl;
    // closele(v,6,3);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i];
    // }
    
    // //Exponential Search
    // vector<int> v{3,4,5,6,11,12,14,15,56,70};
    // int ans = exposearch(v,6);
    // cout<<ans<<endl;

    //unbounded search
    //same as expo

    // //book allocation
    // int v[4]={10,20,30,40};
    // int ans = bookallo(v,4,2);
    // cout<<ans<<endl;

    //painters partition
    
    //aggresive cow

    // //EKO spoj
    // vector<long long int> v{20,15,10,17};
    // cout<<maxsawbladeheight(v,7); 

    // //PRATA spoj
    // int p = 10;
    // vector<int>cookrank{1,2,3,4};
    // cout<<mintime(cookrank,p);

}