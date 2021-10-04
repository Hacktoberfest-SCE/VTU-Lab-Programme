#include<stdio.h>
#include<conio.h>
char *newstrcpy(char *d, char *s)
{
char *p=d;
while(*d++=*s++); // note ;
 return p;
}
char* newstrcat(char *d, char *s)
{
 char *p=d;
 while (*d++); // note ;
d--;
 while(*d++=*s++); // note ;
 return p;
}
void main()
{
 char source1[25],source2[25],dest[50];
 clrscr();
 printf("\n\n\t enter a source string1\n");
 scanf("%s",source1);
 printf("\n\n\t enter a source string2\n");
 scanf("%s",source2);
 newstrcpy(dest,source1);
 printf("\n\n\tsource1 copied to dest:%s",dest);
 newstrcat(dest,source2);
 printf("\n\n\tsource2 is concatenated to dest:%s",dest);
 getch();
}
