#include<iostream>
#include<vector>
using namespace std;
int findunique(vector<int> a)
{
    int ans=0;
    for (int i = 0; i < a.size(); i++)
    {
        ans=ans^a[i];
    }
    return ans;
}
int main()
{
    // vector<int>a;
    // cout<<a.size()<<endl;
    // cout<<a.capacity()<<endl;
    //int ans = (sizeof(a)/sizeof(int));
    //cout<<ans;
    //insert
    // a.push_back(5);
    // a.push_back(6);
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout<<a[i];
    // }
    
    // vector<int> b;
    // for (int i = 0; i < b.size(); i++)
    // {
    //     cout<<b[i];
    // }
    // cout<<b.size()<<endl;
    // cout<<b.capacity()<<endl;

    //unique element
    // int n;
    // cin>>n;
    // vector<int> c(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>c[i];
    // }
    // int uniqueelem=findunique(c);
    // cout<<uniqueelem<<endl;

    // int d[] = {2,4,6,8};
    // int e[] = {1,3,7};
    // vector<int>f;
    // for (int i = 0; i < 4; i++)
    // {
    //     f.push_back(d[i]);
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     f.push_back(e[i]);
    // }
    // for (auto i : f)
    // {
    //     cout<<i;
    // }
    
    // //pair sum
    // vector<int> jrr{10,20,40,60,70};
    // int sum =80;
    // for (int i = 0; i < jrr.size(); i++)
    // {
    //     int element=jrr[i];       
    //     for (int a = i+1; a <jrr.size() ; a++)
    //     {
    //         if (element +jrr[a] == sum)
    //         {
    //             cout<<"("<<element<<","<<jrr[a]<<")"<<endl;
    //         }            
    //     }    
    // }

    // pair sum triplet
    // vector<int> jrr(5)/*{10,20,40,60,70}*/;
    // for(int i = 0;i < 5;i++)
    // {
    //     cin>>jrr[i];
    // }
    // int sum =70;
    // for (int i = 0; i < jrr.size(); i++)
    // {
    //     int element=jrr[i];
    //     for(int b =i+1;b<jrr.size();b++)
    //     {
    //         int element2=jrr[b];
    //         for (int a = b+1; a <jrr.size() ; a++)
    //         {
    //             if (element + element2 + jrr[a] == sum)
    //             {
    //                 cout<<"("<<element<<","<<element2<<","<<jrr[a]<<")"<<endl;
    //             }            
    //         }
    //     }
    // }

    // //sort 0 & 1
    // vector<int> v1{0,1,0,1,1,0,1,0,1,1};
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout<<v1[i];
    // }
    // cout<<endl;
    // int i=0;
    // int start = 0;
    // int end = v1.size()-1;
    // while (i!=end)
    // {
    //     if (v1[i]==0)
    //     {
    //        swap(v1[start],v1[i]);
    //        start++;
    //        i++;
    //     }
    //     else
    //     {
    //         swap(v1[end],v1[i]);
    //         end--; 
    //     }   
    // }
    // for(auto i:v1)
    // {
    //     cout<<i;
    // }

   


}