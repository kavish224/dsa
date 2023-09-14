#include<iostream>
#include<map>
using namespace std;
bool isAnagram(string s, string t) 
{
    if(s.length()!=t.length())
    {
        return false;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i = 0;i<s.length();i++)
    {
        if(s[i]!=t[i])
        {
            return false;
        }
    }
    return true;
}
bool isAnagram1(string s, string t) 
{
        if(s.length()!=t.length())
        {
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        {
            return true;
        }
        else
        {
            return false;
        }
}
string reverseOnlyLetters(string s) 
{
        int l = 0,h = s.length()-1;
        while(l<h)
        {
            if(isalpha(s[l])&&isalpha(s[h]))
            {
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(!isalpha(s[l]))
            {
                l++;
            }
            else
            {
                h--;
            }
        }
        return s;
}
string longestCommonPrefix(vector<string>& strs) 
{
    string ans;
    int i = 0;
    while(true)
    {
        char curr_ch=0;
        for(auto str : strs)
        {
            if(i>=str.size())
            {
                curr_ch=0;
                break;
            }
            if(curr_ch==0)
            {
                curr_ch=str[i];
                
            }
            else if(str[i]!=curr_ch)
            {
                curr_ch=0;
                break;
            }
        }
        if(curr_ch==0)
        {
            break;
        }
        ans.push_back(curr_ch);
        i++;
    }     
    return ans;
}
bool isvowel(char a)
{
    a=tolower(a);
    return a == 'a'||a == 'e'||a == 'i'||a == 'o'|| a == 'u';
}
string reverseVowels(string s) 
{
    int l = 0,h=s.length()-1;
    while(l<h)
    {
        if(isvowel(s[l])&&isvowel(s[h]))
        {
            swap(s[l],s[h]);
            l++,h--;
        }
        else if(!isvowel(s[l]))
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    return s;
}
bool isIsomorphic(string s, string t) 
{
    if(s.length()!=t.length())
    {
        return false;
    }
    return true;
}
string reorganizeString(string s) 
{
   int hash[26] = {0};
   for(int i = 0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    } 
    char max_freq;
    int max_fre=INT_MIN;
    for(int i =  0;i<26;i++)
    {
        if(hash[i]>max_fre)
        {
            max_fre=hash[i];
            max_freq=i+'a';
        }
    }
    int index = 0;
    while(max_fre>0&&index<s.size())
    {
        s[index]=max_freq;
        max_fre--;
        index+=2;
    }
    if(max_fre!=0)
    {
        return "";
    }
    hash[max_freq-'a']=0;
    for(int i =0;i<26;i++)
    {
        while(hash[i]>0)
        {
            index=index>=s.size()?1:index;
            s[index]=i+'a';
            hash[i]--;
            index+=2;
        }
    }
    return s;
}
vector<vector<string>> groupAnagra(vector<string>& strs) 
{
    map<string,vector<string> >mp;
    for(auto str:strs)
    {
        string s = str;
        sort(s.begin(),s.end());
        mp[s].push_back(str);
    }
    vector<vector<string>>ans;
    for(auto it = mp.begin();it!=mp.end();it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}
bool ispalindrome(string&s,int st,int e)
{
    while(st<e)
    {
        if(s[st]!=s[e])
        {
            return false;
        }
        st++,e--;
    }
    return true;
}
string longestPalindrome(string s)
{
    string ans = "";
    for(int i = 0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
            if(ispalindrome(s,i,j))
            {
                string t = s.substr(i,j-i+1);
                ans=t.size()>ans.size()?t:ans;
            }
        } 
    }  
    return ans;  
}
int strStr(string haystack, string needle) 
{
    int m = haystack.size();
    int n = needle.size();
    for(int i = 0;i<=m-n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(needle[j]!=haystack[i+j])
            {
                break;
            }
            if(j == n-1)
            {
                return i;
            }
        }
    }
    return -1;
}
int myAtoi(string s) 
{
    int num = 0,i=0,sign = 1;    
    while(s[i]==' ')
    {
        i++;
    }
    if(i<s.size()&&(s[i]=='-'||s[i]=='+'))
    {
        sign=s[i]=='+'?1:-1;
        ++i;
    }
    while(i<s.size()&&isdigit(s[i]))
    {
        if(num>INT_MAX/10||num==INT_MAX/10&&s[i]>'7')
        {
            return sign == -1?INT_MIN:INT_MAX;
        }
        num = num*10+(s[i]-'0');
        ++i;
    }
    return num*sign;
}
int compress(vector<char>& chars) 
{
    int index = 0,count=1;
    char prev = chars[0];
    for(int i=0;i<chars.size();++i)
    {
        if(chars[i]==prev)
        {
            count++;
        }
        else
        {
            chars[index++]=prev;
            if(count>1)
            {
                int start=index;
                while(count)
                {
                    chars[index++]=(count%10)+'0';
                    count/=10;
                }
                reverse(chars.begin()+start,chars.begin()+index);
            }
            prev = chars[i];
            count=1;
        }
    }
    chars[index++]=prev;
    if(count>1)
    {
        int start = index;
        while(count)
        {
            chars[index++]=(count%10)+'0';
            count/=10;
        }
        reverse(chars.begin()+start,chars.begin()+index);
    }
    return index;    
}
int compress(vector<char>& chars) 
{
    int index = 0,count=1;
    char prev = chars[0];
    for(int i=0;i<chars.size();++i)
    {
        if(chars[i]==prev)
        {
            count++;
        }
        else
        {
            chars[index++]=prev;
            if(count>1)
            {
                int start=index;
                while(count)
                {
                    chars[index++]=(count%10)+'0';
                    count/=10;
                }
                reverse(chars.begin()+start,chars.begin()+index);
            }
            prev = chars[i];
            count=1;
        }
    }
    chars[index++]=prev;
    if(count>1)
    {
        int start = index;
        while(count)
        {
            chars[index++]=(count%10)+'0';
            count/=10;
        }
        reverse(chars.begin()+start,chars.begin()+index);
    }
    return index;    
}
int main()
{
    vector<char> chars{'a','a','a','a'};
    cout<<compress(chars);
}