#include "functions.h"

using std::string;
int lengthOfLongestSubstring(string s) {
    vector<int> dict(256, -1);
    int maxLen = 0, befStart = -1;
    for (int i = 0; i < s.size(); i++) {
        if (dict[s[i]] > befStart) {// change start 
            befStart = dict[s[i]];
        }
        else { // len increase
            if (i - befStart > maxLen) {
                maxLen = i - befStart;
            }
        }
        dict[s[i]] = i;
    }
    return maxLen;
}