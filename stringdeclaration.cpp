#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    char name[30];
    cout<<"Enter your name";
    cin.getline(name,30);
    cout<<"My name is ="<<name;
    return 0;
}