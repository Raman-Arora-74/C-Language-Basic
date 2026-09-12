#include<stdio.h>
// Arrays 
// collection of similar data types stored at contiguous memory locations

// int main(){
//     // int marks1 = 97;
//     // int marks2 = 98;
//     // int marks3 = 89;
//     // int mark[] = {97,98,89};
//     // Syntax
//     // int marks[3]; , char name[10];, float price[2];
//     // input & output
//     // scanf("%d",&marks[0]);
//     // printf("%d",marks[0]);
//     int marks[3];
//     printf("enter phy : ");
//     scanf("%d",&marks[0]);
//     printf("enter chs : ");
//     scanf("%d",&marks[1]);
//     printf("enter math : ");
//     scanf("%d",&marks[2]);
//     printf("phy = %d, chem = %d, math = %d",marks[0],marks[1],marks[2]);
//     return 0;

// }

// Question Write a program to enter price of 3 items & print their final cost with gst.

// int main(){
//     int item[3];
//     printf("Enter the First item : ");
//     scanf("%d",&item[0]);
//     printf("Enter the Second item : ");
//     scanf("%d",&item[1]);
//     printf("Enter the Third item : ");
//     scanf("%d",&item[2]);
//     int gst = 30;
//     printf("Rice : %d, Flover : %d, Corn : %d",item[0]+(item[0]*gst/100),item[1]+(item[1]*gst/100),item[2]+(item[2]*gst/100));
//     return 0;
// }

// Better way 
// int main(){
//     float price[3];
//     printf("Enter 3 prices : ");
//     scanf("%f",&price[0]); ye 3 bar ku likha hai ek hi se ho jata 
//     scanf("%f",&price[1]);
//     scanf("%f",&price[2]);

//     printf("total price 1 : %f\n",price[0] +(0.18*price[0]));
//     printf("total price 2 : %f\n",price[1] +(0.18*price[1]));
//     printf("total price 3 : %f\n",price[2] +(0.18*price[2]));
//     return 0;

// }

// Inititalization of Array
// int marks[] = {97,98,89};
// int marks[3] = {97,98,89};
// int main(){
//     float price[3] = {98.00,100.00,23.00};
//     printf("total price 1 : %f\n",price[0] +(0.18*price[0]));
//     printf("total price 2 : %f\n",price[1] +(0.18*price[1]));
//     printf("total price 3 : %f\n",price[2] +(0.18*price[2]));
//     return 0;
// }

// Pointer Arithmetic 
// Pointer can be incremented & decremented 
// case 1 
// int age = 22;
// int *ptr = &age;
// ptr++;
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     printf("ptr = %u\n",ptr);
//     ptr++;
//     printf("ptr = %u\n",ptr);
//     ptr--;
//     printf("ptr = %u\n",ptr);
//     return 0;
// }
// case 2
// int main(){
//     float price = 20.00;
//     float *ptr = &price;
//     printf("ptr = %u\n",ptr);
//     ptr++;
//     printf("ptr = %u\n",ptr);
//     ptr--;
//     printf("ptr = %u\n",ptr);
//     return 0;
// }
// int main(){
//     char star = '*';
//     char *ptr = &star;
//     printf("ptr = %u\n",ptr);
//     ptr++;
//     printf("ptr = %u\n",ptr);
//     ptr--;
//     printf("ptr = %u\n",ptr);
//     return 0;
// }

// Ye question puchana hai 
// int main(){
//     int age = 35;
//     int _age = 32;
//     int *ptr = &age;
//     int *_ptr = &_age;
//     printf("Ptr 1 : %u, Ptr 2 : %u = difference = %u\n",ptr,_ptr,ptr-_ptr);
//     _ptr=&age;
//     printf("comparison = %u\n",ptr == _ptr);
//     return 0;
// }

// Array is a pointer

// int *ptr = &arr[0];
// int *ptr = arr;
// because arr is repersenting the zeroth term of array


// Traverse an Array 

// iunt aadhar[10];
// int *ptr = *aadhar[0];
// int main(){
//     int aadhar[5];

//     //input 
//     int *ptr = &aadhar[0];
//     for(int i=0;i<5;i++){
//         printf("%d index : \n",i);
//         scanf("%d\n",(ptr+i));

//     }

//     for(int i =0;i<5;i++){
//         printf("%d index : %d\n",i,*(ptr+i));
//         // printf("%u\n"(ptr+i));

//     }
//     return 0;
// }

// int power(int a,int b);
// int main(){
//     int res = power(2,5);
//     printf("Result : %d\n",res);
//     return 0;
// }
// int power(int a,int b){
//     if(b == 0){
//         return 1;
//     }
//     return a * power(a,b-1);
// }

// int sumOfDigits(int n);
// int main(){
//     int res = sumOfDigits(256);
//     printf("Result : %d\n",res);
//     return 0;
// }
// int sumOfDigits(int n){
//     if(n == 0){
//         return 0;
//     }
//     return n % 10 + sumOfDigits(n/10);
// }

