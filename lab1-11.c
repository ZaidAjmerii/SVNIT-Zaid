// total seconds into H M S.

#include <stdio.h>

int main()
{

  int hour, min, sec, totalSeconds;

  printf("enter your total seconds to convert it into hours, minutes and seconds respectivily\n>>>");

  scanf("%d", &totalSeconds);

  hour = totalSeconds / 3600;

  totalSeconds = totalSeconds % 3600;

  min = totalSeconds / 60;

  totalSeconds = totalSeconds % 60;

  sec = totalSeconds;

  printf("%d Hour %d Minutes %d Seconds", hour, min, sec);

  return 0;
}
