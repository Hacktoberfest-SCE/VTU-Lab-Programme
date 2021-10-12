# Prajwal Patil, ISE, 7th sem
'''3. Design, develop, code and run the program in any suitable language to implement the
NextDate function. Analyze it from the perspective of **boundary value testing**. Derive
different test cases, execute these test cases and discuss the test results .'''

# taking the input
dd=int(input("Enter the date: "))
mm=int(input("Enter the month: "))
yy=int(input("Enter the year: "))
flag=0

# cheking for the correct date
if dd<=0 or dd>31:
    print("Day out of range")
    flag=1
if mm<=0 or mm>12:
    print("Month out of range")
    flag=1
if yy<=1812 or yy>2012:
    print("Year out of range")
    flag=1

# calculating the next date
if flag==0:
    if mm==1 or mm==3 or mm==5 or mm==7 or mm==8 or mm==10:
        if dd<31:
            dd+=1
        else:
            dd=1
            mm+=1
    elif mm==4 or mm==6 or mm==9 or mm==11:
        if dd<30:
            dd+=1
        elif dd==31:
            print("Date 31 does not exist in this month")
            exit(0)
        else:
            dd=1
            mm+=1
    elif mm==12:
        if dd<31:
            dd+=1
        else:
            dd=1
            mm=1
            yy+=1
    else:
        if (yy%4==0 and yy%100!=0) or (yy%400==0):
            if dd<29:
                dd+=1
            elif dd>29:
                print(f"Date {dd} does not exist in this month")
                exit(0)
            else:
                dd=1
                mm=3
        else:
            if dd<28:
                dd+=1
            elif dd>28:
                print(f"Date {dd} does not exist in this month")
                exit(0)
            else:
                dd=1
                mm=3
    print(f"Next date:{dd}-{mm}-{yy}")