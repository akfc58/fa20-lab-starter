#include <stdio.h>
int main() {
    int a[20];
    for (int i = 0; ; i++) {
        a[i] = i;
        printf("%d\n",a[i]);
    }
}