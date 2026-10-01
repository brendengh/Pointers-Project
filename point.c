#include <stdio.h>

void upointer(int *ptr);
void update(int num);

int main() {

    int value = 10;
    int *ptr = &value;

    printf("main: value = %d, &value = %p\n", value, (void *)&value);

    upointer(ptr);
    printf("main: after update_pointer, value = %d\n", value);

    update(value);
    printf("main: after update, value = %d\n", value);

    return 0;
}

void upointer(int *ptr) {

    *ptr = *ptr + 7;

    printf("update_pointer: *ptr = %d, ptr = %p\n", *ptr, (void *)ptr);
}

void update(int num) {

    num = num + 1;

    printf("update: num = %d, &num = %p\n", num, (void *)&num);
}