// int count(int n);
// int main(){
//     int n = 2;
//     int res = count(n);
//     printf("Result : %d\n",res);
// }
// int count(int n){
//     if(n == 0){
//         return 0;
//     }
//     return 1 + count(n/10);
// }

// void printReverse(int n);
// int main(){
//     int n  = 256;
//     printReverse(n);
//     return 0;
// }
// void printReverse(int n){
//     if(n == 0){
//         return;
//     }
//     printReverse(n/10);
//     printf("%d ",n%10);
// }

// int fib(int n);
// int main(){
//     int n = 6;
//     int res = fib(n);
//     printf("Result : %d\n",res);
//     return 0;
// }
// int fib(int n){
//     if(n == 0 || n == 1){
//         if(n == 0){
//             return 0;
//         }
//         if(n == 1){
//             return 1;
//         }
//     }
//     return fib(n-1) + fib(n-2);
// }



// Arrays as Function Argument
// function Declaration
// void printNumbers(int arr[],int n)
// or
// void printNumbers(int *arr,int n)

// function call
//printNumbers(arr,n)

// void printNumbers(int *arr,int n);
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printNumbers(arr,6);
//     return 0;
// }
// void printNumbers(int *arr, int n){
//     for(int i=0; i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

// }

// Multidimensional Arrauys
// 2 D arrays
// int arr[][] = {{1,2},{3,4}};
// Access
//arr[0][0] -> 1
//arr[0][1] -> 2
//arr[1][0] -> 3
//arr[1][1] -> 4

// int main(){
//     int marks[2][3];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("Enter the Marks of Student : \n");
//             scanf("%d",&marks[i][j]);
//         }
//         printf("Complete Marks of Student %d !\n",i+1);
//     }
//     for(int i=0;i<2;i++){
//         printf("Marks Of Student %d -> \n",i+1);
//         for(int j=0;j<3;j++){
//             printf("%d\n",marks[i][j]);
//         }
//         printf("Marks Shown Of Student %d\n",i+1);
//     }
// }

// Question write a function to count the number of odd numbers in an array.

// int countOdd(int *arr,int n);
// int main(){
//     int arr[] = {1,2,3,5,5,6};
//     int res = countOdd(arr,6);
//     printf("Result : %d\n",res);
//     return 0;
// }
// int countOdd(int *arr,int n){
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2 != 0){
//             count++;
//         }
//     }
//     return count;
// }


// Question write a function to reverse an array.
// int reverseArr(int *arr,int n);
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = 5;
//     int ar[] = reverseArr(arr,n);
//     for(int i=0;i<n;i++){
//         printf("%d\n",ar[i]);
//     }
//     return 0;
// }
// int reverseArr(int *arr,int n){
//     int ar[n];
//     for(int i=0;i<n;i++){
//         ar[i] = arr[n-(i+1)];
//     }
//     return ar[n];
// }

// classic mode
/*
for(int i=0;i<n/2;i++){
first value = arr[i];
second val = arr[n-i-1];
arr[i] = second val;
arr[n-i-1] = first val;
}*/

// Question write a program to store the first n fibonacci numbers.
// int main(){
//     int n = 10;
//     int arr[n];
//     int *ptr =arr;
//     for(int i = 0;i<n;i++){
//         if(i == 0){
//             *ptr = 0;
//             ptr++;
//         }
//         if(i == 1){
//             *ptr = 1;
//             ptr++;
//         }
//         if(i!=0 && i!=1){
//             *ptr = *(ptr-1) + *(ptr-2);
//             ptr++;
//             }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }

// int main(){
//     int n = 10;
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
//     for(int i = 2;i < n; i++){
//         fib[i] = fib[i-1] + fib[i-2];
//     }
//     for(int i = 0;i < n; i++){
//         printf("%d\t",fib[i]);
//     }
// }
// int main(){
//     int table[2][10];
//     for(int i = 0;i<2;i++){
//         printf("Table of %d\n",i+2);
//         for(int j =0;j<10;j++){
//             printf("%d * %d = %d\n",i+2,j+1,(i+2)*(j+1));
//             table[i][j] = (i+2)*(j+1);
//         }
//     }
//     for(int i = 0;i<2;i++){
//         printf("Table of %d\n",i+2);
//         for(int j =0;j<10;j++){
//             printf("%d\t",table[i][j]);
//         }
//     }
// }

/*
void storeTable (int arr[][],int n, int m, int number);
int main(){
int tables[2][10];
storeTable(tables,0,10,2);
storeTable(tables,1,10,3);
return 0;
void storeTable(int arr[][],int n, int m, int number){
for(int i=0;i<m;i++){
arr[n][m] = number * (i+1);
}
}
}*/
//a. In an array of numbers, find how many times does a number 'x' occurs.
//b. Write a program to print the largest number in an array.
//c. Write a program to insert an element at the end of an array.

// int findX(char arr[],int n);
// int main(){
//     char arr[10] = {'a','b','c','x','y','y','w','x','w','x'};
//     int n = 10;
//     int res = findX(arr,n);
//     printf("%d\n",res);
//     return 0;
// }
// int findX(char arr[],int n){
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == 'x'){
//             count++;
//         }
//     }
//     return count;
// }