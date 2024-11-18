#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    regex r("\\d+");
    s = regex_replace(s, regex(","), "\n");
    cout << s;
    return 0;
}
