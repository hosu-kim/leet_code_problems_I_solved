#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret = "";

        for (int i = 0; i < strs[0].size(); i++) {

            for (int j = 0; j < strs.size(); j++) {
                if (strs[j].size() <= i) return ret;

                if (j == 0) continue;

                if (strs[j][i] != strs[0][i]) return ret;
            }
            ret += strs[0][i];
        }

        return ret;
    }
};