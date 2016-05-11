name = 'zad a. shaw'
age = 35  # not a lie
height = 74  # inches
weight = 180  # lbs
eyes = 'blue'
teeth = 'white'
hair = 'brown'

print "let'r talk about %s " % name
print "he's %r  inches tall " % height
print "he's %r pounds heavy ." % weight
print "actually that's not too heavy."
print "he's got %r eyes and %r hair ." % (eyes, hair)
print "his teeth are usually %r depending on the coffee." % teeth

# this line is tricky ,try to get it exactly right
print "if i add %r ,%r,and %r i get %r ." % (age, height, weight, age + height + weight)
