#author @Nishant

for i in range(int(input())):
    x,y,a,b = map(int, input().split())
    if(a +b == x * y):
        print("Yes")
    else:
        print("No")