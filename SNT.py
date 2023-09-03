list = []
dayso = int(input("NHẬP n = "))
for a in range (1,dayso + 1):
    if a > 1:
        dem = 0
        for i in range (1,a + 1):
            if a % i == 0:
                dem = dem +1
        if dem == 2:
            list.append(a)
print (list)
               
       