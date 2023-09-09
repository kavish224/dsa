#include<iostream>
using namespace std;
int getlength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
}
void reverse(char name[])
{
    int i=0;
    int n = getlength(name);
    int j = n-1;
    while (i<=j)
    {
        swap(name[i],name[j]);
        i++;
        j--;
    }
    cout<<name;
}
void replacespace(char name[ ])
{
    int i=0;
    int n = getlength(name);
    for (int i = 0; i < n; i++)
    {
        if (name[i] == ' ')
        {
            name[i]='@';
        }
    }
    cout<<name;
}
bool palindrome(string name,int l,int m)
{
    int i=l;
    int n = m;
    int j = n-1;
    while (i<j)
    {
        if (name[i]==name[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
        
    }
    return true;
}
void uppercase(char name[])
{
    int n = getlength(name);
    
    for (int i = 0; i < n; i++)
    {
        if(name[i]>='a'&&name[i]<='z')
        {
            name[i]=name[i]-'a'+'A';
        }
    }
    cout<<name;
}
bool compare(string a,string b)
{
    if (a.length()!=b.length())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            if(a[i]!=b[i])
            {
                return false;
            }
        }
    }
    return true;
}
string removeduplicate(string a)
{
    string ans = "";
    int i = 0;
    while (i<a.length())
    {
        if (ans.length()>0)
        {
            if (ans[ans.length()-1]==a[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(a[i]);
            }
        }
        else
        {
            ans.push_back(a[i]);
        }
        i++;
    }
    return ans;
}
string removeoccurence(string s,string p)
{
    int pos = s.find(p);
    while (pos!=string::npos)
    {
        s.erase(pos,p.length());
        pos=s.find(p);
    }
    return s;
}
bool validpalindrome(string s)
{
    int i = 0;
    int j = s.length()-1;
    while (i<=j)
    {
        if(s[i]!=s[j])
        {
            return palindrome(s,i+1,j)||palindrome(s,i,j-1);
        }
        else
        {
            i++;j--;
        }  
    }
    return true;
}
int mindiff(vector<string>& timepoints)
{
    vector<int> minute;
    for (int i = 0; i < timepoints.size(); i++)
    {
        string curr = timepoints[i];
        int hour = stoi(curr.substr(0,2));
        int min = stoi(curr.substr(3,2));
        int totalmin = hour*60+min;
        minute.push_back(totalmin);
    }
    sort(minute.begin(),minute.end());
    int mini = INT_MAX;
    for (int i = 0; i < minute.size()-1; i++)
    {
        int diff = minute[i+1]-minute[i];
        mini = min(mini,diff);
    }
    int lastdiff1 = (minute[0]+1440)-minute[minute.size()-1];
    int lastdiff2 = minute[minute.size()-1]-minute[0];
    int lastdiff = min(lastdiff1,lastdiff2);
    mini = min(mini,lastdiff);
    return mini;
}
void printsubstr(string s)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j <= 3; j++)
        {
            cout<<s.substr(i,j)<<endl;
        }
    }
}
int expandaroundindex(string s,int i,int j)
{
    int count = 0;
    while (i>=0&&j<s.length()&&s[i]==s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}
int countpalinsubstr(string s)
{
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        int oddans=expandaroundindex(s,i,i);
        count=count+oddans;
        int evenans=expandaroundindex(s,i,i+1);
        count=count+evenans;
    }
    return count;
}
bool cmp(char a,char b)
{
    return a>b;
}
int main()
{
    // //lecture 1
    // char name[100]="kavish";
    // string nam = "kavish";
    // //cin>>name;
    // //cin.getline(name,50);
    // cout<<name<<endl;
    // cout<<getlength(name)<<endl;
    // cout<<strlen(name)<<endl;
    // reverse(name);
    // cout<<endl;
    // replacespace(name);
    // cout<<endl;
    // cout<<palindrome(nam,0,nam.length());
    // cout<<endl;
    // uppercase(name);
    // cout<<endl;
    // string str;
    // //cin>>str;
    // getline(cin,str);
    // cout<<str<<endl;
    // string a="kavish";
    // string b="kavish1";
    // cout<<compare(a,b)<<endl;

    // //lecture 2
    // string c = "abbaca";
    // cout<<removeduplicate(c)<<endl;
    // string d = "daabcbaabcbc";
    // string part = "abc";
    // cout<<removeoccurence(d,part)<<endl;
    // string e = "aba";
    // cout<<validpalindrome(e)<<endl;
    // vector<string> f {"23:59","00:00"};
    // cout<<mindiff(f)<<endl;
    // string g = "abc";
    // printsubstr(g);
    // string h = "abc";
    // cout<<countpalinsubstr(h)<<endl;

    //connect
    string i = "kavish";
    sort(i.begin(),i.end(),cmp);
    cout<<i<<endl;
    //help ramu leetcode
    string str;
    return 0;    
}
