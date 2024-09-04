// Hours, min, sec into total seconds

#include <stdio.h>

int main()
{

  int hour, min, sec, totalSeconds;

  printf("enter your time in hours, minutes and seconds respectivily to find "
         "total seconds\n>>>");

  scanf("%d %d %d", &hour, &min, &sec);

  totalSeconds = (hour * 3600) + (min * 60) + sec;

  printf("total seconds: %d", totalSeconds);
}
