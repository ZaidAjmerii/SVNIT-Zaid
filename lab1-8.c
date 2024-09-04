// Earth takes 31558150 seconds convert it to days hours and min in c code

#include <stdio.h>

int main()
{

  int earthSec, days, hours, mins;

  earthSec = 31558150;

  days = earthSec / (24 * 3600);

  earthSec = 31558150 % (24 * 3600);

  hours = earthSec / 3600;

  earthSec = earthSec % 3600;

  mins = earthSec / 60;

  printf(
      "So, 31558150 seconds in days hours and min is %d days %d hours %d mins",
      days, hours, mins);

  return 0;
}
