// hello.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{
    puts("Hello, World!");
    printf("MS version: %d\n", _MSC_VER);
    
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int i : arr) {
        printf("%d\n", i);
    }
    return 0;
}
