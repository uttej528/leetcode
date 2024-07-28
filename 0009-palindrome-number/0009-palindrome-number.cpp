class Solution {
public:
    bool isPalindrome(int x) {
        
        long int res=x;
       long int pal=0;int cap=0;
        while(x>0){
         cap=x%10;
        pal=(pal*10)+cap;
        x=x/10;
        }
    if(res==pal)
    {
        return true;
    }else{
        return false;
    }
        
    }
};