class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        else
        {
            long long int rem=0;
           long long int y=x;
            while(x)
            {
                rem= rem*10 + x%10;
                x= x/10;
            }
            cout<<"rem="<<rem<<" ";
            if(rem==y)
            return true;
            else  
            return false;
        }
    }
};