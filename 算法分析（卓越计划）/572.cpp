#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> preprocess_bad_character(const string &pattern) {
    vector<int> bad_char(256, pattern.size());
    for (int i = 0; i < pattern.size() - 1; ++i) {
        bad_char[pattern[i]] = pattern.size() - 1 - i;
    }
    return bad_char;
}

int boyer_moore_horspool(const string &text, const string &pattern) {
    if (pattern.size() > text.size()) return -1;

    vector<int> bad_char = preprocess_bad_character(pattern);
    int shift = 0;

    while (shift <= text.size() - pattern.size()) {
        int j = pattern.size() - 1;
        while (j >= 0 && pattern[j] == text[shift + j]) {
            --j;
        }
        if (j < 0) {
            return shift;
        } else {
            shift += bad_char[text[shift + pattern.size() - 1]];
        }
    }
    return -1;
}

int main() {
    string pattern, text;
    cin >> pattern >> text;
    int position = boyer_moore_horspool(text, pattern);
    cout << position << endl;
    return 0;
}
