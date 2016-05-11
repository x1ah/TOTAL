from random import randint
from sys import exit

print "this is a very simple number game"
print "you just need to input the number you guess"
print "and it will tell you whether you are true"
print "now , let's go"

number = randint(1,99)
times = 1

while True:
    yours = int(raw_input("---->"))
    if yours > number and times < 11:
        print "too big"
        print "input again"
        print "%d times" % times
        times += 1

    elif yours < number and times < 11:
        print "too small"
        print "input again "
        print "%d times" % times
        times += 1

    elif yours == number and times < 11:
        print "right!"
        print "you cost %d times" % times
        print "the number is :", number

    else:
        print "times out"
        exit(1)
