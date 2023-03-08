#SEQUENTIAL SEARCH
def sequentialsearch(arr,elem):
    for item in arr:
        if item==elem:
            return True
    return False
arr=[1,2,3,4,5,6,7,8,9,10]
elem=0
result=sequentialsearch(arr,elem)
print(result)
