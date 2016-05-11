from sys import argv

script , user_name = argv
prompt = '>'

print "hi %s ,i'm the %s script." %(user_name, script)
print "i'd like to ask you a few questions."
print "do you like me %s ?" %user_name
likes = raw_input(prompt)

print "where do you live %s ?" %user_name
lives = raw_input(prompt)

print "what kind of computer do you have ?"
computer = raw_input(prompt)

print """
allright , so you said %r about liking me.
you live in %r. not sure where that is.
and you have a %s computer . nice.
""" % (likes , lives , computer)