#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    int standard, age;   
    string first, second;
};

void PrintStudent(student s){
   cout << s.age << " " << s.first << " "; 
   cout << s.second << " " << s.standard;
}

int main() {
    student s;  
    try {
        cin >> s.age;
        cin >> s.first;
        cin >> s.second;
        cin >> s.standard;
    }
    catch(exception e) {
       cerr << "Error Reading Input\n"; 
    }
    PrintStudent(s);
    return 0;
}
