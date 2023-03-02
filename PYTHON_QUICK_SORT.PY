#QUICK SORT IN PYTHON
def quicksort(arr):
    if len(arr)<=1:
        return arr
    pivot=arr[0]
    less=[i for i in arr[1:] if i<=pivot]
    greater=[i for i in arr[1:] if i>pivot]
    return quicksort(less)+[pivot]+quicksort(greater)
arr=[36,2,27,34,48,29,33,30,5]
sorted_arr=quicksort(arr)
print(sorted_arr)
