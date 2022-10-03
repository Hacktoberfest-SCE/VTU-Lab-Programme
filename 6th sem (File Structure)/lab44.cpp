#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
class student
{
public:
string usn;
string name;
string branch;
string semester;
string buffer;
int count;
int rrn_list[100];
void read_data();
void pack();
void write_to_file();
void create_rrn();
void search_by_rrn(int);
};
void student::read_data()
{
cout<<"usn:";
cin>>usn;
cout<<"name:";
cin>>name;
cout<<"branch:";
cin>>branch;
cout<<"semester:";
cin>>semester;
}
void student::pack()
{
buffer.erase();
buffer=usn+'|'+name+'|'+branch+'|'+semester+'$'+'\n';
}
void student::write_to_file()
{
fstream file;
file.open("4.txt",ios::out|ios::app);
file<<buffer;
file.close();
}

void student::create_rrn()
{
ifstream file;
int pos;
count=-1;
file.open("4.txt",ios::in);
while(!file.eof())
{
pos=file.tellg();
buffer.erase();
getline(file,buffer);
rrn_list[++count]=pos;
}
file.close();
}
void student::search_by_rrn(int rrn)
{
int pos;
fstream file;
create_rrn();
if(rrn>=count)
cout<<"\nnot found";
else
{
buffer.erase();
file.open("4.txt");
pos=rrn_list[rrn];
file.seekg(pos,ios::beg);
getline(file,buffer);
cout<<"\n"<<buffer<<"\n";
file.close();
}
}
int main()
{
int choice,rrn,count,i;
student s1;
while(1)
{
cout<<"\nmain menu\n1.add 2.search 3.exit\nenter the choice:";
cin>>choice;
switch(choice)
{
case 1:cout<<"\nhow many records to insert\n";
cin>>count;
for(i=0;i<count;i++)
{
cout<<"data\n";

s1.read_data();
s1.pack();
s1.write_to_file();
}
s1.create_rrn();
break;
case 2:cout<<"enter the rrn";
cin>>rrn;
s1.search_by_rrn(rrn);
break;
case 3:return 0;
default:cout<<"\nwrong choice";
break;
}
}
}
