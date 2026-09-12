#include<stdio.h>
#include<string.h>
#include<math.h>

// Prototype Declaration
// void printHello();

// Fuinctioon Definition
/*
void printHello(){
    printf("Hello");
}*/


// Function Call 

/*
int main(){
    printHello();
    return 0;
}*/
// Declaration / prototype
// void printHello();

// int main(){
//     printHello(); // Function Call
//     printHello(); // Function Call
//     printHello(); // Function Call
//     return 0;
// }

// // Function Definition
// void printHello(){
//     printf("Hello World\n");
//     printf("My name is Raman \n");
// }

// Question Write 2 Function - one to print "Hello" & Second to print "Good bye".

// void helloFunction();
// void goodBye();

// int main(){
//     printf("The First Function Call \n");
//     helloFunction();
//     printf("The Second Function call \n");
//     goodBye();
//     printf("Both the Function are called\n");
//     return 0;
// }

// void helloFunction(){
//     printf("Hello !\n");
// }

// void goodBye(){
//     printf("Good Bye :) \n");
// }

// Question write a function that prints Namaste if user is Indian & Bonjour if the user is French.

// void namaste();
// void bonjour();

// int main(){
//     char greet[20];
//     printf("Where are you from ?\n");
//     scanf("%s",&greet);
//     if(strcmp(greet,"india")==0){
//         namaste();
//     }
//     else if(strcmp(greet,"france")==0){
//         bonjour();
//     }
//     else{
//         printf("Can't find Correct Greeting !\n");
//     }
//     return 0;
// }

// void namaste(){
//     printf("Namaste !\n");
// }
// void bonjour(){
//     printf("Bounjour !\n");
// }


// Properties
// Execution always starts from main
// A function gets called directly or indirectly from main
// There can be multiple functions in a program


// Function Types 1. Libraray Function Special function inbuild in C ex. scanf(),printf() 
// Types 2. User-defined Function declared & defined by prgorammer

// Passing Arguments 
// Functions can take value & give some value
// take parameter and give return value
// passing arguments 
// void printHello();
// void printTable(int n);
// int sum(int a,int b);

// int sum(int a, int b);

// int main(){
//     int a;
//     int b;
//     printf("Enter Value For A and B (Sum) -> \n");
//     scanf("%d%d",&a,&b);
//     printf("Call the Function For Addition \n");
//     int sum = sum(a,b); // argument / actual parameter
//     printf("%d",one);
//     return 0;
// }
// int sum(int a, int b){// parameter / formal parameter
//     printf("A[%d] + B[%d] = %d\n",a,b,a+b);
//     return a + b;
//} 

// void calculatePrice(float value);

// int main(){
//     float value = 100.0;
//     calculatePrice(value);
//     printf("Value is : %f\n",value);
//     return 0;
// }


// void calculatePrice(float value){
//     value = value + (0.18*value);
//     printf("Final price is : %f\n",value);
// }

// Question write a code to find n value square
// int main(){
//     int n;
//     printf("Enter the value for n : ");
//     scanf("%d",&n);
//     printf("%f",pow(n,2));
//     return 0;
// }

// Write functions to calculate area of a square, a circle & a rectangle.

// float squareArea(float side);
// float circleArea(float rad);
// float rectangle(float a , float b);

// int main(){
//     char n;
//     float num;
//     float num1;
//     float result;
//     printf("Enter s(square), c(circle), r(rectangle) : \n");
//     scanf("%c",&n);
//     if(n =='s'){
//         printf("Enter the Side of Square =  \n");
//         scanf("%f",&num);
//         result = squareArea(num);
//         printf("The Area is %f\n",result);
//     }
    
//     else if(n =='c'){
//         printf("Enter the radius of Circle =  \n");
//         scanf("%f",&num);
//         result = circleArea(num);
//         printf("The Area is %f\n",result);
//     }
    
//     else if(n =='r'){
//         printf("Enter the both side of Rectangle =  \n");
//         scanf("%f %f",&num,&num1);
//         result = rectangle(num,num1);
//         printf("The Area is %f\n",result);
//     }
    
//     else {
//         printf("The input is wrong Retry!\n");
//     }
    
//     return 0;
// }
// float squareArea(float side){
//     return side * side;
// }
// float circleArea(float rad){
//     return 3.14 * rad * rad;
// }
// float rectangle(float a, float b){
//     return a * b;
// }

// Recursion

// When a function call itself, it's called recursion

// Question print "Hello World" 5 times.

// void printHW(int count);

// int main() {
//     printHW(5);
//     return 0;
// }
// void printHW(int count){
//     if(count == 0){
//         return;
//     }
//     printf("Hello World\n");
//     printHW(count - 1);
// }

// Recursion

// int sumNatural(int n);
// int main(){
//     int n = 4;
//     if(n > 0){
//         int a = sumNatural(n);
//         printf("The sum is : %d",a);
//     }
//     else{
//         printf("Retry Not Valid Input!\n");
//     }
//     return 0;
// }
// int sumNatural(int n){
//     if(n == 1){
//         return 1;
//     }
//     int sumNm1 = sumNatural(n-1);
//     int sumN = sumNm1 + n;
//     return sumN;

// }

// I don't understand what logic implement here but if you know see this diagram to clarify

// sum(5) -> 15
// sum(4) + 5 -> 10 + 5 = 15
// sum(3) + 4 -> 6 + 4 = 10
// sum(2) + 3 -> 3 + 3 = 6
// sum(1) + 2 -> 1 + 2 = 3
// 1 = 1 

// int factorial(int n);

// int main(){
//     int n;
//     printf("Enter the value for n : \n");
//     scanf("%d",&n);
//     if(n > 0) {
//         int res = factorial(n);
//         printf("The factorial of %d is : %d",n,res);
//     }
//     return 0;
// }

// int factorial(int n){
//     if(n == 1){
//         return 1;
//     }
//     int factMn1 = factorial(n - 1);
//     int fact = factMn1 * n;
//     return fact;
// }


// Properties of Recursion

/*
a. Anthing that can be done with Iteration, can be done with recursion and vice - versa. 
b. recursion can sometimes give the most simple solution.
c. Base case is the condtion which stops recursion.
d. Iteration has infinite loop & Recursion has stack overflow
*/

// write a function to convert celsius to fahrenheit.
// f = (c * 9/5) + 32
// f = (0 * 0.18) + 32 = 32 f


// float convertTemp(float celsius);
// int main(){
//     float far = convertTemp(37);
//     printf("far : %f",far);
//     return 0;
// }

// float convertTemp(float celsius){
//     float far = celsius * (9.0/5.0) + 32;
//     return far;
// }

// Question Write a functio to calculate Percentage of a student from Marks in Science, Math & Sanskrit.

// float percentage(float a, float b, float c);

// int main(){
//     int hindi = 93;
//     int math = 63;
//     int science = 76;
//     float result = percentage(hindi,math,science);
//     printf("The Result of the Student : %f",result);
//     return 0;
// }

// float percentage(float a, float b, float c){
//     return (a + b + c)/3;
// }

// Question Write a function to print n terms of the fibonacci sequence.
// int fib(int n);

// int main(){
//     printf("%d\n",fib(6));
//     return 0;
// }

// int fib(int n) {
//     if(n == 0 || n == 1){
//         if(n == 0){
//             return 0;
//         }
//         else if(n == 1) {
//             return 1;
//         }
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     printf("fib of %d is : %d\n",n,fibN);
//     return fibN;
// }
