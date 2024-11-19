
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    int lines = 0; 
    cin >> lines;
    std::vector<int> inputV;
    for(int i = 0; i < lines; i++){
        int input; 
        cin >> input;
        inputV.push_back(input);
    }
    for(int i = inputV.size() - 1; i >= 0; i--){
        cout << inputV[i] << " ";
    }
    return 0;
}
