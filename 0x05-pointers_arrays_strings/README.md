Pointers,arrays, strings and data structures
Memory layouts

What are Pointers?
A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant, you must declare a pointer before using it to store any variable address. The general form of a pointer variable declaration is −

type *var-name;
Here, type is the pointer's base type; it must be a valid C data type and var-name is the name of the pointer variable. The asterisk * used to declare a pointer is the same asterisk used for multiplication. However, in this statement the asterisk is being used to designate a variable as a pointer.


What are Arrays?
Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index.

All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array as follows −

type arrayName [ arraySize ];
This is called a single-dimensional array. The arraySize must be an integer constant greater than zero and type can be any valid C data type. For example, to declare a 10-element array called balance of type double, use this statement −

double balance[10];
Here balance is a variable array which is sufficient to hold up to 10 double numbers.

What are Strings?
Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null.

The following declaration and initialization create a string consisting of the word "Hello". To hold the null character at the end of the array, the size of the character array containing the string is one more than the number of characters in the word "Hello."

char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
If you follow the rule of array initialization then you can write the above statement as follows −

char greeting[] = "Hello";

What is Memory Layout?
Basically, the memory layout of C program contains five segments these are the stack segment, heap segment, BSS (block started by symbol), DS (Data Segment) and text segment.

Each segment has own read, write and executable permission. If a program tries to access the memory in a way that is not allowed then segmentation fault occurs.

A segmentation fault is a common problem that causes programs to crash. A core file (core dumped file) also associated with a segmentation fault that is used by the developer to finding the root cause of the crashing (segmentation fault).

Below find the memory Layout of C Program
Note:  You must remember that this is only an example. The actual static memory layout is specific to the processor, development tools, and the underlying hardware.

1. Stack
2. Heap
3. BSS (Uninitialized data segment)
4. DS (Initialized data segment)
5. Text
