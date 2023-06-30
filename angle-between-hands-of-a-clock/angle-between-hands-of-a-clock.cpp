class Solution {
public:
    double angleClock(int hour, int minutes) {
        double x= minutes *6;
        double y=0.0;
        double a=(minutes)/2.0;
        double b=hour *30 ;
        if(hour==12)
        y=a;
        else
        y=b + a;
        cout<<a<<" "<<x<<" ";
      double  z= min(abs(abs(x-y)-360),abs(x-y));
        return z;
    }
};