// 02_challenge.cpp by Bill Weinman [bw.org]
// updated 2020-07-12
#include <cstdio>
#include <iostream>
using namespace std;

const char chkstring[] = "This is a null-terminated string.";

int main()
{
    int count = 0;
    for (char i : chkstring) {
        if (i == 0) break; 
        count++;
    }
    printf("The number of characters is: %d\n", count);
   

    char c = 0;
    short int i = 0;
    int j = 0;
    long int k = 0;
    long long int l = 0;

    cout << sizeof(c) << endl;
    cout << sizeof(i) << endl;
    cout << sizeof(j) << endl;
    cout << sizeof(k) << endl;
    cout << sizeof(l) << endl;

    return 0;
}
