class Solution {
public:
    string truncateSentence(string s, int k) {
        int size = s.size();
        string re; int counter=0;
        int i;
        for( i=0;i<=size;i++)
        {
            if(s[i]==' ')
            {
                counter++;
                if(k==counter)
                {
                    break;
                }
            }
        }
        
        return s.substr(0,i);
    }
};