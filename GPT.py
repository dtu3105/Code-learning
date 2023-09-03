while True:
	print("GIẢI PHƯƠNG TRÌNH BẬC 2 1 ẨN DẠNG ax^2+bx+c=0")
	print("-" * 30)
	print("Giải phương trình")
	a = float(input("NHẬP HỆ SỐ a := "))
	b = float(input("NHẬP HỆ SỐ b := "))
	while True:
		if a==0 and b==0:
			print("Lỗi ")
			print("Một trong hai hệ số a, b phải khác 0: ")
			a = float(input("Mời nhập lại số a: "))
			b = float(input("Mời nhập lại số b: "))
		else:
				break
	c = float(input('NHẬP HỆ SỐ c := '))		
	d = b**2 - 4*a*c
	giai = "GIẢI"
	print (giai.center(20))
	print ('PHƯƠNG TRÌNH : ' + str(a)+"x^2" + str(b)+"x" + str(c))
	print ("Delta của phương trình trên : " +str(d))
	can_delta = d ** 0.5
	if d>0:
		f=(-(b) + (can_delta)) / (2 * a)
		h=(-(b) - (can_delta)) / (2 * a)
		print("Phương trình có 2 nghiệm phân biệt")
		print("=> x1 = "+ str(f))
		print("=> x2 = "+ str(h))
	elif can_delta == 0:
		g = -b / 2 * a
		print("Phương trình có nghiệm kép")
		print("=> x1 = x2 = " + str(g) )	
	else :
		print("Phương trình vô nghiệm")
	z = int(input('TIẾP TỤC CHỌN 1 / KẾT THÚC CHỌN 2 :='))
	if z == 2 :
		break		