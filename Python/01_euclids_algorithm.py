num_1 = int(input("What's the first number: "))
num_2 = int(input("What's the second number: ")) 

r = a % b

while r:
    a = b
    b = r
    r = a % b

print('GCD is:', b)