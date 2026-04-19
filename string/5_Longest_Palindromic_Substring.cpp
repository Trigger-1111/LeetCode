class Solution {
public:
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        string answer = "";

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                if (j - i + 1 > answer.size() && isPalindrome(s, i, j)) {
                    answer = s.substr(i, j - i + 1);
                }
            }
        }

        return answer;
    }
};
