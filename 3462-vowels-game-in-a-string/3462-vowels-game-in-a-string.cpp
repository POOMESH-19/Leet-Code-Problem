class Solution {
public:
    bool doesAliceWin(string s) {
        int totalVowels = 0;
        for (auto it : s)
            if (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u')
                totalVowels++;  
        return (totalVowels == 0) ? false : 
               (totalVowels % 2 == 1) ? true : true;  
    }
};