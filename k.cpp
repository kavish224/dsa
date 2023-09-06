#include<iostream>
using namespace std;
void selectsort(vector<int> v)
{
    for (int i = 0; i < v.size()-1; i++)
    {
        int minindex = i;
        for (int j = i+1; j < v.size(); j++)
        {
            if (v[j]<v[minindex])
            {
                minindex=j;
            }
        }
        swap(v[i],v[minindex]);
    }
    for(auto i : v)
    {
        cout<<i<<" ";
    }
}
void bubblesort(vector<int> v)
{
    for (int i = 0; i < v.size()-1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < v.size()-i-1; j++)
        {
            if (v[j+1]<v[j])
            {
                swapped=true;
                swap(v[j],v[j+1]);
            }
        }
        if (swapped==false)
        {
            break;
        }
    }
    for(auto i : v)
    {
        cout<<i<<" ";
    }
}
void insertion(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int val = v[i];
        int j = i-1;
        for (; j >= 0; j--)
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
}
int main()
{
    vector<int> v{5,4,3,2,1};
    selectsort(v);
    cout<<endl;
    bubblesort(v);
    cout<<endl;
    insertion(v);
    cout<<endl;
    
}