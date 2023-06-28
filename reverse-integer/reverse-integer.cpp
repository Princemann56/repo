class Solution {
public:
       int reverse(int x) {
        long rem=0;
        while(x)
        {
            rem= rem*10 + x%10;
            x= x/10;
        }
      long y=  (rem > INT_MAX || rem < INT_MIN) ?  0:(rem);

      return y;
    }
};