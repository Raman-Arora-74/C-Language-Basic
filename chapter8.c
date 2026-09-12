#include<stdio.h>
#include<string.h>
// Strings 
// A character array terminated by a '\0' (null character)
// null character denotes string termination
// Example
// char name[] = {'R','A','M','A','N','\0'};
// int main(){
//     // Initialising Strings
//     // char name[] = {'R','A','M','A','N','\0'};
//     char name[] = "RAMAN";
//     return 0;
// }
// Create a String firstName & lastName to store details of user & print all the characters using a loop.

// void printString(char arr[]);
// int main(){
//     char firstName = "Ramandeep";
//     char secondName = "Singh";
//     printString(firstName);
//     printString(secondName);
//     return 0;
// }
// void printString(char arr[]){
//     for(int i = 0;arr[i]!='\0';i++){
//         printf("%c\t",arr[i]);
//     }
//     return;
// }

// String Format Specifier
// "%s"
// char name[] = "Raman";
//printf("%s",name);
// scanf("%s",name)
// int main(){
//     char name[50];
//     scanf("%s",name);
//     printf("Your name is %s",name);
//     return 0;
// }

// Question Ask the user to enter their firstName & print it back to them. 
// Aslo try this with their fullName

// int main(){
//     char firstName[30];
//     printf("Enter Your Name : ");
//     scanf("%s",firstName);
//     printf("Welcome %s in the world of Pokemon !\n",firstName);
//     return 0;
// }

// int main(){
//     char fullName[60];
//     printf("Enter Your Name : ");
//     scanf("%s",fullName);
//     printf("Your Full name is : %s\n",fullName);
//     return 0;    
// }

// Important 
// scanf() cannot input multi-word strings with spaces 
//Here,
//gets() & puts() come into picture

// String Functions 
/*
gets(str) input a string(even multiword) Dangerous & Outdated
puts(str) output a string
fgets(str,n,file) stops when n-1 chars input or new line is entered
*/
// int main(){
//     char str[100];
//     gets(str);
//     puts(str);
//     return 0;
// }

// int main(){
//     char str[100];
//     fgets(str,100,stdin);
//     puts(str);
//     return 0;
// }

// String using Pointers

// char *str = "Hello world";
/*
Store string in memory & the assigned 
addressed is stored in the char poniter 'str'
*/
// char *str = "Hello World";// can be reinitiliazed
// *str = "Hello"
// *str = "World"
// char str[] = "Hello World";
//cannot be reinitizlized 
// int main(){
//     char *str = "Hello World";
//     puts(str);
//     str = "Hello"; // ku ider *str ka use nahi hua kyuki address change nahi karna tha 
//     puts(str);
//     return 0;
// }

//Question Make a program that inputs user's name & prints its lenght.

// int len(char *str);
// int main(){
//     char userName[50];
//     printf("Enter your name : ");
//     fgets(userName,50,stdin);
//     printf("Your Name is : ");
//     puts(userName);
//     int lenghtOfString = len(userName);
//     printf("The Lenght of your Name is : %d",lenghtOfString);
//     return 0;
// }
// int len(char *str){
//     int lengthOStr = 0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]){
//             lengthOStr++;
//         }

//     }
//     return lengthOStr-1;
// }

// Standard Library Functions
//<string.h>
/*
1. strlen(str)
count number of characters excluding '\0'
*/

// int main(){
//     char name[] = "Raman";
//     int length = strlen(name);
//     printf("Length of the name is %d",length);
// }
// 2 strcpy(newStr,oldStr)
// Copies value of old string to new string

// int main(){
//     char oldStr[] = "oldStr";
//     char newStr[] = "newStr";
//     strcpy(newStr,oldStr);
//     printf(newStr); // Why we can print newStr instead of a integer
// }
// concatenates first strign with second string
// strcat(firstStr,secStr)
// int main(){
//     char firstStr[30] = "Hello ";
//     char secStr[] = "World";
//     strcat(firstStr,secStr);
//     puts(firstStr);
// }
// strcmp(firstStr,secStr)
// compares 2 strings & returns a value 
// 0 -> string equal
// positive -> first > second (ascii)
// negative -> first < second (ascii)

// int main(){
//     char firstStr[] = "HHHA";
//     char secStr[] = "HHHB";
//     printf("%d",strcmp(firstStr,secStr));
// }

// int main(){
//     char str[100];
//     char ch;
//     int i = 0;
//     while(ch !='\n'){
//         scanf("%c",&ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
// }

// Question Find the salted form of a password entered by user if they salt is "123" & added at the end.
// void cat(char *str);
// int main(){
//     char password[100];
//     fgets(password,100,stdin);
//     cat(password);
//     printf(password);
//     return 0;
// }
// void cat(char *str){
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i+1] == '\n'){
//             // printf("%c",str[i+1]);
//             str[i+1] = '1';
//             // printf("%c",str[i+1]);
//             str[i+2] = '2';
//             // printf("%c",str[i+2]);
//             str[i+3] = '3';
//             // printf("%c",str[i+3]);
//             str[i+4] = '\0';
//             // printf("%c",str[i+4]);
//         }
//     }
// }

// simple way 

// void salting(char password[]);
// int main(){
//     char password[100];
//     scanf("%s",password);
//     salting(password);
// }
// void salting(char password[]){
//     char salt[] = "123";
//     char newPass[200];
//     strcpy(newPass,password);
//     strcat(newPass,salt);
//     puts(newPass);
// }

// Question write a functino named slice, which takes a string & returns a sliced string from index n to m

// void slice(char str[],int n,int m);
// int main(){
//     char str[11] = "Hello bhai";
//     int m = 8,n = 3;
//     slice(str,n,m);
// }
// void slice(char str[],int n,int m){
//     // update
//     char newStr[100];
//     int j = 0;
//     for(int i = n;i<=m;i++,j++){
//         newStr[j] = str[i];
//         if(i==m){
//         }
//     }
//     newStr[j] = '\0';
//     printf(newStr);
// }
// int vowel(char str[]);
// int main(){
//     char str[] ="Hello World";
//     int cou = vowel(str);
//     printf("%d",cou);
// }
// int vowel(char str[]){
//     int count = 0;
//     for(int i = 0;str[i]!='\0';i++){
//         if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
//             count++;
//         }
//     }
//     return count;
// }
// Question Check if a given character is prent in a string or not
// int checkChar(char str[],char n);
// int main(){
//     char n = 'W';
//     char str[] ="Hello world";
//     int idx = checkChar(str,n);
//     printf("The character is present in index %d\n",idx);
// }
// int checkChar(char str[],char n){
//     for(int i = 0;str[i]!='\0';i++){
//         if(str[i] == n){
//             printf("The character is present in the string\n");
//             return i;
//         }
//     }
//     printf("The character is not present ! T_T\n");
// }