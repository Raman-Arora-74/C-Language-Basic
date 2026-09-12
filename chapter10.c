#include<stdio.h>
// file input output 
// File IO
/*
File - container in a storage device to store data
- Ram is volatile memory (means it will stop storing when the power supply cut)
- Contents are lost when program terminates 
- Files are used to persist the data
*/
/*
Operation on Files 

Create a File 
Open a File 
close a File 
Read from a File
Write in a File

*/

/*
Types of Fiiles 
Text Files                      Binary Files
Textual data                    Binary data
.txt, .c                       .exe, .mp3, .jpg

*/

// File Pointer
/*
FILE is a (hidden) structure that needs to be created for opening a file a FILE ptr that 
points to this structures & is used to access the file.
FILE *fptr;
*/
// Opening a File
/*
FILE *fptr;
fptr = fopen("filename",mode);
closing a FILE 
fclose(fptr);*/

// int main(){
//     FILE *fptr;
//     fptr = fopen("NewTest.txt","w");
//     if(fptr == NULL) {
//         printf("File doesn't exist\n");
//     } else{
//         fclose(fptr);
//     }
//     return 0;
// }
/*
File Opening Modes
"r" open to read
"rb" opento read in binary 
"w" open to write
"wb" open to write in binary
"a" open to append
*/
/*
Best practice
Check if a file exists before reading from it.
*/
/*
Reading from a file

char ch;
fscanf(fptr,"%c",&ch)
*/

// int main(){
//     FILE *fptr;
//     fptr = fopen("NewTest.txt","r");
//     int ch;
//     fscanf(fptr,"%d",&ch);
//     printf("character  = %d\n",ch);
//     fscanf(fptr,"%d",&ch);
//     printf("character  = %d\n",ch);
//     fscanf(fptr,"%d",&ch);
//     printf("character  = %d\n",ch);
//     fscanf(fptr,"%d",&ch);
//     printf("character  = %d\n",ch);
//     fscanf(fptr,"%d",&ch);
//     printf("character  = %d\n",ch);
//     fclose(fptr);
//     return 0;
// }

// Writing to a file 
// char ch = 'A';
// fprintf(fptr,"%c",ch);
// int main(){
//     FILE *fptr;
//     fptr = fopen("NewTest.txt","w");
//     fprintf(fptr,"%c",'M');
//     fprintf(fptr,"%c",'\n');
//     fprintf(fptr,"%c",'N');
//     fprintf(fptr,"%c",'G');
//     fprintf(fptr,"%c",'O');
//     fclose(fptr);
//     return 0;
// }
/*
Read & Write a char 
fgetc(fptr)
fputc('A',fptr);
*/

// int main(){
//     FILE *fptr;
//     fptr = fopen("NewTest.txt","r");
//     fprintf(fptr,"%c",'M');
//     // printf("%c\n",fgetc(fptr));
//     // printf("%c\n",fgetc(fptr));
//     // printf("%c\n",fgetc(fptr));
//     // printf("%c\n",fgetc(fptr));
//     // printf("%c\n",fgetc(fptr));
//     fputc('M', fptr);
//     fputc('A', fptr);
//     fputc('N', fptr);
//     fputc('G', fptr);
//     fputc('O', fptr);
//     fclose(fptr);
//     return 0;
// }