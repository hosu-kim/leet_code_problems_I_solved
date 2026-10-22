class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int copy = x;
        long reversed = 0;

        while (copy > 0) {
            reversed = reversed * 10 + (copy % 10);
            copy /= 10;
        }

        return x == reversed;
    }
};