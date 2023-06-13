/*
 * @file: file.c
 * @author: Zhu, BinQiang <bin.qiangx.zhu@intel.com>
 * @create time: 2023-06-10 15:24:15
 * @last modified: 2023-06-10 15:24:15
 * @description:
 */
#include <stdio.h>
#include <stdlib.h>

void f1() {
    FILE* f = fopen("file.c", "r");
    if (NULL == f) {
        exit(1);
    } else {
        printf("%p\n", f);
    }
}

void big_little_endian() {
    // char           0    A    a
    // hexadecimal 0x30 0x41 0x61

    // ABCD
    int d = 0x41424344;
    // char *pd = (char *)&d;
    char *p = (char *)&d;

    // printf("%s\n", *pd);
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("%c\n", *p);


}

void f2(int a, int b, int c ,int d) {
    // int a = 1, b = 2, c = 3, d = 4;
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;
    int* pd = &d;
    printf("pa = %p\n", pa);
    printf("pb = %p\n", pb);
    printf("pc = %p\n", pc);
    printf("pd = %p\n", pd);

    // int i;
    // for (i=0; i<4; i++) {
    //     printf("%c\n");
    // }
}

void f3() {
    int a[5] = {1, 2, 3, 4, 5}, i;
    for (i=0; i<5; i++) {
        printf(", %d" + !i, a[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    // f1();
    // big_little_endian();
    // f2(1, 2, 3, 4);
    f3();
    return 0;
}

