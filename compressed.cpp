#include <iostream>
#include <string>
using namespace std;

string compressString(const string& s) {
    if(s.empty()) return "";
    string res = "";
    int count = 1;
    for(size_t i = 1; i <= s.length(); i++) {
        if(i < s.length() && s[i] == s[i-1]) count++;
        else {
            res += s[i-1];
            res += to_string(count); // using primitive to_string
            count = 1;
        }
    }
    return res;
}

int main() {
    cout << compressString("aaabbccccb") << "\n";
    return 0;
}