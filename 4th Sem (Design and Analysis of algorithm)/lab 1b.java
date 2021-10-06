import java.util.Scanner;
public class stackop{
static int[] integerstack;
static int top=-1;
public static void main (String[] args) {
System.out.println("enter stack size:");
Scanner scanner=new Scanner(System.in);
int size=scanner.nextInt();
integerstack=new int [size];
while(true) {
System.out.println("stack operations:");
System.out.println("1.push");
System.out.println("2.pop");
System.out.println("3.Display");
System.out.println("4.EXIT");
System.out.println("Enter your choice:");
int choice = scanner.nextInt();
switch(choice){
case 1:System.out.println("Enter the element to push:");
int element=scanner.nextInt();
if(top==size-1)
System.out.println("stack is full");
else{
top=top+1;
integerstack[top]=element;
}
break;
case 2:
if(top==-1){
System.out.println("stack is empty");
}
else{

System.out.println("popped element is :"+integerstack[top]);
top=top-1;
}
break;
case 3:
if(top==-1)
System.out.println("stack is empty");
else{
System.out.println("stack elements are:");
for(int i=top;i>=0;i--)
System.out.println(integerstack[i]);
}
break;

case 4:System.exit(0);
break;
}
}
}