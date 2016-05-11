#def displayNumType(num):
#    print num, 'is',
#    if isinstance(num, (int, long, float, complex)):
#        print 'a num of type:', type(num).__name__
#    else:
#        print 'not a number at all!!'
#
##displayNumType(-69)
##displayNumType(99999999999999999999999999L)
##displayNumType(98.6)
##displayNumType(-5.2+1.9j)
##displayNumType('xxx')
#while True:
#	s = raw_input('enter something\n')
#	if s == 'quit':
#		break
#	print len(s)
#print 'done'


##idcheck.py
#import string
#
#alphas = string.letters + ' '
#nums = string.digits
#
#print 'Welcome to the Identifier Checker v1.0'
#print 'Testees must be at least 2 cchars longs.'
#myInput = raw_input('Identifier to test?')
#
#if len(myInput) > 1:
#    if myInput[0] not in alphas:
#        print 'invalid first symbol must be alphabetic'
#    else:
#        for otherChar in myInput[1:]:
#            if otherChar not in alphas + nums:
#            print "invaild: remainning symbols must be alphanumerric"
#            break
#    else:
#        print 'okay as an identifier'
