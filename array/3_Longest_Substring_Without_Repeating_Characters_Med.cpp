class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> VL;  
        int maxL = 0;

        for (char c : s) {
            while (find(VL.begin(), VL.end(), c) != VL.end()) {
                VL.erase(VL.begin());
            }

            VL.push_back(c);
            maxL = max(maxL, (int)VL.size());
        }

        return maxL;
    }
};
