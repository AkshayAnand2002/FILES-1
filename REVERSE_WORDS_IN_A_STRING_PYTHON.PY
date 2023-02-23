https://www.codingninjas.com/codestudio/problems/reverse-words_696444?leftPanelTab=0
def reverseString(str):
	str=str.strip().split()
	str.reverse()
	return (" ".join(str))
