#include<iostream>
#include<vector>
#include <set>
using namespace std;

void movenegativeleft(int *a,int l)
{
    int m=0,n=l-1;
    while(m<n)
    {
    if (a[m]<0)
    {
        m++;
    } 
    if (a[n]>=0)
    {
        n--;
    }
    else
    {
        swap(a[m],a[n]);
    }
    }
}

void printwavecol(vector<vector<int> >v)
{
    int n=v.size();
    int m=v[0].size();
    for (int i = 0; i < m; i++)
    {
        if((i & 1) == 0){
        for (int j = 0; j < n; j++)
        {
            cout<<v[j][i]<<",";
        }
        }
        else
        {
            for (int k = n-1; k >= 0; k--)
            {
               cout<<v[k][i]<<","; 
            }    
        }
    }   
}

void printwaverow(vector<vector<int> >v)
{
    int n=v.size();
    int m=v[0].size();
    for (int i = 0; i < n; i++)
    {
        if((i & 1)==0){
        for (int j = 0; j < m; j++)
        {
            cout<<v[i][j]<<",";
        }
        }
        else
        {
            for (int k = m-1; k >= 0; k--)
            {
                cout<<v[i][k]<<",";
            }
            
        }
    } 
    
}

void addinarr(int *a,int n, int *b,int m)
{
    int carry = 0;
    string ans;
    int i = n-1;
    int j = m-1;
    while(i>=0&&j>=0)
    {
       int x = a[i]+a[j]+carry;
       int digit = x%10;
       ans.push_back(digit + '0');
       carry = x/10;
       i--,j--;
    }
    while(i>=0)
    {
       int x = a[i]+0+carry;
       int digit = x%10;
       ans.push_back(digit + '0');
       carry = x/10;
       i--; 
    }
    while(j>=0)
    {
       int x = 0+a[j]+carry;
       int digit = x%10;
       ans.push_back(digit + '0');
       carry = x/10;
       j--;
    }
    if (carry)
    {
        ans.push_back(carry+'0');
    }
    while (ans[ans.size()-1]=='0')
    {
        ans.pop_back();
        carry = carry/10;
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    
}

void factorial(int n)
{
    vector<int>ans;
    ans.push_back(1);
    int carry = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int x = ans[j]*i+carry;
            ans[j] = x%10;
            carry = x/10;
        }
        while (carry!=0)
        {
            ans.push_back(carry%10);
            carry/=10;
        }
        
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    
}

void spiral(vector<vector<int> > matrix)
{
    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int tot = m*n;
    int startrow=0;
    int endcol=n-1;
    int endrow=m-1;
    int startcol=0;
    int count=0;
    while (count<tot)
    {
        for (int i = startcol; i <= endcol && count<tot; i++)
        {
            ans.push_back(matrix[startrow][i]);
            count++;
        }
        startrow++;
        for (int i = startrow; i <= endrow && count<tot; i++)
        {
            ans.push_back(matrix[i][endcol]);
            count++;
        }
        endcol--;
        for (int i = endcol; i >= startcol && count<tot; i--)
        {
            ans.push_back(matrix[endrow][i]);
            count++;
        }
        endrow--;
        for (int i = endrow; i >= startrow && count<tot; i--)
        {
            ans.push_back(matrix[i][startcol]);
            count++;
        }
        startcol++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    
}

void duplicate(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if (v[i]==v[j])
            {
                cout<<v[i];
            }    
        }
    }    
}

void miss(int *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]);
        if (a[index-1]>0)   
        {
            a[index - 1] *= -1;
        }    
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            cout<<i+1;
        }    
    }    
}

int repeat(int a[],int n)
{
    unordered_map<int,int>hash;
    for (int i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[a[i]]>1)
        {
            return i+1;
        }
    }
    return -1;
}

