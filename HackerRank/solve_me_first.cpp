#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num = 0, sum = 0; 
    string throwAway;
    cin >> throwAway;   
    while(cin >> num){
        cin >> throwAway;
        sum += stoi(throwAway) + num;
    }
    cout << sum;
    
    return 0;
}
