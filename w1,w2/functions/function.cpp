#include<iostream>
using namespace std;
float circle_area(float radius)
{
    float area = 3.14*radius*radius;
    return area;
}
bool checkevent(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
bool checkprime(int n)
{
    int i=2;
    for (int i = 2; i < n; i++)
    {
        if (n % i==0)
        {
            return false;   
        }
    }
    return true;
}    
int main()
{
    //area of circle
    /*float radius;
    cin>>radius;
    float area = circle_area(radius);
    cout<<area<<endl;*/

    //even or odd
    /*int n;
    cin>>n;
    bool iseven = checkevent(n);
    if (iseven)
    {
        cout<<n<<" is even";
    }
    else
    {
        cout<<n<<" is odd";
    }*/
    
    //find the factorial
    /*int n;
    cin>>n;
    int factorial = fact(n);
    cout<<"factorial of "<<n<<"is "<<factorial;*/

    //prime or not
    /*int n;
    cin>>n;
    bool isprime = checkprime(n);
    if (isprime)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }*/

    //all prime no. from 1 to n
    /*int n;
    cin>>n;
    for (int i = 2; i <= n; i++)
    {
        int isprime=checkprime(i);
        if (isprime)
        {
            cout<<i<<" ";
        }
        
    }*/
    
    //




}