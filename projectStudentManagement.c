// Student Management System
#include<stdio.h>
#include<string.h>
// question kaya hum terstionary operator se kise value ko assign nahi kar skte 
typedef struct studentManagement{
    int rollNo;
    char name[100];
    char course[100];
    float marks;
}sm;

void addStudent(sm students[],int *ptr);
void viewStudent(sm students[],int *ptr);
void searchStudent(sm students[],int *ptr,int rollNo);
void updateStudent(sm students[],int *ptr,int rollNo);
void deleteStudent(sm students[],int *ptr,int rollNo);
void showStudent(sm students[],int indexOfStudents);
int main(){
    sm students[100];
    int n = 0;
    int *ptr = &n;
    int num;
    int searchStudentNo;
    int updateStudentNo;
    int deleteStudentNo;
    for(int i = 0;;i++){
        printf("======================= Choose The options =======================\n");
        printf("1. Add Student\n");
        printf("2. View all Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter the Option Number range in (1-6) : ");
        scanf("%d",&num);
        if(num == 1){
            addStudent(students,ptr);
        }
        else if(num == 2){
            viewStudent(students,ptr);
        }
        else if(num == 3){
            printf("Enter the Roll No of Student : ");
            scanf("%d",&searchStudentNo);
            searchStudent(students,ptr,searchStudentNo);
        }
        else if(num == 4){
            printf("Enter the Roll No of Student : ");
            scanf("%d",&updateStudentNo);
            updateStudent(students,ptr,updateStudentNo);
        }
        else if(num == 5){
            printf("Enter the Roll No of Student : ");
            scanf("%d",&deleteStudentNo);
            deleteStudent(students,ptr,deleteStudentNo);
        }
        else if(num == 6){
            break;
        }
        else{
            printf("The Number is Invalid Try Again\n");
        }
    }
    return 0;
}
void addStudent(sm students[],int *ptr){
    printf("Enter Student Roll No : ");
    scanf("%d",&students[(*ptr)].rollNo);
    for(int i = 0; i<(*ptr);i++){
        if(students[(*ptr)].rollNo == students[i].rollNo){
            printf("The Roll Number Already exsist!\nTry Again!\n");
            return;
        }
    }
    getchar();
    printf("Enter the Name of Student : ");
    fgets(students[(*ptr)].name,100,stdin);
    if(strlen(students[(*ptr)].name)){
        students[(*ptr)].name[(strlen(students[(*ptr)].name))-1] = '\0';
    }
    printf("Enter the Course of Student : ");
    fgets(students[(*ptr)].course,100,stdin);
    if(strlen(students[(*ptr)].course)){
        students[(*ptr)].course[(strlen(students[(*ptr)].course))-1] = '\0';
    }
    printf("Enter the marks of Student : ");
    scanf("%f",&students[(*ptr)].marks);
    if(students[(*ptr)].marks > 100 || students[(*ptr)].marks < 0){
        printf("Marks should be in range of (0-100)\n");
        students[(*ptr)].marks = 0;
        printf("Change The marks With Update Option.\nThanks!\n");
    }
    *ptr = (*ptr) + 1;
}
void viewStudent(sm students[],int *ptr){
    for(int i = 0 ;i < (*ptr); i++){
        showStudent(students,i);
    }
    if((*ptr)== 0){
        printf("Please Add Student. There is no Students Found\n");
    }
}
void searchStudent(sm students[],int *ptr,int rollNo){
    for(int i = 0; i<(*ptr);i++){
        if(students[i].rollNo == rollNo){
            showStudent(students,i);
            return;
        }
    }
    printf("The Student Not found !\n");
}
void updateStudent(sm students[],int *ptr,int rollNo){
    for(int i = 0; i<(*ptr);i++){
        if(students[i].rollNo == rollNo){
            getchar();
            printf("The Previous Name : %s\n",students[i].name);
            printf("Enter the Name of Student : ");
            fgets(students[i].name,100,stdin);
            if(strlen(students[i].name)){
                students[i].name[(strlen(students[i].name))-1] = '\0';
            }
            printf("The Previous Course : %s\n",students[i].course);
            printf("Enter the Course of Student : ");
            fgets(students[i].course,100,stdin);
            if(strlen(students[i].course)){
                students[i].course[(strlen(students[i].course))-1] = '\0';
            }
            printf("The Previous Marks : %f\n",students[i].marks);
            printf("Enter the marks of Student : ");
            scanf("%f",&students[i].marks);
            if(students[i].marks > 100 || students[i].marks < 0){
                printf("Marks should be in range of (0-100)\n");
                students[i].marks = 0;
                printf("Try again!\n");
                return;
            }
        }
    }
    printf("The Student Not found !\n");
}
void deleteStudent(sm students[],int *ptr,int rollNo){
    int deleteIndex = (*ptr);
    for(int i = 0; i<(*ptr);i++){
        if(students[i].rollNo == rollNo){
            students[i] = (sm){0};
            deleteIndex = i;
        }
        if(i > deleteIndex){
            students[i-1] = students[i];
            students[i] = (sm){0};
        }
    }
}
void showStudent(sm students[],int indexOfStudents){
    printf("Student no %d\n",indexOfStudents+1);
    printf("Student Roll No %d\n",students[indexOfStudents].rollNo);
    printf("Student Name %s\n",students[indexOfStudents].name);
    printf("Student Course %s\n",students[indexOfStudents].course);
    printf("Student Marks %f\n",students[indexOfStudents].marks);
}