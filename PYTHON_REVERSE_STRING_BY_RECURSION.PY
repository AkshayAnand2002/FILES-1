#REVERSE A STRING USING RECURSION
def reversestring(word):
    if len(word)==0:
        return ""
    else:
        return word[-1]+reversestring(word[:-1])
word="hello"
#print(word[:-1])
print(reversestring(word))
#print(reversestring(word[:-1]))
