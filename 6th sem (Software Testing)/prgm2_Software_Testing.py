# Prajwal Patil, ISE, 7th sem
'''2. Design, develop, code and run the program in any suitable language to solve the commission
problem. Analyze it from the perspective of **boundary value testing**, derive different test cases,
execute these test cases and discuss the test results .'''

# taking the input
locks=int(input("Enter the total number of locks: "))
stocks=int(input("Enter the total number of stocks: "))
barrels=int(input("Enter the total number of barrels: "))

# cheking for input out of range
if locks<=0 or locks>70:
    print("Locks Out of Range")
if stocks<=0 or stocks>80:
    print("Stocks Out of Range")
if barrels<=0 or barrels>90:
    print("Barrels Out of Range")

# calculating total sales and comission
sales= locks*45 + stocks*30 + barrels*25
if sales <= 1000:
    commission = 0.10 * sales
elif sales <= 1800:
    commission = 0.10 * 1000
    commission = commission + (0.15 * (sales - 1000))
else:
    commission = 0.10 * 1000
    commission = commission + (0.15 * 800)
    commission = commission + (0.20 * (sales - 1800))
print(f"Total sales: {sales} and Commission: {commission}")