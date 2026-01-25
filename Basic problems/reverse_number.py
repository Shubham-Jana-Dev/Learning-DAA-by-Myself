num = int(input("Enter the number: "))
temp = num
rev = 0 
while temp > 0:
    rem = temp%10
    rev = rev*10 + rem
    temp //= 10
print(rev)