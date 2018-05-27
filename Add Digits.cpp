class Solution {
public: 
    int addDigits(int num) {
        if((num/10)==0)
            return num;
        int r=0,s=0;
    while(num>0){
       r=num%10;
       s=s+r;
       num=num/10;
    }
         return addDigits(s);
        
    }
};