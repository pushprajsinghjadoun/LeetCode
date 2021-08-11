#include <bits/stdc++.h>
using namespace std;

 int minSwaps(string s)
    {
       int count=0;
        int unmatch = 0;
        for (auto ch: s)
        {
            if (ch=='[')
               {
                    count++;
                    cout<<count<<"[";
               }
                
            else
               {
                    count--;
                    cout<<count<<"]";
               }
            if (count < 0)
            {
                unmatch++;
                cout<<unmatch<<"->match";
                count = 0;
            }
            cout<<endl;
        }
        cout<<"---"<<unmatch<<"---";
        return (unmatch+1)/2;
    }

int main()
{
    string s;
    cin>>s;
    cout<<minSwaps(s);
    return 0;
}