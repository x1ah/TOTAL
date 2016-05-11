from sys import argv   # from sys import argv 

script , filename = argv #canshu

print "we are going to erase %r " %filename
print "if you don't want that,hit ctrl-c (^c)."
print "if you do want that,hit return."

raw_input("?")  # wether go right

print "Opening the file....."
target = open(filename,'w')   

print "truncating the file. good bye!"
target.truncate() # i can't find it's fiction 

print "now i'm going to ask you for three lines."

line1 = raw_input("line:1")    # we can input the content of line1 
line2 = raw_input("line2:") 
line3 = raw_input("line3:")

print "i'm going to write these to the file ."
lineall = target.write(line1)   # output line1  

print "And finally, we close it ."

target.close()    # close the txt 

