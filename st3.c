#include<stdio.h>
int main()
 {
float per;
char grade;
 printf("Enter the percentage from 1 to 100\n");
 scanf("%f",&per);
 if(per>=90 && per<=100)
    grade='A';
 else if(per>=80 && per<90)
 grade='B';
 else if(per>=70 && per<80)
 grade='C';
 else if(per>=60 && per<70)
 grade='D';
 else if(per>=35 && per<60)
   grade='E';
 else
 grade='F';
 switch(grade)
 {
 case 'A':printf("EXCELLENT\n");break;
 case 'B':printf("VERY GOOD\n");break;
 case 'C':printf("GOOD\n");break;
 case 'D':printf("ABOVE AVERAGE\n");break;
 case 'E':printf("SATISFACTORY\n");break;
 case 'F':printf("FAIL\n");break;
 }
 printf("The percentage=%f and grade is %c",per,grade);
 return 0;
 }
