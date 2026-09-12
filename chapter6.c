// Pointers
// A variable that stores that memory address of another variable
#include<ctype.h>
#include<stdio.h>
// * stands for value at address and & stands for address of
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;
//     printf("Adress of Age : %d \nAge : %d\nPointer : %d\n new Age : %d\n",&age,age,&ptr,&_age);
//     return 0;
// }

// Formate Specifier %p %u
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;
//     // address
//     printf("%u\n",_age);
//     printf("%u\n",&age);
//     printf("%u\n",*ptr);
//     printf("%u\n",&ptr);
//     return 0;
// }

// Value at address

// int main(){
//     int age = 22;
//     int *ptr = &age;
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",*(&age));
// }

// Question Find output
// Declare pointer and x variable
// code logic is right but compilar is giving error
// int *ptr;
// int x;
// // ptr = address of x 
// ptr = &x;
// // * ptr = 0 means jo bhi value hai ptr address pe vo 0 kar de 
// *ptr = 0;
// // x = 0
// printf("x = %d\n",x);
// // *ptr = 0
// printf(" *ptr = %d\n",*ptr);
// // ptr ke ander value main 5 integer se increment means value will be 5
// *ptr += 5;
// // x = 5
// printf("x = %d\n",x);
// // *ptr = 5
// printf("*ptr = %d\n",*ptr);
// //pre increment means 1 plus after this means value will be 6 
// (*ptr)++;
// // x = 6
// printf("x = %d\n",x);
// // *ptr = 6
// printf("*ptr = %d\n",*ptr);


// Pointer to Pointer

// A Variable that stores that memory address of another pointer


// Syntax 

// int **pptr;
// char **pptr;
// float **pptr;
// print the value of i from its pointer to pointer
// int main(){
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;
//     int ***pptrr = &pptr;
//     printf("%d\n",***pptrr);
//     return 0;

// }


// Pointers in function call 
// Call by value We pass value of variable as argument 
// call by reference We pass address of variable as argument 

// void square(int n);
// void _square(int* n);
// int main(){
//     int number = 4;
//     square(number);
//     printf("number = %d\n",number);
//     _square(&number);
//     printf("number = %d\n",number);
//     return 0;
// }
// // call by value
// void square(int n){
//     n = n * n;
//     printf("Square = %d\n",n);

// }
// void _square(int* n){
//     *n = (*n)*(*n); // 4 * 4
//     printf("Square = %d\n",*n);
// }

// Question Swap 2 numbers, a & b.
// int main(){
//     int a = 3;
//     int b = 5;
//     int c;
//     int *ptr = &a;
//     int *pptr = &b;
//     c = *pptr;
//     b = *ptr;
//     int *pptrr = &c;
//     a = *pptrr;
//     printf("A : %d\nB : %d",a,b);
//     return 0;
// }

// void swap(int* a,int* b);

// int main(){
//     int a = 3;
//     int b = 5;
//     printf("A : %d\nB : %d\n",a,b);
//     swap(&a,&b);
//     printf("A : %d\nB : %d\n",a,b);
//     return 0;
// }

// void swap(int* a,int* b){
//     int t = *a;
//     *a = (*b);
//     *b = t;
//     printf("A = %d\nB = %d",*a,*b);
// }

// Will the address output be same? 


// void printAddress(int n);

// int main(){
//     int n = 4;

//     printf("%p\n",&n);
//     printAddress(n);
//     return 0;
// }
// void printAddress(int n){
//     printf("%p\n",&n);
// }

// void spa(int *a,int *b,int *sum,int *product,int *average);
// int main(){
//     int a = 5;
//     int b = 3;
//     int average;
//     int product;
//     int sum;
//     spa(&a,&b,&sum,&product,&average);
//     printf("Sum : %d\nProduct : %d\nAverage : %d\n",sum,product,average);
//     return 0;
// }

// void spa(int *a,int *b,int *sum,int *product,int *average){
//     *sum = (*a) + (*b);
//     *product = (*a) * (*b);
//     *average = ((*a) + (*b))/2;
//     printf("Sum : %d\nProduct : %d\nAverage : %d\n",*sum,*product,*average);
// }

// Try to use int a and int b because we don't have to change variable in main function so i make mistake so don't try again

// Write a program in C to find the maximum number between two numbers using a pointer.

// int main(){
//     int a = 10;
//     int b = 12;
//     int *ptr = &a;
//     if(*ptr > b){
//         printf("A is greater than B");
//     }
//     else{
//         printf("B is greater than A");
//     }
//     return 0;
// }

// Write a program in C to print the elements of an array in reverse order.


// Write a program in C to print all the letters in english alphabet using a pointer.

// void upper(char *a);
// int main(){
//     char a = 'a';
//     printf("%c\n",a);
//     upper(&a);
//     printf("%c\n",a);
//     return 0;
// }
// void upper(char *a){
//     *a = toupper(*a);
// }