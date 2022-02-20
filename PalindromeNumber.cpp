class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long int rev = 0;
        long int orignal_no = x; // x is going to change below
        while(x!=0){
            rev = rev*10 + x %10;
            x /= 10;
        }
        return (rev == orignal_no)?true:false;
    }
};