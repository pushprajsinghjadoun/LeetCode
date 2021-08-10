class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
     priority_queue<int> g;
    int sum=0;
    for(int i=0;i<piles.size();i++)
    {
        g.push(piles[i]);
    }
    for(int i=0;i<k;i++)
    {
        int temp;
    temp = g.top();
    g.pop();
    if(temp%2==0)
    {
        int b = (temp)/2;
        
        g.push(b);
    }else{
        int b = (temp+1)/2;
        
        g.push(b);
    }
    
    
    }
    while (!g.empty()) {
        sum+=g.top();
       
        g.pop();
    }
    
    return sum;
  
    }
};