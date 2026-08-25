class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.size() - 1;
        
        while (st < e) {
            // 1. Agar starting character alphanumeric nahi hai, toh aage badho
            if (!isalnum(s[st])) {
                st++;
            }
            // 2. Agar ending character alphanumeric nahi hai, toh peeche aao
            else if (!isalnum(s[e])) {
                e--;
            }
            // 3. Dono characters alphanumeric hain, toh lowercase karke compare karo
            else {
                if (tolower(s[st]) != tolower(s[e])) {
                    return false; // Agar match nahi hue toh palindrome nahi hai
                }
                st++;
                e--;
            }
        }
        return true; // Agar sabhi match ho gaye toh valid palindrome hai
    }
};