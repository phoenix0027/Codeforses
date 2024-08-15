#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.length() > s2.length()) {
            swap(s1, s2);
        }

        int max_len = 0;
        int total_len = s1.length() + s2.length();

        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                int c = 0;
                int x = i, y = j;

                while (x < s1.length() && y < s2.length() && s1[x] == s2[y]) {
                    c++;
                    x++;
                    y++;
                }

                max_len = max(max_len, c);
            }
        }
        cout <<total_len - (2 * max_len)<< endl;
    }
    return 0;
}
