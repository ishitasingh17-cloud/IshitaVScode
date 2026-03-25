import sys
data=sys.stdin.read().splitlines()
n=int(data[0])
for i in range(1,n+1):
    word=data[i]
    if(len(word)>10):
        print(word[0] + str(len(word)-2) + word[-1])
    else:
        print(word)