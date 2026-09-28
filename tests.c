#include <assert.h>
#include <stdio.h>

int full_kilometers(int meters);
int apples_remainder(int n, int k);
int pies_remainder(int a, int b, int n);
int main(){
    // Task1
    assert(apples_remainder(3, 10) == 1);
    assert(apples_remainder(5, 10) == 0);
    assert(apples_remainder(7, 3) == 3);
    assert(apples_remainder(1, 9999) == 0);
    printf("task1: Все тесты пройдены\n");
    // Task2
    assert(pies_remainder(10, 50, 1) == 50);
    assert(pies_remainder(10, 50, 2) == 0);
    assert(pies_remainder(1, 99, 1) == 99);
    assert(pies_remainder(2, 99, 2) == 98);
    assert(pies_remainder(97, 99, 100) == 0);
    // Task3
    assert(full_kilometers(0) == 0);
    assert(full_kilometers(999) == 0);
    assert(full_kilometers(1000) == 1);
    assert(full_kilometers(1999) == 1);
    assert(full_kilometers(2000) == 2);
    printf(" Все тесты пройдены\n");
    return 0;
}

