#LARGEST PRODUCT THAT CAN BE MADE FROM 3 INTEGERS IN THE LIST.
def largest_product(arr):
    arr.sort()
    return max(arr[-1]*arr[-2]*arr[-3],arr[0]*arr[1]*arr[-1])
arr=[99,82,40,75,-24,-99,39,-82,5,30]
print(largest_product(arr))
