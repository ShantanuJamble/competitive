#include<sstream>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){

stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
ss.seekp(0,ios::end);
cout<<a<<" "<<b<<" "<<c<<" "<<ss.tellp();
}
