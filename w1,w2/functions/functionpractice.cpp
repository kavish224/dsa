#include<iostream>
using namespace std;
float circlearea(float radius)
{
    float area = 3.14*radius*radius;
    return area;
}
bool even_odd(int n)
{
    if (n % 2==0)
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
    for ( int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
   return fact; 
}
bool checkprime(int n)
{
    int i = 2;
    for (int i = 0; i < n; i++)
    {
        if (n % 2 ==0)
        {
            return false;
        }
        
        
    }
    return true;
}
int reverseinteger(int n)
{
    int ans = 0;
    bool isnegative = false;
    if (n<=INT_MIN)
    {
        return 0;
    }
    
    if (n<0)
    {
        isnegative = true;
        n = -n;
    }
    
    while (n>0)
    {
        if (ans>INT_MAX / 10)
        {
            return 0;
        }
        
        int digit = n%10;
        ans = ans*10 + digit;
        n = n/10;
    }
    return isnegative ? -ans : ans;
}
int setk(int n,int k)
{
    int mask = 1 << k;
    int ans = n | mask;
    return ans;
}
int main()
{
    //area of circle
    /*float radius;
    cin>>radius;
    float area = circlearea(radius);
    cout<<area;*/

    //even or odd
    /*int n;
    cin>>n;
    int check = even_odd(n);
    if (check)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }*/

    //factorial
    /*int n;
    cin>>n;
    int factorial = fact(n);
    cout<<factorial;*/

    //prime or not
    /*int n;
    cin>>n;
    int prime = checkprime(n);
    if (prime)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }*/

    //all prime from 1 to N
    // int n;
    // cin>>n;
    // for (int i = 1; i < n; i++)
    // {
    //     int isprime=checkprime(i);
    //     if (isprime)
    //     {
    //         cout<<i<<" ";
    //     }    
    // }

    //reverse integer
    /*int n;
    cin>>n;
    int reverse = reverseinteger(n);
    cout<<reverse;*/

    //set the kth bit
    /*int n,k;
    cin>>n;
    cin>>k;
    int set = setk(n,k);
    cout<<set;*/
    
    return 0;    

}