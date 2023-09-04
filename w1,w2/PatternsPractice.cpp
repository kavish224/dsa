#include<iostream>
using namespace std;
int main()
{
    // //solid rectangle
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 5; col++)
    //     {
    //         cout<<" *  ";
    //     }
    //     cout<<endl;
    // }

    // //hollow rectangle
    // for (int row = 0; row < 3; row++)
    // {
    //     if (row == 0 || row == 2)
    //     {
    //         for (int col = 0; col < 5; col++)
    //         {
    //             cout<<" *  ";
    //         }        
    //     }
    //     else
    //     {
    //         cout<<" *  ";
    //         for (int col = 0; col < 3; col++)
    //         {
    //             cout<<"    ";
    //         }
    //         cout<<" *  ";        
    //     }
    //     cout<<endl;
    // }
    
    // //half pyramid
    // int n;
    // cin>>n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout<<" *  ";
    //     }
    //     cout<<endl;
    // }

    //inverted half pyramid
    /*int n;
    cin>>n;
    for (int row = n; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }*/

    //numeric half pyramid
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<col+1;
        }
        cout<<endl;
    }*/
    
    //inverted numeric half pyramid
    /*int n;
    cin>>n;
    for (int row = n; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout<<col+1;
        }
        cout<<endl;
    }*/
    
    //full pyramid
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
       for (int col = 0; col < n-row+2; col++)
       {
        cout<<"  ";
       }
       for (int col = 0; col < row; col++)
       {
        cout<<" *  ";
       }
       cout<<endl;
    }*/
    
    //inverted full pyramid
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < n-row; col++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }*/

    //numeric full pyramid
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
       for (int col = 0; col < n-row-1; col++)
       {
        cout<<"  ";
       }
       for (int col = 0; col < row; col++)
       {
        cout<<" "<<col+1<<"  ";
       }
       cout<<endl;
    }*/

    //numeric hollow pyramid
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < row+1; col++)
        {
            if (col==0 || col==row || row==n-1)
            {
                cout<<" "<<col+1<<"  ";
            }
            else
            {
                cout<<"    ";
            }
            
        }
        cout<<endl;
    }*/
    //solid diamond
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < n-row; col++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }*/
    
    //hollow diamond
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < row+1; col++)
        {
            if (col==0 || col==row )
            {
                cout<<" *  ";
            }
            else
            {
                cout<<"    ";
            }
        }
        cout<<endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < n-row; col++)
        {
            if (col==0 || col==n-row-1)
            {
                cout<<" *  ";
            }
            else
            {
                cout<<"    ";
            }
        }
        cout<<endl;
    }*/
    
    //flipped solid diamond
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            cout<<" *  ";
        }
        for (int col = 0; col < row; col++)
        {
            cout<<"        ";
        }
        for (int col = 0; col < n-row; col++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<" *  ";
        }
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<"        ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }*/
    
    //numeric full pyramid
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<" "<<row+col+1<<"";
        }
        int start = 2*row;
        for (int col = 0; col < row; col++)
        {
            cout<<" "<<start;
            start = start-1;
        }
        cout<<endl;
    }*/

    //numeric palindrome equilateral pyramid
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<col+1<<" ";
        }
        for (int col = 0; col < row; col++)
        {
            cout<<row-col<<" ";
        }
        
        cout<<endl;
    }*/
    
    //solid half diamond
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }*/
    
    //fancy pattern 1
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        int startnumindex = 8-row;
        int num = row +1;
        int countnum = num;
        for (int col = 0; col < 17; col++)
        {
            if (col == startnumindex && countnum > 0)
            {
                cout<<""<<num<<" ";
                startnumindex+=2;
                countnum--;
            }
            else
            {
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }*/

    //fancy pattern 2
    /*int n;
    cin>>n;
    int a =1;
    for (int row = 0; row < n; row++)
    {
        
        for (int col = 0; col < row + 1; col++)
        {
            cout<<a;
            a++;
            if (col<row)
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    int start = a-n;
    for (int row = 0; row < n; row++)
    {
        int k = start;
        for (int col = 0; col < n-row; col++)
        {
            cout<<k;
            k++;
            if (col<n-row-1)
            {
                cout<<"*";
            }
        }
        start = start - (n - row - 1);
        cout<<endl;
    }*/

    //fancy pattern 3
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        int cond = row<=n/2 ? 2*row : 2*(n-row-1);
        for (int col = 0; col <= cond; col++)
        {
            if (col<=cond/2)
            {
                cout<<col+1;
            }
            else
            {
                cout<<cond-col+1;
            }
        }
        cout<<endl;
    }*/
    
    //floyd's triangle pattern
    /*int n;
    cin>>n;
    int a = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }*/

    //butterfly pattern
    /*int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        for (int col = 0; col < n-row; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/
    
    //pascal's triangle pattern
    /*int n;
    cin>>n;
    for (int row = 1; row <= n; row++)
    {
        int c = 1;
        for (int col = 1; col <= row; col++)
        {
            cout<<c<<" ";
            c = c *  (row - col) / col;
        }
        cout<<endl;
    }*/
    
    
    
    
    return 0;
    
}