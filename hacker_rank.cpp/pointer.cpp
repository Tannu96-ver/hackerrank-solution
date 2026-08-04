#include <stdio.h>

void update(int *a,int *b) {
    int k=*a;
 *a=*a+*b;
 *b=(k>*b)?(k-*b):(*b-k);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
