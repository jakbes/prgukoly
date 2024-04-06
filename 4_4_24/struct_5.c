#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  struct tm *systime;
  time_t t;
  
  t = time(NULL);
  systime = localtime(&t);
  
  printf("Cas je %.2d:%.2d:%.2d\n", systime->tm_hour, systime->tm_min, systime->tm_sec);
  printf("Datum: %.2d/%.2d/%.2d\n", systime->tm_mon+1, systime->tm_mday, systime->tm_year);
  system("PAUSE");	
  return 0;
}
/* pøeddefinovaná struktura z time.h + další funkce
struct tm
{
	int	tm_sec;		 Seconds: 0-59 (K&R says 0-61?) 
	int	tm_min;		 Minutes: 0-59 
	int	tm_hour;	 Hours since midnight: 0-23
	int	tm_mday;	 Day of the month: 1-31 
	int	tm_mon;		 Months *since* january: 0-11 
	int	tm_year;	 Years since 1900 
	int	tm_wday;	 Days since Sunday (0-6) 
	int	tm_yday;	 Days since Jan. 1: 0-365 *
	int	tm_isdst;	 +1 Daylight Savings Time, 0 No DST,
				     * -1 don't know 
};

typedef	long	time_t;

_CRTIMP clock_t __cdecl	clock (void);
_CRTIMP time_t __cdecl	time (time_t*);
_CRTIMP double __cdecl	difftime (time_t, time_t);
_CRTIMP time_t __cdecl	mktime (struct tm*);
*/
