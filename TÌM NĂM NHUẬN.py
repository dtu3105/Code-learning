while True:

    a=int(input("NHẬP NĂM CẦN TÌM : "))
    if (a % 4 == 0) or ((a % 400 == 0) and (nam % 100 != 0)):
        print('Nam nhuan')
    else:
        print('Nam khong nhuan')
    print ("TIẾP TỤC CHỌN 1")
    print ("KẾT THÚC CHỌN 2") 
    print ("LỰA CHỌN CỦA BẠN: ")
    b = int(input()) 
    if b == 2: 
        break
        

