Resources
Read or watch:

Google
Youtube
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
How to use linked lists
Start to look for the right source of information without too much help
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
Don’t forget to push your header file
All your header files should be include guarded
More Info
Please use this data structure for this project:

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

Tasks 0 : Print list, a function that prints all the elements of a listint_t list.

Task 1 : List length, a function that returns the number of elements in a linked listint_t list

Task 2 : Add node, a function that adds a new node at the beginning of a listint_t list

Task 3 : Add node at the end, a function that adds a new node at the end of a listint_t list

Task 4 : Free list, a function that frees a listint_int list

Task 5 : Free, a function that frees a listint_t list

Tast 6 : Pop, a function that deletes the head node of a listint_t linked list, and returns the head node's data(n)

Task 7 : Get node at index, a function that returns the nth node of a listint_t linked list

Task 8 : Sum list, a function that returns the sum of all the data(n) of a listint_t linked list

Task 9 : Insert, a function that inserts a new node at a given position

Task 10 : Delete at index, a function that deletes the node at index index of a listint_t linked list

Task 11 : Reverse list, a function that reverses a listint_t linked list

Task 12 : Print(safe version), a function that prints a listint_t linked list

Task 13 : Free(safe version), a function that frees a listint_t list

Task 14 : Find the loop, a function that finds the loop in a linked list

