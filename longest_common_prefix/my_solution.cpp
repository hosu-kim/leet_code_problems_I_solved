#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string ret = "";

        for (int i = 0; i < strs[0].size(); i++) {

            for (int j = 1; j < strs.size(); j++) {
                if (strs[j].size() <= i) return ret;

                if (strs[j][i] != strs[0][i]) return ret;
            }
            ret += strs[0][i];
        }

        return ret;
    }
};