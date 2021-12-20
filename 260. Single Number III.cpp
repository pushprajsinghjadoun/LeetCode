class Solution {
public:
    vector<int> singleNumber(vector<int>& n) {
        sort(n.begin(),n.end());
        vector<int> v;
        int t = n[0];
        bool f = false;
        for(int i=0;i<n.size();i++)
        {
            if(i==0)
            {
                if(n[i]!=n[i+1] )
             {
                 v.push_back(n[i]);
             }
            }
            else if(i==n.size()-1)
            {
                if(n[i]!=n[i-1])
                {
                     v.push_back(n[i]);
                }
            }else
            {
                if(n[i]!=n[i+1] && n[i]!=n[i-1])
            {
                v.push_back(n[i]);
            }
            }
        }
        
        return v;
    }
};