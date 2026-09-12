#include<stdio.h>

// loops :) while loop , do while loop , for loop

// For loop

// int main(){
//     // for(initialisation;condition;updation)
//     // do something 0
//     for(int i=1;i<=5;i = i +1){
//         printf("Hello World\n");
//     }
//     return 0;
// }

// int main(){
       // iterator ; counter
//     for(int i=10;i>=1;i = i - 1){
//         printf("%d \n",i);
//     }
//     return 0;
// }

// Question print the numbers from 0 to 10 

// int main(){
//     for(int i =0;i<11;i++){
//         printf("%d",i);
//     }
//     return 0;
// }

// int main(){
//     // increment operator 
//     // ++i (pre increment)
//     // i++ (post increment)
//     // ++i , i++
//     int i =1;
//     printf("%d \n",i++); // use, then increase
//     printf("%d \n",i);

//     printf("%d \n",++i); // increase, then use
//     printf("%d \n",i);

//     printf("%d \n",i--); // use, then decrease
//     printf("%d \n",i);

//     printf("%d \n",--i); // decrease, then use
//     printf("%d \n",i);
//     return 0;
// }

// int main(){
//     for(float i=1.0,i<=5.0;i++){
//         printf("%f \n",i);
//     }
//     for(char ch='a';ch<='z';ch++){
//         printf("%c \n",ch);
//     }
//     return 0;

// }

// infinite loop 

// int main(){
//     for(int i=1; ; i++){
//         printf("hello World \n");
//     }
//     return 0;
// }


// While loop 

// int main(){
//     // while(condition){
//     // do something 
//     //}
//     int i = 1;
//     while(i<=5){
//         printf("%d. Hello World ! \n",i);
//         i++;
//     }
// }

// Question Print the numbers from 0 to n, if n is given by user 
// n = 4
// int main(){
//     int n;
//     printf("Enter the Value of n : ");
//     scanf("%d",&n);
//     int i = 0;
//     while(i<=n){
//         printf("n = %d\n",i);
//         i++;    
//     }
//     return 0;
// }

// int main(){
//     int n;
//     printf("Enter the Value of n : ");
//     scanf("%d",&n);
//     int i;
//     for(i = 0;i<=n;i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// Do while loop 

// int main(){
//     // Do while loop
//     // do{
//     //do something 
//     //}while(condition);
//     int i = 1;
//     do{
//         printf("%d. Hello World \n",i);
//         i++;
//     }while(i<=5);
//     return 0;
// }

// Question Print the sum of First n Natural Numbers.

// int main(){
//     float n;
//     int sum = 0;
//     int i;
//     printf("Enter the Value for N : ");
//     scanf("%f",&n);
//     i = n;
//     do{
//         if(n != (int)n || n<=0){
//         printf("The Number is Not a Natural Number !\n");
//         break;
//         }
//         sum += i;
//         i--;
//     }while(i>0);
//     if(sum){
//         printf("The Sum of Natural Number is : %d",sum);
//     }    
//     return 0;
// }

// Question Print the table of a number input by the user.


// int main(){
//     int n;
//     int i;
//     printf("Enter the Value for n : ");
//     scanf("%d",&n);
//     for(i=1;i<=10;i++){
//         printf("%d * %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// int main(){
//     int n,k;
//     int i;
//     printf("Enter the Range for table  : ");
//     scanf("%d %d",&n,&k);
//     for(i=n;i<=k;i++){
//         printf("The Table of %d !\n",i);
//         for(int j=1;j<=10;j++){
//             printf("%d * %d = %d\n",i,j,i*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// break

// int main(){
//     for(int i=1; i<=5; i++){
//         if(i==3) {
//             break;
//         }
//         printf("%d\n",i);
//     }
//     printf("End");
//     return 0;
// }


// Question keep taking numbers as input from user until user enters and odd number.

// int main(){
//     int n;
//     for(int i = 1;  ; i++){
//         printf("Enter the Number : ");
//         scanf("%d",&n);
//         if(n%2 != 0){
//             printf("Found Odd Number ");
//             break;
//         }
//         printf("\nEven Number : %d\n",n);
//     }
//     return 0;
// }

// Question keep taking numbers as input from user until user enters a number which is multiple of 7.

// int main(){
//     int n;
//     for(int i = 1;  ; i++){
//         printf("Enter the Number : ");
//         scanf("%d",&n);
//         if(n%7 == 0){
//             printf("Found Number Divisible by 7");
//             break;
//         }
//         printf("\nN value  : %d\n",n);
//     }
//     return 0;
// }

// continue statement  -->  Skip to next iteration

// int main(){
//     for(int i=1; i<=5; i++) {
//         if(i == 3){
//             continue;
//         }
//         printf("%d \n",i);
//     }
//     return 0;
// }

// Question Print all numbers from 1 to 10 except fro 6. 

// int main(){
//     for(int i=1;i<=10;i++) {
//         if(i == 6){
//             continue;
//         }
//         printf("%d \n",i);
//     }
//     return 0;
// }

// Question print all the odd numbers from 5 to 50.

// int main(){
//     for(int i=5;i<=50;i++) {
//         if(i%2==0){
//             continue;
//         }
//         printf("Found Odd Number : %d\n",i);
//     }
//     return 0;
// }

// Question print the factorial of a number n 
 
// int main(){
//     int n;
//     int fact = 1;
//     printf("Enter the value for n = ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         fact *= i;
//     }
//     printf("The Factorial of n (%d) is : %d ",n,fact);
//     return 0;
// }

// Question Print reverse of the table for a number n.

// int main(){
//     int n;
//     printf("Enter the Value of N : ");
//     scanf("%d",&n);
//     printf("=======The Table of %d=======\n",n);
//     for(int i =10;i>=1;i--){
//         printf("%d * %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

//Question Calculate the sum of all numbers between 5 and 50. (including 5 & 50)

// int main(){
//     int sum = 0;
//     for(int i =5;i<=50;i++){
//         sum += i;
//     }
//     printf("The Sum is : %d",sum);
//     return 0;
// }
