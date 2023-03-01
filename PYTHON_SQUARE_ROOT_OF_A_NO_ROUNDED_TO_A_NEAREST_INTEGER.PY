#SQRT OF A NO ROUNDED TO A NEAREST INTEGER.
def sqrt(num):
    for i in range(1,int(num/2)):
        if i*i > num:
            return i-1
        elif i*i == num:
            return i
        elif num==1:
            return 1
print(sqrt(27))
