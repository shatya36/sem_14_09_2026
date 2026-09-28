#include <assert.h>
#include <stdio.h>

int full_kilometers(int meters);

int main(){
    assert(full_kilometers(0) == 0);
    assert(full_kilometers(999) == 0);
    assert(full_kilometers(1000) == 1);
    assert(full_kilometers(1999) == 1);
    assert(full_kilometers(2000) == 2);

    printf("task3: Все тесты пройдены\n");
    return 0;
}
