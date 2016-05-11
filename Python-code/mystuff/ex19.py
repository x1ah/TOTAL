def cheese_and_crackers(cheese_count, boxes_of_crackers):
    print "you have %d cheeses!" % cheese_count
    print "you have %d boxes of crackers!" % boxes_of_crackers
    print "man that's enough for a party !"
    print "get a blanket.\n"
	
	
print "we can just give the funtion numbers directly:"
cheese_and_crackers(20,30)


print "or, we can use variables from our script:"
amount_of_cheese = int(raw_input(">"))
amount_of_crackers = int(raw_input(">"))

cheese_and_crackers(amount_of_cheese,amount_of_crackers)


print "we can even do math inside too:"
cheese_and_crackers(10+20,5+6)


print "and we can combine the two ,variable and math:"
cheese_and_crackers(amount_of_cheese+100,amount_of_crackers+1000)