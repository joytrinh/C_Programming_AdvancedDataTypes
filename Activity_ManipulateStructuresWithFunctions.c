/******************************************************************************

Activity: manipulate structures with functions

In this problem you will continue developing the data feature which you started implementing in the previous problem. You will implement a "tomorrow" feature in the C programming language via a function called "advanceDay()". The function advanceDay() should take as input a date (stored in a struct date) and return the date of the following day. You do not have to take into account leap years (although you may if you wish to). That is, it is okay for your function to always return March 1 as the day following February 28, no matter the year.

You are provided with a familiar date structure definition, a main function as well as the function prototypes for the readDate(), printDate(), and advanceDate() functions. Do not modify any of the given code. Simply add your function definitions underneath the main() function. For the readDate() and printDate() functions you may simply copy and paste the code you developed in the previous task.

*******************************************************************************/
#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void printDate(struct date);
void readDate(struct date *);

struct date advanceDay(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

// Write your readDate(), printDate(), and advanceDate() functions here
void readDate(struct date * dat){
    scanf("%d",&dat->year);
    scanf("%d",&dat->month);
    scanf("%d",&dat->day);
}
void printDate(struct date dat){
    printf("%02d/%02d/%d\n", dat.month,dat.day,dat.year);
}
struct date advanceDay(struct date dat){
    struct date advDay;
    if(dat.month == 2 && dat.day == 28){
        advDay.day = 1;
        advDay.month = dat.month + 1;
        advDay.year = dat.year;
    } else if(dat.month == 12 && dat.day == 31){
        advDay.day = 1;
        advDay.month = 1;
        advDay.year = dat.year + 1;
    } else if((dat.month == 4 || dat.month == 6 || dat.month == 9 || dat.month == 11) && dat.day == 30){
        advDay.day = 1;
        advDay.month = dat.month + 1;
        advDay.year = dat.year;
    } else if((dat.month == 1 || dat.month == 3 || dat.month == 5 || dat.month == 7 || dat.month == 8 || dat.month == 10) && dat.day == 31){
        advDay.day = 1;
        advDay.month = dat.month + 1;
        advDay.year = dat.year;
    } else {
        advDay.day = dat.day + 1;
        advDay.month = dat.month;
        advDay.year = dat.year;
    }
    return advDay;
}