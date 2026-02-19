#include <iostream>
#include <cstring>
using namespace std;

int longestSubstring(char *s, string &st, int &start, int &end) {
    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    start = 0;
    int t=0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }
        lastIndex[ch] = i;

        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
            end = i;
            t=i;
    }
    for(int i=start;i<=t;i++)
    {
     st += s[i];
    }
    return maxLen;
}
int main() {
    char str[200];
    cout << "Enter string: ";
    cin >> str;
    string st;
    int start,end;
    int result = longestSubstring(str, st, start, end);
    cout << "Length of entered string is: " << strlen(str) << endl;
    cout << "Longest substring length = " << result << " starting from position " << start+1 << " and ending at position " << end+1 << endl;
    for(int i=0;i<st.length();i++)
    {
        cout <<" "<< st[i];
    }
    return 0;
}
