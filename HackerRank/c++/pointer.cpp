#include <stdio.h>
using namespace std;
void update(int *a,int *b) {
   int temp = *b;
    int diff = *a - *b;
    *b = (diff < 0) ? -diff : diff;
    *a = *a + temp;
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
