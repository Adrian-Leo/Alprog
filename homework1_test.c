#include <stdio.h>
#include<time.h>

int main() {

	//output time diff 
	//input and output is second
    double diff;
	time_t t_1, t_2 =946695600;
    t_1 = time(NULL);
    diff = difftime(t_1, t_2);
	printf ("The difference between the %s", ctime (&t_2));
	printf ("and %s", ctime (&t_1));
	printf ("is seconds %s\n", ( long int )diff);

	//convert second to days hours and minutes
    int Number_of_days = ⌊ n / (24 * 3600) ⌋ 
	int Number_of_Hours = ⌊ (n % (24 * 3600)) / 3600 ⌋ 
	int Number_of_Minutes = ⌊ (n % (24 * 3600 * 3600)) / 60 ⌋ 

	i
	//convert days hour and minutes to second
	int total_days,total_hours,total_minute;
	int days,hours,minutes;

	total_days = days * 24 * 3600; 	 
	
	total_hours = hours * 3600; 
	
	total_minute = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf("D:H:M - %d:%d:%d\n",h,m,s);

    
	
	return 0;
}