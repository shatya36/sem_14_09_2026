#include <assert.h>
#include <stdio.h>

int apples_remainder(int n, int k);

int main(){
    assert(apples_remainder(3, 10) == 1);
    assert(apples_remainder(5, 10) == 0);
    assert(apples_remainder(7, 3) == 3);
    assert(apples_remainder(1, 9999) == 0);

    printf("task2: Все тесты пройдены\n");
    return 0;
}
