'''
An array of N integers is given as the input to the program. For each integer the program must print the integer if the count of odd integers on the left side is equal to the count of odd integers on the right side. Else the program must print "-1" for that integer.

Solution

'''

n=int( input() )
l=list( map( int, input().split() ) ) 
m=[i%2 for i in l] 
o=0 
e=m[1:].count(1) 
if o==e:
    print(l[0], end=" ")
else:
    print("-1", end=" ")
for i in range(1,n): 
    if m[i-1]==1:
        o+=1 
    if m[i]==1:
        e-=1
    if o==e:
        print(l[i], end=" ")
    else:
        print("-1", end=" ")
