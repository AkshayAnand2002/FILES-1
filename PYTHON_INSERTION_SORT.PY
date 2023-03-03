#INSERTION SORT
def insertion_sort(arr):
    for i in range(1,len(arr)):
        key=arr[i]
        j=i-1
        while j>=0 and arr[j]>key:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key
    return arr
arr=[9,1,8,2,3,24,67,4,5,6,7]
sorted_arr=insertion_sort(arr)
print(sorted_arr)
