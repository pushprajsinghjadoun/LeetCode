#include <bits/stdc++.h>
using namespace std;


bool helper(string d,int k)
{
   
    if(k==1)
    {
       
        for(int i=1;i<d.size();i++)
        {
            if((d[i]!='q'&& d[i]!='w' && d[i]!='e' && d[i]!='r' && d[i]!='t' && d[i]!='y' && d[i]!='u'  && d[i]!='i' && d[i]!='o' && d[i]!='p' && d[i]!='Q'&& d[i]!='W' && d[i]!='E' && d[i]!='R' && d[i]!='T' && d[i]!='Y' && d[i]!='U'  && d[i]!='I' && d[i]!='O' && d[i]!='P'))
            {
                
                return false;
            }
        }
    }
    else if(k==2)
    {
        
        for(int i=1;i<d.size();i++)
        {
            if(d[i]!='a'&& d[i]!='s' && d[i]!='d' && d[i]!='f' && d[i]!='g' && d[i]!='h' && d[i]!='l' && d[i]!='j'  && d[i]!='k' && d[i]!='l' && d[i]!='A' && d[i]!='S' && d[i]!='D' && d[i]!='F' && d[i]!='G' && d[i]!='H' && d[i]!='J' && d[i]!='K'  && d[i]!='L')
            {
                
                return false;
            }
            
           
        }
    }
    else if(k==3)
    {
        
        for(int i=1;i<d.size();i++)
        {
        if(d[i]!='x' && d[i]!='c' && d[i]!='z' && d[i]!='v' && d[i]!='b' && d[i]!='n' && d[i]!='m' && d[i]!='Z' && d[i]!='X' && d[i]!='C' && d[i]!='V' && d[i]!='B' && d[i]!='N' && d[i]!='M')
            {
                return false;
            }
            
            
        }
    }
    return true;
}
vector<string> findWords(vector<string>& words)
 {
     vector<string> res;
        for(int i=0;i<words.size();i++)
        {
            string d = words[i];
            if(d[0]=='q'|| d[0]=='w' || d[0]=='e' || d[0]=='r' || d[0]=='t' || d[0]=='y' || d[0]=='u'  || d[0]=='i' || d[0]=='o' || d[0]=='p' || d[0]=='Q'|| d[0]=='W' || d[0]=='E' || d[0]=='R' || d[0]=='T' || d[0]=='Y' || d[0]=='U'  || d[0]=='I' || d[0]=='O' || d[0]=='P' )
            {
                if(helper(d,1))
                
                {
                    
                    res.push_back(d);
                }
            }else if(d[0]=='a'|| d[0]=='s' || d[0]=='d' || d[0]=='f' || d[0]=='g' || d[0]=='h' || d[0]=='j'  || d[0]=='k' || d[0]=='l' || d[0]=='A' || d[0]=='S' || d[0]=='D' || d[0]=='F' || d[0]=='G' || d[0]=='H' || d[0]=='J' || d[0]=='K'  || d[0]=='L')
            {
                if(helper(d,2))
                {
                   
                    res.push_back(d);
                }
            }else if(d[0]=='z'|| d[0]=='x' || d[0]=='c' || d[0]=='v' || d[0]=='b' || d[0]=='n' || d[0]=='m'  || d[0]=='Z' || d[0]=='X' || d[0]=='C' || d[0]=='V'|| d[0]=='B' || d[0]=='N' || d[0]=='M' )
            {
                if(helper(d,3))
                {
                    res.push_back(d);
                }
            }
        }
        return res;
 }

int main()
{
    vector<string> words = {"omk","zxcnm","xczdfhw","zxncb"};
   
    
    
    vector<string> r = findWords(words);
    for(auto x: r)
    {
        cout<<x<<" ";
    }


    return 0;
    
}