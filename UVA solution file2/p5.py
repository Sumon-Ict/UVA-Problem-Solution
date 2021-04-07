
thisdict={
    "sumon": "sahor",
    "shfrr": 123,
    "khhkj": 987
    }
for x in thisdict:
    print(x)
    print(thisdict[x])

for x in thisdict.values():
    print(x)

for x,y in thisdict.items():
   print(x,y)

if "sumon" in thisdict:
    print("yes")

a=20
b=12
if  a<b:
 print("a is less than b")

elif a>b:
    print("a is greathe than b")
else:
    print("both are equal ")

m=23
n=45
print("m is greather than n") if m>n else print("n is greather than m")
    
    
i=1
while i<6:
    i+=1
    if i==4:
       continue;
    print(i)

     
    
    

    
  
    
    
