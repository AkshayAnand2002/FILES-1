#GIVEN A LIST OF INTEGERS AND A TARGET NO. WRITE A FUNCTION THAT RETURNS A BOOLEAN
#INDICATING IF IT IS POSSIBLE TO SUM 2 INTEGERS FROM LIST TO REACH TARGET NO.
def sumpresent(lst,target):
    lst.sort()
    for i in range(len(lst)-1):
        a=target-lst[i]
        if(lst[i+1 :].count(a) > 0):
            return True
        if(lst[i]>= target):  #for getting 2 integers and not only one
            return False
    return False    #else 
print(sumpresent([1,2,3,4],111))
