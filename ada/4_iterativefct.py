import time
def iterativefct(num):
    fct = 1
    if num == 0:
        print("fcatorial of 0 is 1")
    else: 
        for i in range(1,num+1):
            fct = i*fct
        print(f"fcatorial of {num} is {fct}")


num = int(input("Enter a number:"))

t = time.time()
iterativefct(num)
s = time.time()
print("\n",s-t)