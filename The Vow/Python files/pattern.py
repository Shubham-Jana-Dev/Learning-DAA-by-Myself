t = 5
for i in range(1,t+1):
        for j in range(1,t+1): 
            if (i == 1 and j ==1) or (i == 1 and j== t)  or (i+j==t+4) or (i==t and j==t) or (i==t and j == 1) or (i ==t and j == t//2)or (i ==t//2+2 and j == 1):
                print(" ",end=" ")
            else:
                print("*",end=" ")
        print(" ")
print ("\n \n This is for only future blood :)\n\n")
t = 5
for i in range(1,t+1):
        for j in range(1,t+1): 
            if (i == 1 and j ==1) or (j==t//2 +1 and i==1 ) or (i == 1 and j== t)  or (i+j==t+4) or (i==t and j==t) or (i==t and j == 1) or (i ==t and j == t//2)or (i ==t//2+2 and j == 1):
                print(" ",end=" ")
            else:
                print("*",end=" ")
        print(" ")   


