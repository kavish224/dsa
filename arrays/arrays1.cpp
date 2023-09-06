#include<iostream>
using namespace std;
bool find(int a[],int size,int k)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i]==k)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    // int a[53];
    // char b[53];
    // bool c[53];
    // cout<<&a;
    // int d[10] = {1,2,3,4,5};
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<d[i];
    // }
    
    // int e[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>e[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<2*e[i];
    // }
    
    // char a[10];
    // memset(a,'t',sizeof(a));
    // cout<<a;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    // int a[10],k;
    // for (int i = 0; i < 10; i++)
    // {
    //     cin>>a[i];
    // }
    // cout<<endl;
    // cin>>k;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (a[i]==k)
    //     {
    //         cout<<"yes";
    //         cout<<endl; 
    //         cout<<i;
    //     }    
    // }
    
    // int a[500];
    // int size,k;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>a[i];
    // }
    // cin>>k;
    // if (find(a,size,k))
    // {
    //     cout<<"yes";
    // }
    // else
    // {
    //     cout<<"no";
    // }

    // int a[10] = {10,20,30,40,50,60,70,80,90,100};
    // int size = 10;
    // int start = 0;
    // int end = size-1;
    // while (true)
    // {
    //     if(start>end)
    //     {
    //     break;
    //     }
    //     cout<<a[start]<<" ";
    //     cout<<a[end]<<" ";
    //     start++;
    //     end--;
    // }

    //implement swap
    // int a[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     cin>>a[i];
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<a[i];
    // }
    // cout<<endl;
    // int temp=0;
    // temp = a[2];
    // a[2] = a[4];
    // a[4] = temp;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<a[i];
    // }
    

    
    



    return 0;
}