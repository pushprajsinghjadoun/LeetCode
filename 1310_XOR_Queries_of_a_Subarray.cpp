class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        int n = arr.size();
        int temp[n];
        vector<int> v;
        temp[0] = arr[0];
        
        for(int i =1;i<n;i++)
        {
            temp[i] = temp[i-1]^ arr[i];
            cout<<temp[i]<<" ";
        }
        
        for(int i =0;i<q.size();i++)
        {
            int L = q[i][0];
            int R = q[i][1];
            
            if(L==0)
            {
                v.push_back(temp[R]);
            }else
            {
                v.push_back(temp[R]^temp[L-1]);
            }
        }
        return v;
    }
};