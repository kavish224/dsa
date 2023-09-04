#include<iostream>
using namespace std;
int main()
{
    /*int r;
    cin>>r;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col <r-row-1; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }*/
   
    /*int r;
    cin>>r;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col <r-row-1; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col <row; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < r-row; col++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }*/

    /*int r;
    cin>>r;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col <r-row-1; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col <row; col++)
        {
            cout<<"   ";
        }
        for (int col = 1; col < r-row; col++)
        {
            cout<<"  *  ";
        }
        cout<<endl;
    }*/

    /*int r;
    cin>>r;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col <r-row-1; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < 2*row+1; col++)
        {
        if (col==0)
        {
        cout<<"* ";
        }
        else if (col==2*row)
        {
        cout<<"* ";
        }
        else
        {
        cout<< "  ";
        }
        }
        cout<<endl;
    }
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < 2*r-2*row-1; col++)
        {
            if (col == 0 || col == 2*r-2*row-2)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }*/
    
    /*int r;
    cin>>r;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < r-row; col++)
        {
            cout<<"*";
        }
        for (int col = 0; col < 2*row+1; col++)
        {
            cout<<" ";
        }
        for (int col = 0; col < r-row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        for (int col = 0; col < 2*r-2*row-1; col++)
        {
            cout<<" ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }*/

    /*int r;
    cin>>r;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<row+1;
            if (col != row)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < r-row; col++)
        {
            cout<<r-row;
            if (col != r-row-1)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }*/
    
    /*int r;
    cin>>r;
    for (int row = 0; row < r; row++)
    {
        int col;
        for ( col = 0; col < row+1; col++)
        {
            int ans = col+1;
            char ch = ans + 'A' - 1;
            cout<< ch;
        }
        col=col-1;
        for (; col >= 1; col--)
        {
            int ans = col+1;
            char ch = ans + 'A' - 1;
            cout<< ch;
        }
        cout<<endl;
    }*/
    
    return 0;

}