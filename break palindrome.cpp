class Solution {
public:
    bool checkPalindrome(string p) {
        int l = 0, r = p.size() - 1;
        
        while(l <= r) {
            if(p[l] != p[r]) return false;
            l++;
            r--;
        }
        
        return true;
    }
    
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
        
        for(int i = 0; i < n; i++) {
            if(palindrome[i] != 'a') {
                char x = palindrome[i];
                palindrome[i] = 'a';
                if(!checkPalindrome(palindrome)) return palindrome;
                palindrome[i] = x;
            }
        }
        
        for(int i = n - 1; i >= 0; i--) {
            if(palindrome[i] == 'a') {
                char x = palindrome[i];
                palindrome[i] = 'b';
                if(!checkPalindrome(palindrome)) return palindrome;
                palindrome[i] = x;
            }
        }
        
        return "";
    }
};
