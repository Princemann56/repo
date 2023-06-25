class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1= num1.size()-1;
        int n2= num2.size()-1;
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int carry=0;
        vector<int> sum;
        int i=0;
      
        while(i <= max(n1,n2))
        {   
            int x=0;
            if(i>n1 && i<= n2)
            x= (num2[i]-'0') + carry;
            else if(i>n2 && i<= n1)
            x= (num1[i]-'0')  + carry;
            else
            x= (num1[i]-'0') + (num2[i]-48) + carry;
           

            if(x<= 9)
           {   
             
             sum.push_back(x);
             i++;
             carry =0;
           }
           else
           {
               carry=1;
               x= x % 10;
               if(i==max(n1,n2))
               {
                   sum.push_back(x);
                   sum.push_back(1);
               }
            else
             sum.push_back(x);
               i++;

           }
           
            
        }
        for(auto i: sum)
        cout<< i<<" ";
        reverse(sum.begin(), sum.end());
        
        string str="";
        
        for(auto i: sum)
        str= str + to_string(i);
        
        return str;
    }
};