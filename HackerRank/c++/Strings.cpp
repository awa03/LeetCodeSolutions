#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void SwapFirstChar(string& s1, string& s2){
    std::swap(s1[0], s2[0]);
}

int main() {
    string first, second;
    cin >> first >> second;
    cout << first.size() << " " << second.size() << "\n";
    cout << (first + second) << "\n";
    SwapFirstChar(first, second);
    cout << first << " " << second;
}
