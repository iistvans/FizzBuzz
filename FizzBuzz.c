#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int rep = 100;
    int lo = 3;
    int hi = 5;

    for(int i = 1; i <= rep; i++) {
        float lof = (sin((i*M_PI)/lo)+lo);
        float hif = (sin((i*M_PI)/hi)+hi);

        if (lof == lo && hif == hi) { printf("FizzBuzz\n"); }
        else if (lof == lo) { printf("Fizz\n", i); }
        else if (hif == hi) { printf("Buzz\n", i); }
        else { printf("%d\n", i); }
    }

    return 0;
}
