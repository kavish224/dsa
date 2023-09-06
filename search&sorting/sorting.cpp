#include<iostream>
using namespace std;
void selectsort(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n-1; i++)
    {
        int minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if (v[j]<v[minindex])
            {
                minindex=j;
            }    
        }
        swap(v[i],v[minindex]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n-1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (v[j]>v[j+1])
            {
                swapped = true;
                swap(v[j],v[j+1]);
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
void insertionsort(vector<int> v)
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int val = v[i];
        int j = i-1;
        for (;j >= 0; j--)
        {
            if (v[j]>val)
            {
                v[j+1]=v[j];
            }
            else
            {
                break;
            }    
        }
        v[j+1]=val;
    }
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
} 
int main()
{
    vector<int>  v{5,4,3,2,1};
    vector<int>  v1{10,1,7,6,14,9};
    vector<int>  v2{5,4,3,2,1};
    
    // selectsort(v);

    // bubblesort(v1);

    insertionsort(v2);

    return 0;

}