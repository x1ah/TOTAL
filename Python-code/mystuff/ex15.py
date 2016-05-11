from sys import argv

script , filename = argv

txt = open(filename)
line = txt.readline()

print "here's your file %r :" % filename
print "read line :%s" %line   # this mean hei!read ,do it that you have read and  no variable
line = txt.readline(3)   # only print line two 3 bit
print "read line is: %s"  % line
print txt.close()

print "type the filename again :"
file_again = raw_input(">")

txt_again = open(file_again)

print txt_again.readline()
print txt_again.close()
