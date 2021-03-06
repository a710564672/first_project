/*********************************************************************************
 *      Copyright:  (C) 2017 Huang Weiming<710564672@qq.com>
 *                  All rights reserved.
 *
 *       Filename:  hello.c
 *    Description:  This file 
 *                 
 *        Version:  1.0.0(2017年08月18日)
 *         Author:  Huang Weiming <710564672@qq.com>
 *      ChangeLog:  1, Release initial version on "2017年08月18日 14时30分01秒"
 *                 
 ********************************************************************************/

#include<stdio.h>
#include<time.h>
int main(int argc, char **argv)
{
    printf ("Version:0.02\n");
    time_t mytime;
    struct tm *mylocaltime;
    mytime = time(NULL);
    mylocaltime = localtime(&mytime);
    printf("Year:%d\n",mylocaltime->tm_year+1900);
    printf("Month:%d\n",mylocaltime->tm_mon+1);
    printf("Day:%d\n",mylocaltime->tm_mday);
    printf("Hour:%d\n",mylocaltime->tm_hour);
    printf("Min:%d\n",mylocaltime->tm_min);
    printf("Second:%d\n",mylocaltime->tm_sec);
    printf ("Version:0.01\n");
    printf ("hello\n");
    return 0;
}
