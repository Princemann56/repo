class Solution {
public:
    string addStrings(string num1, string num2) {
       long long int  n1= num1.size();
        long long int  n2= num2.size();
        long long int sum1=0;
        long long int  sum2=0;
        for(int i=0; i<n1; i++)
        {  
           
           
           sum1= sum1 + (num1[i]-48)* pow(10,n1-i-1);
        }
        cout<< sum1<<" ";
        for(int i=0; i<n2; i++)
        {
           
           sum2= sum2 + (num2[i]-48) * pow(10,n2-i-1);
        }
        long long int sum = sum1 + sum2;
        return to_string(sum);

        
    }
};