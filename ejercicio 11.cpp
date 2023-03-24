#include <stdio.h>
#include <iostream>

int dayofweek(int d, int m, int y)
{
    static int mon[] = { 0, 31, 59, 90, 120,151 ,181 ,212,243,273,304,334 };
    int t=0;
    if(y%4==0&&(y%100||y%400==0)&&m<3)
    t=1;
    return ( y*365 + y/4 - y/100 + y/400 + mon[m-1]-t + d-1) % 7;
}

int main()
{
    int day = dayofweek(30, 8, 2010);
    printf ("%d", day);
    return 0;
}