//
// Created on 2020/8/15.
//习题9-1 时间换算 (15分)
#include <stdio.h>
struct time{
    int hour;
    int minute;
    int second;
};

int main()
{
    struct time time1;
    scanf("%d:%d:%d",&time1.hour,&time1.minute,&time1.second);
    int n;
    scanf("%d",&n);
    time1.second += n;
    if (time1.second >= 60){
        time1.second -= 60;
        time1.minute += 1;
    }
    if (time1.minute >= 60){
        time1.minute -= 60;
        time1.hour += 1;
    }
    if (time1.hour >= 24){
        time1.hour -= 24;
    }
    printf("%02d:%02d:%02d\n",time1.hour,time1.minute,time1.second);

    return 0;
}
