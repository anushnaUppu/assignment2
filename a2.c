#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gcd(int m, int n) {
    while(n > 0) {
        int r = m%n;
        m = n;
        n = r;
    }
    return m;
}

int randomGenerator() {
    return rand()%100;
}

int main()
{
    
    int count = 0;
    float itr = 100.0;
    for(int i = 0;i < itr;i++) {
        if(gcd(randomGenerator(),randomGenerator()) == 1) {
            count = count + 1;
        }
    }
    printf("value of pi is: %f\n", sqrt(6.0f * (itr/count)));

    return 0;
}

