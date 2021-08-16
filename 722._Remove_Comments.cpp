#include <bits/stdc++.h>
using namespace std;

vector<string> removeComments(vector<string>& source) {
      vector<string> ss;
      string gg;
        bool b = false;
        for(auto temp : source)
        {
            
            
            for(int j=0;j<temp.size();j++)
            {
                if(temp[j]=='/' and temp[j+1]=='*' and j+1<temp.size() and (!b) )
                {
                    b= true;
                    j++;
                }
                else if(temp[j]=='*' and temp[j+1]=='/' and j+1<temp.size() and (b) )
                {
                    b= false;
                    j++;
                }
               else if(temp[j]=='/' and j+1<temp.length() and temp[j+1] =='/' and (!b) ) 
                {
                   j=temp.size();
                }
                else if(!b)
                {
                    gg+=temp[j];
                }
                 
                
            }
                if (!b and gg!="")
                 {
                    ss.push_back(gg);
                    gg="";
                 }
            
            
            
        }
        return ss;
    }

int main()
{
    vector<string> arr = {"/*Test program */", "int main()", "{ ", "  // variable declaration ", "int a, b, c;", "/* This is a test", "   multiline  ", "   comment for ", "   testing */", "a = b + c;", "}"};
    vector<string> re = removeComments(arr);

    for(auto i: re)
    {
        cout<<i<<" ";
    }

    return 0;
}