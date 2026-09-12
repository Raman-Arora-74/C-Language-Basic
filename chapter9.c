#include<stdio.h>
#include<string.h>
// Structures
/*

A collection of values of different data types

Example 
For a student store the following:
name(String)
roll no(Integer)
cgpa(Float)

*/

// Syntax
/*struct student{
char name[100];
int roll;
float cgpa;
};
struct student s1;
s1.cgpa = 7.5;
*/
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main(){
//     struct student s1;
//     s1.roll = 1665;
//     s1.cgpa = 9.2;
//     // s1.name = "Raman";
//     strcpy(s1.name,"Raman");
//     printf("Student Name = %s\nStudent RollNo = %d\nStudent CGPA : %f",s1.name,s1.roll,s1.cgpa);
//     return 0;
// }

// Structures are stored in contigous memory 

//Question Write a program to store the data of 3 students.

// struct student{
//     char name[100];
//     int rollNo;
// };
// int main(){
//     struct student st;
//     printf("Enter The Name of student : ");
//     scanf("%s",st.name);
//     printf("Enter the Rollno of Student : ");
//     scanf("%d",&st.rollNo);
//     printf("Name : %s\nRoll No : %d",st.name,st.rollNo);
//     return 0;
// }

// struct student{
//     int roll;
//     char name[100];
// };
// int main(){
//     struct student s1;
//     s1.roll = 1665;
//     strcpy(s1.name,"Mahesh");
//     printf("Student Name = %s\nStudent RollNo = %d\n",s1.name,s1.roll);
//     struct student s2;
//     s2.roll = 1666;
//     strcpy(s2.name,"Ragav");
//     printf("Student Name = %s\nStudent RollNo = %d\n",s2.name,s2.roll);
//     struct student s3;
//     s3.roll = 1667;
//     strcpy(s3.name,"Sohan");
//     printf("Student Name = %s\nStudent RollNo = %d\n",s3.name,s3.roll);
//     struct student s4;
//     strcpy(s4.name,"Subash");
//     s4.roll = 1668;
//     printf("Student Name = %s\n",s4.name);
//     printf("Student RollNo = %d\n",s4.roll);
//     return 0;
// }

// struct student{
//     int roll;
//     char name[100];
// };

// int main(){
//     struct student ECE[100];
//     ECE[0].roll = 1;
//     strcpy(ECE[0].name,"Ramesh");
//     printf("Student Name : %s\n",ECE[0].name);
//     printf("Student Roll No : %d\n",ECE[0].roll);
    
//     ECE[1].roll = 2;
//     strcpy(ECE[1].name,"Suresh");
//     printf("Student Name : %s\n",ECE[1].name);
//     printf("Student Roll No : %d\n",ECE[1].roll);
    
//     return 0;
// }
// Initializing Structures
/*
struct student s1 = {"rajat",1664,7.9};
struct student s2 = {"kumar",1665,8.2};
struct student s3 = {0};
*/
// struct student{
//     int roll;
//     char name[100];
// };
// int main(){
//     struct student s1 = {1664,"Ramesh"};
//     printf("Student Roll No %d",s1.roll);
// }

// Pointers to Structures
// struct student{
//     int roll;
//     char name[100];
// };
// int main(){
//     struct student s1 = {1664,"Ramesh"};
//     printf("Student Roll No %d\n",s1.roll);
//     struct student *ptr = &s1;
//     printf("student Roll No %d\n",(*ptr).roll);
//     return 0;
// }

// Arrow Operator
// (*ptr).code <--> ptr->code
// struct student{
//     int roll;
//     char name[100];
// };
// int main(){
//     struct student s1 = {1664,"Ramesh"};
//     printf("Student Roll No %d\n",s1.roll);
//     struct student *ptr = &s1;
//     printf("student Roll No %d\n",ptr->roll);
//     printf("Student Name : %s\n",ptr->name);
//     return 0;
// }
// Passing Stucture to function 
// Function Prototype
// void printInfo(struct student s1);

// struct student{
//     int roll;
//     char name[100];
// };
// void printInfo(struct student s1);

// int main(){
//     struct student s1 = {1664,"Ramesh"};
//     printInfo(s1);
//     return 0;
// }
// void printInfo(struct student s1){
//     printf("student Roll No %d\n",s1.roll);
//     printf("Student Name : %s\n",s1.name);
// }
// typedef keyword
// used to create alias for data types 
/*
typedef struct ComputerEngineeringStudent{
int roll;
float cgpa;
char name[100];
} coe;

coe student1;
*/
//   
// typedef struct students{
//     char name[100];
//     int roll;
// }stu;
// int main(){
//     stu s1 = {"Ramandeep singh",1022};
//     printf("Name : %s\nRoll No : %d\n",s1.name,s1.roll);
// };

// Question Enter address (house no, block, city, state) of 5 people.

// typedef struct addressOfPeople{
//     int houseNo;
//     char block[60];
//     char city[100];
//     char state[100];
// }aop;
// int main(){
//     aop people[2];
//     for(int i = 0;i<5;i++){
//         printf("Enter The House No : ");
//         scanf("%d",&people[i].houseNo);
//         getchar();
//         printf("Enter The Block Name : \n");
//         fgets(people[i].block,60,stdin);
//         printf("Enter The City Name : \n");
//         fgets(people[i].city,100,stdin);
//         printf("Enter The State Name : \n");
//         fgets(people[i].state,100,stdin);
//         printf("The Person %d is Address recieved\n",i+1);
//     }
//     for(int i = 0;i<5;i++){
//         printf("Person %d Address : \n",i+1);
//         printf("House Number : %d\n",people[i].houseNo);
//         printf("Block Name : %s",people[i].block);
//         printf("City Name : %s",people[i].city);
//         printf("State Name : %s",people[i].state);
//     }
//     return 0;
// }
// why string not need address in the array and why int need & in scanf


// struct vector{
//     int x;
//     int y;
// };
// void clacSum(struct vector v1,struct vector v2, struct vector sum);
// int main(){
//     struct vector v1 = {5,10};
//     struct vector v2 = {3,7};
//     struct vector sum = {0};
//     clacSum(v1,v2,sum);
//     return 0;
// }
// void clacSum(struct vector v1,struct vector v2, struct vector sum){
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;
//     printf("Sum of x is : %d\n",sum.x);
//     printf("Sum of y is : %d\n",sum.y);

// }

// Question Create a structure to stroe copmlex numbers. (use arrow operator)

// typedef struct complex{
//     int real;
//     int img;
// }com;
// int main(){
//     com complexNumber = {10,20};
//     com *ptr = &complexNumber;
//     printf("The Real number : %d\n",ptr->real);
//     printf("The Imaginery number : %d\n",ptr->img);
//     return 0;
// }

// Question Make a structure to store Bank Accout Infomation oof a customer of ABC bank, Also, make an alias for it.

// typedef struct accountInformation{
//     char customer[100];
//     int amount;
// }ai;

// int main(){
//     ai bank = {"Ramesh",10000};
//     printf("The name of the customer is : %s\nThe Money deposited in bank is : %d",bank.customer,bank.amount);
//     return 0;
// }