#include<iostream>
using namespace std; 
int main()
{
    //solid rectangle
    /*for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }*/
    
   //hollow rectangle
   /*for (int row = 0; row < 3; row++)
   {
    if (row == 0 || row == 2)
    {
        for (int col = 0; col < 5; col++)
        {
            cout<< "* ";
        }
        
    }
    else
    {
        cout<<"* ";
        for (int col = 0; col < 5; col++)
        {
            cout<<" ";
        }
        cout<<" *";
    }

    cout<< endl;
   }*/

   //half pyramid
   /*int r;
   cin>>r;
   for (int i = 0; i < r; i++)
   {
    for (int k = 0; k < i+1; k++)
    {
        cout<< "* ";
    }
    cout<< endl;
   }*/

   //inverted half pyramid
   /*int r;
   cin>>r;
   for (int row = 0; row < r; row++)
   {
    for (int col = 0; col < r-row; col++)
    {
        cout<<"* ";
    }
    cout<<endl;
   }*/

   //numeric half pyramid
   /*int r;
   cin>>r;
   for (int i = 0; i < r; i++)
   {
    for (int k = 0; k < i+1; k++)
    {
        cout<< k+1;
    }
    cout<< endl;
   }*/

   //numeric inverted half pyramid
   /*int r;
   cin>>r;
   for (int row = 0; row < r; row++)
   {
    for (int col = 0; col < r-row; col++)
    {
        cout<<col+1;
    }
    cout<<endl;
   }*/

   //full pyramid
   /*int r;
   cin>>r;
    
   for (int row = 0; row < r; row++)
   {
    for (int col = 0; col < r-row-1; col++)
    {
        cout<<"  ";
    }
    for (int col = 0; col < row+1; col++)
    {
        cout<<" *  ";
    }
    cout<<endl;
   
   }*/
  
   //inverted full pyramid
   /*int r;
   cin>>r;
   for (int row = 0; row < r; row++)
   {
    for (int col = 0; col < row; col++)
    {
        cout<<"  ";
    }
    for (int col = 0; col < r-row; col++)
    {
        cout<<" *  ";
    }
    cout<<endl;
   }*/
   
   //numeric full pyramid
   /*int r;
   cin>>r;
   for (int row = 0; row < r; row++)
   {
    for (int col = 0; col < r-row-1; col++)
    {
        cout<<"  ";
    }
    for (int col = 0; col < row+1; col++)
    {
        cout<< " "<<col+1<<"  ";
    }
    cout<<endl;
   }*/

   //numeric half hollow pyramid
   /*int r;
   cin>>r;
   for (int row = 0; row < r; row++)
   {
    for (int col = 0; col < row+1; col++)
    {
        if (col==0||col==row||row==r-1)
        {
            cout<<col+1;
        }
        else
        {
            cout<<" ";
        }
        
    }
    cout<<endl;
   }*/
   
   //solid diamond
   /*int r;
   cin>>r;
   for (int row = 0; row < r; row++)
   {
    for (int col = 0; col < r-row-1; col++)
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
    for (int col = 0; col < row; col++)
    {
        cout<<"  ";
    }
    for (int col = 0; col < r-row; col++)
    {
        cout<<" *  ";
    }
    cout<<endl;
   }*/

   //hollow diamond
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

    //flipped solid diamond
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

    //hollow inverted half pyramid
    /*int r;
    cin>>r;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < r-row; col++)
        {
            if (row==0||row==r-1||col==0||col==2*row-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }*/
    //hollow pyramid
    /*int r;
    cin>>r;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < r-row-1; col++)
        {
            cout<<" ";
        }
        for (int col = 0; col < row+1; col++)
        {
            if (row==0||row==r-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"* ";
                for (int col = 0; col < 2*row-2; col++)
                {
                    cout<<" ";
                }
                cout<<"* "; 
            }
            
        }
        cout<<endl;
    }*/
    
    //numeric hollow half pyramid
    /*int r;
    cin>>r;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            if(row==0||row==r-1||col==row||col==0)
            {
            cout<<" "<<col+1<<" ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }*/

    //numeric hollow inverted half pyramid
    //solid half diamond

    //fancy pattern #1
    

    
    


    
    
}