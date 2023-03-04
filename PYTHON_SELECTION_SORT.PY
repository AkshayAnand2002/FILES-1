#SELECTION SORT
def selectionsort(array,size):
    for i in range(size):
        min_index=i
        for j in range(i+1,size):
            if array[j]<array[min_index]:
                min_index=j
        (array[i],array[min_index])=(array[min_index],array[i])
data=[-2,45,0,11,-9]
size=len(data)
selectionsort(data,size)
print(data)
