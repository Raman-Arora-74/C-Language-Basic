#include<stdio.h>


// int main(){
//     char ch = 'm';
//     // If - else 
//     if(ch == 'm'){
//         // do something if True
//         printf('Monday');
//     }
//     else{
//         // do something if False
//         printf("no Monday"); 
//     }
// }


// int main(){
//     int age;
//     printf("Enter age : ");
//     scanf("%d",&age);
//     if(age > 18) {
//         printf("Adult \n");
//         printf("They can vote \n");
//         printf("They can drive \n");
//     }
//     else {
//         printf("Not Adult \n");
//     }
//     printf("Thank You");
//     return 0;
// }


// int main(){
//     int age;
//     printf("Enter age : ");
//     scanf("%d",&age);
//     if(age > 18) 
//         printf("Adult \n");
//     else 
//         printf("Not Adult \n");
//     printf("Thank You");
//     return 0;
// }


// int main(){
//     int marks;
//     printf("Enter marks : ");
//     scanf("%d",&marks);
//     if(marks > 90) {
//         printf("A + Grade \n");
//         printf("You are Good Student\n");
//     }
//     else if(marks <=90 && marks > 80){
//         printf(" A Grade \n");
//         printf(" You got a good Grade\n");
//     }
//     else{
//         printf("Fail\n");
//     }
//     printf("Thank You");
//     return 0;
// }


// If you want to check all the condition is true or wrong unlike if else if choose if and if again and again how many condition you want to check

// Ternary Operator 

// Syntax Condtion ? doSomething if True : dosomething if False;


// int main(){
//     int age;
//     printf("Enter age : ");
//     scanf("%d",&age);
//     age >=18 ? printf("Adult \n") : printf("Not Adult \n");

//     return 0;
// }


// Switch 


// int main(){
//     int day;
//     printf("Enter Day(1-7) : ");
//     scanf("%d",&day);
//     switch(day){
//         case 1 : printf("Monday\n");
//         break;
//         case 2 : printf("Tuesday\n");
//         break;
//         case 3 : printf("Wednesday\n");
//         break;
//         case 4 : printf("Thursday\n");
//         break;
//         case 5 : printf("Friday\n");
//         break;
//         case 6 : printf("Saturday\n");
//         break;
//         case 7 : printf("Sunday\n");
//         break;
//         default : printf("Not a valid day ! \n");
//     }
//     return 0;
// }

// int main() {
//     int number;
//     printf("Enter Number : ");
//     scanf("%d",&number);
//     (number>=0) ? printf("The Number is Positive\n") : printf("The Number is Negative\n");
//     printf(":)");
//     return 0;
// }

// int main() {
//     int number;
//     printf("Enter Number : ");
//     scanf("%d",&number);
//     if(number>=0){
//         printf("The number is Positive !\n");
//         if(number<=99 && number>10){
//             printf("The number is a Two Digit Number\n");
//         }
//         else{
//             printf("The number is a One Digit or More then Two Digit\n");
//         }
//     }
//     else{
//         printf("The number is Negative !\n");
//     }
//     printf("The Outdoor print Hello :) Biro ");
//     return 0;
// }

// Question ?Write a program to check if a student passed or failed.

// int main(){
//     int marks;
//     printf("Enter the Student marks : ");
//     scanf("%d",&marks);
//     if(marks>=30 && marks<=100){
//         printf("The Student is Pass with this number : %d\n",marks);
//     }
//     else if(marks<30) {
//         printf("The Student is fail with this number : %d\n",marks);
//     }
//     else{
//         printf("The Wrong Value for marks it should be comes under (0-100)\n");
//     }
//     printf("The Student Clearly declared");
//     return 0;
// }

// Question Write a program to give grades to a student 

// int main(){
//     int marks;
//     printf("Enter the marks of Student : ");
//     scanf("%d",&marks);
//     if(marks < 30){
//         printf("The Student Got C Grade\n");
//     }
//     else if(marks >=30 && marks < 70){
//         printf("The Student Got B Grade\n");
//     }
//     else if(marks >=70 && marks < 90) { 
//         printf("The Student Got A Grade\n");
//     }
//     else if(marks >=90 && marks <=100) {
//         printf("The Student Got A + Grade\n");
//     }
//     else{
//         printf("The Marks are Wrong It should be in (0 - 100)\n");
//     }
// }

// Check the code and tell is it give error or print first statement or second statment

// int main(){
//     int x = 2;
//     if(x=1) { 
//         printf("X is equal to 1\n");
//     }
//     else { 
//         printf("X is not equal to 1\n");
//     }
//     return 0;
// }

// Question Write a program to find if a character entered by user is upper case or not.

// int main() {
//     char ch;
//     printf("Enter a Character : ");
//     scanf("%c",&ch);
//     if(ch >='A' && ch<='Z'){
//         printf("The Character is in Upper case : %c\n",ch);
//     }
//     else if(ch >='a' && ch<='z'){
//         printf("The Character is not in Upper case");
//     }
//     else{
//         printf("There is no alphabate written by user !");
//     }
//     return 0;
// }

// Question a Write a programn to check if a given number is Armstrong number or not 

// Write a program to check if the given nmber is a natural number.

// int main(){
//     float n;
//     printf("Enter the Number to see Whether it is Natural number or not : ");
//     scanf("%f",&n);
//     (n == (int)n && n>0) ? printf("The Number is Natural Number") : printf("The Number is not a Natural Number");
//     return 0;
// }