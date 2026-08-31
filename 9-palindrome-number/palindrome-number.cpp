class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long reverseX=0;
        while(x>0){
            int last=x%10;
            reverseX=(reverseX*10)+last;
            x=x/10;
        }
        return reverseX == original;
    }    
};