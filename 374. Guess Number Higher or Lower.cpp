 
  Forward declaration of guess API.
  @param  num   your guess
  @return 	     -1 if num is lower than the guess number
 			      1 if num is higher than the guess number
                otherwise return 0
  int guess(int num);
 

class Solution {
public
    int guessNumber(int n) {
    int l = 1; 
    int r = n;
    int mid = l+(r-l)2;
    
    while(l=r)
    {
        int x = guess(mid);
        if(x==0)
        {
            return mid;
        }
        else if(x == 1)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
        mid = l +(r-l)2;
    }
    return 1;
    }
}; 
  Forward declaration of guess API.
  @param  num   your guess
  @return 	     -1 if num is lower than the guess number
 			      1 if num is higher than the guess number
                otherwise return 0
  int guess(int num);
 

class Solution {
public
    int guessNumber(int n) {
    int l = 1; 
    int r = n;
    int mid = l+(r-l)2;
    
    while(l=r)
    {
        int x = guess(mid);
        if(x==0)
        {
            return mid;
        }
        else if(x == 1)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
        mid = l +(r-l)2;
    }
    return 1;
    }
};