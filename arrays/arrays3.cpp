#include<iostream>
#include<vector>
using namespace std;
void printrowsum(int a[][3],int row ,int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum +a[i][j];
        }
        cout<<sum<<endl;
    }
}
void printcolumnsum(int a[][3],int row ,int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + a[j][i];
        }
        cout<<sum<<endl;
        sum = 0;
    }    
}
bool findkey(int a[][3],int rows,int col,int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (key == a[i][j])
            {
                return true;
            }
            
        }
        
    }
    return false;
}
int getmax(int a[][3],int rows,int col)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j]>maxi)
            {
                maxi=a[i][j];
            }
            
        }   
    }
    return maxi;
}
int getmin(int a[][3],int rows,int col)
{
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j]<mini)
            {
                mini=a[i][j];
            }
            
        }   
    }
    return mini;
}
void transpose(int a[][3],int row,int col,int tr[][3])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tr[j][i]=a[i][j];
        }
    }
}
void print(int a[][3],int r,int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }    
}
int main()
{
    // row sum col sum
    // int a[3][3] = {{1,2,3},{1,2,3},{1,2,3}},n;
    // cin>>n;
    int row =3;
    int col =3;
    // printrowsum(a,row,col);
    // printcolumnsum(a,row,col);
    // if(findkey(a,row,col,n))
    // {
    //     cout<<"true";
    // }
    // else
    // {
    //     cout<<"false";
    // }
    // cout<<getmax(a,row,col);
    // cout<<getmin(a,row,col);
    // print(a,row,col);
    // int tr[3][3];
    // transpose(a,row,col,tr);
    // print(tr,row,col);

    // vector<vector<int> >v1;//(row,vector<int>(col));
    // vector<int> a{1,2,3};
    // vector<int> b{1,2,3};
    // vector<int> c{1,2,3};
    // v1.push_back(a);
    // v1.push_back(b);
    // v1.push_back(c);
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     for (int j = 0; j < v1[0].size(); j++)
    //     {
    //         cout<<v1[i][j];
    //     }
    //     cout<<endl;
    // }
    
    
    

    
}