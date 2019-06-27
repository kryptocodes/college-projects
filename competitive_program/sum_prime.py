# code to print prime numbers
n=int(input())
t=[]
for i in range(2,n):
    for j in range(2,i):
        if(i%j==0):
            break
    else:
        t.append(i)

print(t)
#to check the sum 
z=len(t)
su=0
c=0
#for k in range(0,z):
    
#    for m in range(1,z):
#        su=su+t[k]
#        print(su,t[m])
#        if(su%t[m]==0):
#            c=c+1
#            continue

#print(c)
for k in range(len(t)):
    su=su+t[k]
    print(su)
    if su in t:
        c=c+1

print(c)    
