#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
public:
 Student(){}   
 string get_last_name(){
     return lastName;
 }
 void set_last_name(string name){
    lastName = name; 
 }
 void set_first_name(string name){
    firstName = name ;
 }
 string get_first_name(){
     return firstName;
 }
 void set_standard(int a){
    standard = a; 
 }
 void set_age(int a){
     age = a;
 }
 int get_age(){
    return age; 
 }
 int get_standard(){
    return standard; 
 }
 void PrintStudent(){
     cout << age << "\n";
     cout << lastName << ", " << firstName << "\n";
     cout << standard << "\n"; 
 }
 
private:
 string firstName, lastName;
 int standard, age;
};

int main() {
 int loadAge, standard;
 string loadFirst, loadLast;
 cin >> loadAge >> loadFirst >> loadLast >> standard;
 Student s;
 s.set_first_name(loadFirst);
 s.set_age(loadAge);
 s.set_last_name(loadLast);
 s.set_standard(standard);
 s.PrintStudent();
 cout << "\n" << s.get_age() << "," << s.get_first_name() << ",";
 cout << s.get_last_name() << "," << s.get_standard();
}
