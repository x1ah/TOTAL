def add(a, b):
    print "ADDING %d + %d "  % (a , b)
    return a + b

def subtract(a, b):
    print "SUBTRACT %d - %d"  %(a , b)
    return a - b
	
def multiply(a , b):
    print "MULTIPLY %d * %d"   %(a, b)
    return a * b
	
def divide(a,b):
    print "DILIVING %d / %d"  %(a, b)
    return a / b
	

print "let's do some math witn just functions!"

age = add(30,5)
height = subtract(78,4)
weight = multiply(90,4)
iq = divide(100,2)

print "age: %d ,height : %d ,weight: %d, iq: %d."  %(age, height, weight , iq)


# a puzzle for the extra credit , type it in anyway.
print "here is a puzzle."

what = add(age , subtract(height, multiply(weight, divide(iq, 2))))

print "that become :" , what , "can you do it by hand"

