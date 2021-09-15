class Solution {
public:
    bool isValidSerialization(string preorder) {
        stringstream pu(preorder);
        string s;
        int c =1;
        while(getline(pu,s,','))
        {
            c--;
            if(c<0)
            {
                return false;
            }
            if(s!="#")
            {
                c+=2;
            }
        }
        return c==0;
    }
};