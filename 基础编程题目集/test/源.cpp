#include<iostream>
#include<iomanip>    //setiosflags(ios::fixed) << setprecision(2)
#include<cstdio>
#include<sstream>
using namespace std;

#include<stdio.h>
    int main() {
        int fahr = 150, celsius = 0;
        celsius = 5 * (fahr - 32);
        printf("%d", celsius);
        return 0;
    }
