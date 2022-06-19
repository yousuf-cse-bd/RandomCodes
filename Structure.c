/******
 * C STURUCTURE
 * 1. Only Data members are allowed, It can not have member function
 * 2. Can not have static members
 * 3. Cann't have a constrcutor
 * 4. Direct initialization of data member is not possible
 * 5. Writing the 'struct' keyword is necessary to declare structur-type variable
 * 6. Do not have access modifier
 * 7. Only pointer to structs ara allowed
 * 8. Sizeof() operator will generate 0/1 for an empty structure (Here dout 0 / 1)
 * 9. Data hiding is not possible
 */

// #include <stdio.h>

// //Structure does not support constructor or function.
// //Only Support Member Variables
// struct Structure
// {
    
// };


// int main(int argc, char const *argv[])
// {
//     /* code */
//     struct Structure s;
//     printf("%lu\n", sizeof(s));
//     return 0;
// }

// C program to illustrate empty structure

#include <stdio.h>

// empty structure
struct Record {
};

// Driver Code
int main()
{
	struct Record s;
	printf("%lu\n", sizeof(s));
	return 0;
}
   
