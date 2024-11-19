#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

/*

`a` is an `n` element array
each index `i` will contain a reference 
to an array of k_i integers

we are given `a` and we must find q queries
each query is in ij, `i` being the index
and `j` locating the col index.

n will be input 1
q num of queries

*/

int main() {
    int n = 0, queries = 0;
    cin >> n >> queries;
    
    cin.ignore();  
    
    vector<vector<int>> a(100);
    string loadingLine;
    
    int i = 0;
    while (getline(cin, loadingLine)) {
        if (i < n) {
            stringstream ss(loadingLine);
            int loadInt, size, j = 0;
            ss >> size;
            
            while (j < size) {
                ss >> loadInt;
                a[i].push_back(loadInt); 
                j++;
            }
        } else {
            try {
                stringstream ss(loadingLine);
                int qI = 0, qJ = 0;
                ss >> qI >> qJ; 
                cout << a[qI][qJ] << "\n";
            } catch (exception) {
                break;
            }
        }
        i++;
    }
    return 0;
}
