#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        sort(strs.begin(), strs.end());
        string a = strs.front();
        string b = strs.back();
        string ans;

        int limit = min(a.size(), b.size());
        for (int i = 0; i < limit; ++i) {
            if (a[i] != b[i]) break;
            ans += a[i];
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;                       // number of strings
    vector<string> strs(n);
    for (string& s : strs) cin >> s;

    Solution sol;
    cout << sol.longestCommonPrefix(strs) << '\n';
    return 0;
}
