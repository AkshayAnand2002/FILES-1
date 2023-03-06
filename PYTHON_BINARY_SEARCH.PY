def binarysearch(arr,elem):
    low=0
    high=len(arr)-1
    while low<=high:
        mid=(low+high)//2
        if arr[mid]==elem:
            return True
        elif arr[mid]<elem:
            low=mid+1
        else:
            high=mid-1
    return False
arr=[1,2,3,4,5,6,7]
elem=6
result=binarysearch(arr,elem)
print(result)
