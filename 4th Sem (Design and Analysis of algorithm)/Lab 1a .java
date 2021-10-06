Import java.util.scanner;
Public class student {
String USN;
String Name;
Tring branch;
String phone;
Void displayRecord() {
System.out.printlm(USN + “” + Name + “” + branch +””+phone);
}
public static void main(String[] args){
system.out.println(“Enter the number of student”);
scanner sc =new Scanner(system.in);
int n=sc.nextInt();
Student s[]=Student[n];
For (int j=0; j<n; j++){
S[j]=new Student();
System.out.println(“enter the USN,Name,branch,phone”);
S[j].USN=sc.next();
S[j].Name=sc.next();
S[j].branch=sc.next();
S[j].phone=sc.next();
}
For(int m=0;m<n;m++) {
S[m].displayRecord();
}
}}
