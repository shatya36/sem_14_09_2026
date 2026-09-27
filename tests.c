#include <assert.h>
#include <stdio.h>

int pies_remainder(int a, int b, int n);

int main(){
    assert(pies_remainder(10, 50, 1) == 50);
    assert(pies_remainder(10, 50, 2) == 0);
    assert(pies_remainder(1, 99, 1) == 99);
    assert(pies_remainder(2, 99, 2) == 98);

    printf("task1: Все тесты пройдены\n");
    return 0;
}
