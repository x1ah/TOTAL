x = 'there are %d types of people ' % 10 # definex
binary = 'binary ' # define 
do_not = "don't"
y = "those who know %s and those who %s ." % (binary,do_not)

print x
print y

print "i said: %r ." % x
print "i also said: %s." % y 

hilarious = False # define hilarious
joke_evaluation = "isn't that joke so funny?! %r "

print joke_evaluation % hilarious  #print joke_evaluation and hilarious
w = "this is the left side of ..."  #define w
e = "a string with a right side ."   # define e

print w + e # print  w+e