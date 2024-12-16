class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int reversenumber=0;
        while(x>reversenumber){
            reversenumber=reversenumber*10+x%10;
            x/=10;
        }
        return x==reversenumber||x==reversenumber/10;
    }
};