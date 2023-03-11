#CREATE A FUNCTION WHICH TAKES IN A STRING AND A SET OF LIST OF WORDS.
#FUNCTION DETERMINES IF IT IS POSSIBLE TO SPLIT THE STRING IN A WAY IN WHICH
#WORDS CAN BE MADE FROM THE LIST OF WORDS.
def word_split(phrase,list_of_words,output=None):
    if output is None:
        output=[]
    for word in list_of_words:
        if phrase.startswith(word):
            output.append(word)
            return word_split(phrase[len(word):],list_of_words,output)
    return output
word1='themanran'
list_of_words1=['the','ran','man']
print(word_split(word1,list_of_words1))
word2='themanran'
list_of_words2=['clown','ran','man']
print(word_split(word2,list_of_words2))
