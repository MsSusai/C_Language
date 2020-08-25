//
// Created on 2020/8/10.
//习题8-9 分类统计各类字符个数 (15分)
#include <stdio.h>

#define MAXS 15

void StringCount(char *s);
//void ReadString( char *s ); /* 由裁判实现，略去不表

int main() {
    char s[MAXS];

//    ReadString(s);
    gets(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount(char *s) {
    int daxie = 0, xiaoxie = 0, kongge = 0, shuzi = 0, qita = 0;
    while (*s != '\0') {
        if (*s >= 'A' && *s <= 'Z') {
            daxie++;
        } else if (*s >= 'a' && *s <= 'z') {
            xiaoxie++;
        } else if (*s == ' ') {
            kongge++;
        } else if (*s >= '0' && *s <= '9') {
            shuzi++;
        } else {
            qita++;
        }
        s++;
    }
    printf("%d %d %d %d %d", daxie, xiaoxie, kongge, shuzi, qita);
}