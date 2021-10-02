// 02_challenge.cpp by Bill Weinman [bw.org]
// updated 2020-07-12
#include <cstdio>
#include <iostream>
#include <cstdint>
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
    int64_t blue = 0;
    cout << sizeof(c) << endl;
    cout << sizeof(i) << endl;
    cout << sizeof(j) << endl;
    cout << sizeof(k) << endl;
    cout << sizeof(l) << endl;
    cout << sizeof(blue) << endl;

    float abc = 1.0;
    double def = 1.0;
    long double goo = 1.0;

    cout << "Floats" << endl;
    cout << sizeof(abc) << endl;
    cout << sizeof(def) << endl;
    cout << sizeof(goo) << endl;

    return 0;
}
