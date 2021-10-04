#include<stdio.h>
#include<conio.h>
struct Student
{
char name[25];
 int usn;
 int m1,m2,m3;
};
char filename[15];
int n;
struct Student s;
void Insert()
{
FILE *fp;
int i;
printf("\n\n\tEnter how many Records: ");
scanf("%d",&n);
fp=fopen(filename,"w");
if(fp==NULL) printf("\n\n\tError in Creating the File....");
else
for(i=0;i<n;i++)
{
 printf("\nEnter Details of Student-%d: ",i+1);
 printf("\n\t\t\tName: "); scanf("%s",s.name); fprintf(fp,"%s
",s.name);
 printf("\n\t\t\tUsn : "); scanf("%d",&s.usn); fprintf(fp,"%d
",s.usn);
 printf("\n\t\t\tM1 : "); scanf("%d",&s.m1); fprintf(fp,"%d ",s.m1);
 printf("\n\t\t\tM2 : "); scanf("%d",&s.m2); fprintf(fp,"%d ",s.m2);
 printf("\n\t\t\tM3 : "); scanf("%d",&s.m3); fprintf(fp,"%d ",s.m3);
 }
 fclose(fp);
}
void Search()
{
if(n==0)
printf("\n\n\tNo Records to Search...");
 else
 {
 FILE *fp;
 int i,flag=0,usn;
 fp=fopen(filename,"r");
if(fp==NULL)
printf("\n\n\tERROR!! in Opening the File....");
else
 {
printf("\n\n\tEnter the Usn to be Searched: ");
scanf("%d",&usn);
for(i=0;i<n;i++)
{
fscanf(fp,"%s",s.name);
fscanf(fp,"%d",&s.usn);
fscanf(fp,"%d",&s.m1);
fscanf(fp,"%d",&s.m2);
fscanf(fp,"%d",&s.m3);
if(usn==s.usn)
{
 flag=1;
 break;
}
 }
 if(flag==1)
 {
 printf("\nRecord Exist And Details are:");
 printf("\n\t\t\t\tName: %s",s.name);
 printf("\n\t\t\t\tUsn : %d",s.usn);
 printf("\n\t\t\t\tM1 : %d",s.m1);
 printf("\n\t\t\t\tM2 : %d",s.m2);
  printf("\n\t\t\t\tM3 : %d",s.m3);
 }
 else
 printf("\n\n\tRecord having Usn %d Does Not
Exist...\n\n",usn);
 }
 fclose(fp);
 }
}
void Display()
{
if(n==0)
printf("\n\n\tNo Records to Display....\n\n");
else
 {
 int i;
 FILE *fp=fopen(filename,"r");
 if(fp==NULL)
printf("\n\n\tERROR!! in Opening File...");
 else
for(i=0;i<n;i++)
 {
printf("\nDetails of Student-%d: ",i+1);
fscanf(fp,"%s",s.name); printf("\n\t\t\tName: %s",s.name);
fscanf(fp,"%d",&s.usn); printf("\n\t\t\tUsn : %d",s.usn);
fscanf(fp,"%d",&s.m1); printf("\n\t\t\tM1 : %d",s.m1);
fscanf(fp,"%d",&s.m2); printf("\n\t\t\tM2 : %d",s.m2);
fscanf(fp,"%d",&s.m3); printf("\n\t\t\tM3 : %d",s.m3);
 }
 fclose(fp);
 }
}
void main()
{
int ch;
clrscr();
printf("\n\n\tEnter the File Name: ");
scanf("%s",filename);
while(1)
{
printf("\n\n\t1.Insert...\t2.Search...\t3.display...\t4.Exit...");
 printf("\n\n\tEnter Your Choice: ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: Insert(); break;
 case 2: Search(); break;
 case 3: Display(); break;
 case 4: exit(0);
 default: printf("\n\n\tEnter Proper Choice...");
 }
 }
}  
