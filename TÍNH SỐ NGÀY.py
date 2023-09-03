ngay = int(input('NHẬP VÀO NGÀY: '))
thang = int(input('NHẬP VÀO THÁNG: '))
thang_31ngay = []
thang_30ngay = []
lst_thang = []
x = 0
dem30 = 0
dem31 = 0
tsn = 0
#for i in range (12):
    # if  x < 12:
    #     x = x + 1
    #     lst_thang.append(x)
    #     if x % 2 == 0 and x != 2 and x < 8:
    #         thang_30ngay.append(x)
    #         # => [4,6]
    #     elif x % 2 != 0 and x!=2 and x < 8:
    #         thang_31ngay.append(x)
    #         # => [1,3,5,7]            
    #     elif x % 2 != 0 and x < 13:
    #         thang_30ngay.append(x)
    #         # => [4,6,9,11]
    #     elif x % 2 == 0 and x < 13 and x != 2:
    #         thang_31ngay.append(x)
    #         # => [1, 3, 5, 7, 8, 10, 12]
#print ('CÁC THÁNG : '+str(lst_thang))
#print ("THÁNG CHỈ CÓ 28 NGÀY : "+str(lst_thang[1]))
#print ('THÁNG CÓ 30 NGÀY :' +str(thang_30ngay))     
#print ('THÁNG CÓ 31 NGÀY :' +str(thang_31ngay))
if thang < 8:
    for j in range (1, thang + 1):
        if j % 2 == 0 and j != 2:
            dem30 = dem30 + 1
        elif j % 2 != 0 and j != 2:
            dem31 = dem31 + 1           
if 7 < thang  < 13:
    for j in range (1, 7+ 1):
        if j % 2 == 0 and j != 2:
            dem30 = dem30 + 1
        elif j % 2 != 0 and j != 2:
            dem31 = dem31 + 1
    for z in range (8 , thang + 1):
        if z % 2 == 0:
            dem31 = dem31 + 1
        else:
            dem30 = dem30 + 1
tsn = (dem30 * 30) + (dem31 * 31)  + ngay
if 2 < thang == 8 : 
    tsn = tsn - 3
elif thang > 2:
    tsn = tsn - 3
if thang < 2:
    tsn = (dem31 * 31)  + ngay - 1 

print ('NGÀY : ',ngay,"THÁNG : ",thang,)
print ("TỔNG SỐ NGÀY TÍNH TỪ ĐẦU NĂM := ",tsn)
            


            