void common(int a[],int b[],int c[],int n1,int n2,int n3)
{
    int i,j,k;
    i=j=k=0;
    vector<int>ans;
    set<int>st;
    while (i<n1&&j<n2&&k<n3)
    {
        if (a[i]==b[j]&&b[j]==c[k])
        {
            st.insert(a[i]);
            i++,j++,k++;
        }
        else if (a[i]<b[j])
        {
            i++;
        }
        else if (b[j]<c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for(auto i:st)
    {
       ans.push_back(i);
    }
    for (int i = 0; i < ans.size(); i++)
    {
       cout<<ans[i]<<" ";
    }
}

int array1[] = {1200, 200, 2300, 1230, 1543};
int array2[] = {12, 14, 16, 18, 20};
int temp, result = 0;

int main()
{
    // //negative no. to one side
    // int a[12] = {1,2,0,-1,-2,0,-1,-2,0,1,2,0};
    // int start = 0;
    // int end = 11;
    // int i =0;
    // while (i!=end)
    // {
    //     if (a[i]>=0)
    //     {
    //         swap(a[start],a[i]);
    //         start++;
    //         i++;
    //     }
    //     else
    //     {
    //         swap(a[end],a[i]);
    //         end--;
    //     }
    // }
    // for(auto i:a)
    // {
    //     cout<<i<<" ";
    // }
    // //dutch national flag method
    // int a[6]={1,2,-3,4,-5,6};
    // int size = sizeof(a)/sizeof(int);
    // movenegativeleft(a,size);
    // for (auto i:a)
    // {
    //     cout<<i<<",";
    // }
    
    // //sort colors
    // int a[9] = {0,1,2,0,1,2,0,1,2};
    // int zero,one=0,two;
    // for (int i = 0; i < 9; i++)
    // {
    //     if (a[i]==0)
    //     {
    //         zero++;
    //     }
    //     if (a[i]==1)
    //     {
    //         one++;
    //     }
    //     if (a[i]==2)
    //     {
    //         two++;
    //     }
    // }
    // int i=0;
    // while (zero--)
    // {
    //     a[i] = 0;
    //     i++;
    // }
    // while (one--)
    // {
    //     a[i] = 1;
    //     i++;
    // }
    // while (two--)
    // {
    //     a[i] = 2;
    //     i++;
    // }
    // for(auto i:a)
    // {
    //     cout<<i;
    // }
    // // other method
    // int a[6] = {2,0,2,1,1,0};
    // int l=0,m=0,h=5;
    // while(m<=h)
    // {
    //     if (a[m]==0)
    //     {
    //         swap(a[l],a[m]);
    //         l++,m++;
    //     }
    //     else if (a[m]==1)
    //     {
    //        m++;
    //     }
    //     else
    //     {
    //         swap(a[m],a[h]);
    //         h--;
    //     }   
    // }
    // for(auto i:a)
    // {
    //     cout<<i;
    // }

    // //wave a matrix
    // vector<vector<int> >v{
    // {1,2,3,4},
    // {5,6,7,8},
    // {9,10,11,12}};
    // printwavecol(v);
    // cout<<endl;
    // printwaverow(v);
    // return 0;

    // //addition of arrays
    // int a[5] = {1,2,3,4,5};
    // int b[4] = {1,2,3,4};
    // int sizen = 5;
    // int sizem = 4;
    // addinarr(a,sizen,b,sizem);

    // //big factorial
    // int n=100;
    // factorial(n);
   
    // //spiral of a matrix
    // vector<vector<int> >  a{{1,2,3,4},
    //                         {5,6,7,8},
    //                         {9,10,11,12},
    //                         {13,14,15,16}};
    // spiral(a);
   
    // //duplicate
    // vector<int> k{1,2,2,3,3,3,3,4,5,6};
    // duplicate(k);

    // //missing element of an array
    // int n;
    // int a[] = {1,3,4,3,5};
    // n = sizeof(a)/sizeof(int);
    // cout<<n;  
    // miss(a,n);

    // //first repeating element
    // int a[7]={1,7,8,4,3,5,6};
    // int n = sizeof(a)/sizeof(int);
    // cout<<repeat(a,n);

    // //common element in three sorted array
    // int a[]={1,5,10,20,40,80};
    // int b[]={6,7,20,80,100};
    // int c[]={3,4,15,20,30,70,80,120};
    // int n1 = sizeof(a)/sizeof(int);
    // int n2 = sizeof(b)/sizeof(int);
    // int n3 = sizeof(c)/sizeof(int);
    // common(a,b,c,n1,n2,n3);

    

for (temp = 0; temp < 5; temp++) {
result += array1[temp];
}
for (temp = 0; temp < 4; temp++) {
result += array2[temp];
}
cout << result;

} 
