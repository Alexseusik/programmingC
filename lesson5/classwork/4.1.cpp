// 4.1.cpp 

#include <stdio.h>
#include <math.h> 

int main() {
    double y, x;
    unsigned n;
    printf("n=");
    scanf("%u", &n); //scanf_s
    printf("x=");
    scanf("%lf", &x);

    // arithmetic cycle
    y = x;
    for (unsigned i = 0; i < n; i++) { // i=0..n-1 // i++ == i=i+1, i += 1
        y = sin(y);
    }
    printf("Y=%lf", y);
}