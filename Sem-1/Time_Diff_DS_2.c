// Write a C function 
// void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff) 
// to calculate the difference between two time periods.

struct TIME
{
    int seconds;
    int minutes;
    int hours;
};

void differenceBetweenTimePeriod(struct TIME start,struct TIME stop,struct TIME *diff) {

    diff->seconds = start.seconds - stop.seconds;
    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
    
    if (diff->minutes<0)
    {
        diff->hours-=1;
        diff->minutes+=60;
    }

    if (diff->seconds<0)
    {
        diff->minutes=diff->minutes-1;
        diff->seconds+=60;
    }
    
}