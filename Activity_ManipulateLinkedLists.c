/******************************************************************************

Activity: Manipulate linked lists

1. Suppose that we have defined a student record as follows:

struct student {
	char name[50];
	int age;
	struct student *next;
};
Suppose furthermore you have created a student database in the form of a linked list and suppose that the pointer start (of type struct student *) points to the beginning of this list.

How would you print the name and age of the first student in the list?
=> printf("%s is %d years old.", start->name, start->age);

2. As in the previous question, you have defined a student record as follows:

struct student {
	char name[50];
	int age;
	struct student *next;
};
and have created a student database in the form of a linked list with the pointer start (of type struct student *) pointing to the beginning of this list.

How would you print the name and age of the second student in the list?
=>printf("%s is %d years old.", start->next->name, start->next->age); 

3. Suppose you wanted to delete the third student in a linked list of five students. Why can't you simply free the space allocated for the third student?
=> By deleting the third student you'd loose access to the remaining students in the list. Instead, you'd need to link the second student to the fourth student in the list (and in order to do so, you need to know where the third student was pointing).
*******************************************************************************/