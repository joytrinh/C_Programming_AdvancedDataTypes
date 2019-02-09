/******************************************************************************

Activity: array of structures

1. You have defined a structure as follows:

struct point{
	double x;
	double y;
  };
You would now like to declare an array of 5 such points (a pentagon!).

Which of the following is the correct way to do so?
struct point pentagon[5];

2. You have defined a structure struct point as above as well as successfully declared a variable named pentagon as an array of five such points. You would like to assign the value 4.1 to the y-coordinate of the fifth point in pentagon.

Which of the following are the correct ways to do so? Check all that apply.
pentagon[4].y = 4.1; struct point is NOT a pointer
(pentagon+4)->y = 4.1; struct point is a pointer

*******************************************************************************/
