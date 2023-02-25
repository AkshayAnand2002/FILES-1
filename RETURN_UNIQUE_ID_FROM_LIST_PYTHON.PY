#RETURN UNIQUE INTEGER FROM THE LIST OF ACCOUNT IDS.
def uniqueid(lst):
    for i in range(len(lst)):
        if lst[i] not in (lst[:i]+lst[i+1:]):
            return lst[i]
print(uniqueid([1,2,3,4,6,2,3,1,5]))
