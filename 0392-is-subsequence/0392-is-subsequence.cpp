class Solution {
public:
    bool isSubsequence(string s1, string s2) {
    int p = 0, v = 0;
    //cin >> s1 >> s2;
    while (p < s1.length() && v < s2.length()) {
        if (s1[p] == s2[v]) {
            p++;
        }
        v++;
    }
    // if (p == s1.length()) {
    //     cout << "False"; 
    // } else {
    //     cout << "True";   
    // }
    return p==s1.length();
}
};