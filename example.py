c=[]
b=[]
for i in range(68000):
    new =  i-1
    c.append(new)
print("Input number of elements: ")
s=int(input())
print("Input elements: ")
for i in range(s):
    new1=int(input())
    b.append(new1)
res=list(set(c) - set(b))
res1=list(set(b) - set(c))
print("extra in 1 list")
print (res)
print("extra in 2 list")
print(res1)