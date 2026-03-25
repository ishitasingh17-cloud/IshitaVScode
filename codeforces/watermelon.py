def EvenWeight(wt):
    for i in range(1,wt):
        for j in range(1,wt):
            if(i%2==0 and j%2==0):
                if(i+j==wt):
                    print("YES")
                    
    print("NO")
            
weight=int(input("Enter weight of the watermelon in kilos(integer):"))
EvenWeight(weight)




wt=int(input("Enter weight of watermelon in kilos:"))
if(wt%2==0 and wt>2):
    print("YES")
else:
    print("NO")