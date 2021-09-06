class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
            int max = releaseTimes[0];
    char cmax = keysPressed[0];
    for(int i=1; i<releaseTimes.size();i++)
    {
        if(releaseTimes[i]-releaseTimes[i-1]>=max)
        {
            if(releaseTimes[i]-releaseTimes[i-1]==max)
            {
                int v = (int)keysPressed[i];
                int r = (int)cmax;
                if(r>v)
                {
                    cmax = cmax;
                }else{
                    cmax = keysPressed[i];
                }
            }else{
                max = releaseTimes[i]-releaseTimes[i-1];
                cmax = keysPressed[i];
            }
        }
    }
    return cmax;
    }
};