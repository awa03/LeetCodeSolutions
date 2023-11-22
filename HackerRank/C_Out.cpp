#include <iostream>
using namespace std;

int main() {
    int i;
    long d;
    char c;
    float f;
    double lf;

    
    scanf("%d %ld %c %f %lf", &i, &d, &c, &f, &lf);

    
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", i, d, c, f, lf);

    return 0;
}
