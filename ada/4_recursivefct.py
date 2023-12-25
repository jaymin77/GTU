import time

def recursivefct(num):
    if num == 0 or num == 1:
        return 1
    else: 
        return num*recursivefct(num-1)


num = int(input("Enter a number:"))

t = time.time()
fct = recursivefct(num)
s = time.time()
print(f"fctorial of {num} is {fct}")
print("\n",s-t)