bear_moved = False
	
while True:
    next = raw_input(">")
        
    if next == "take honey":
        print "year"
    elif next == "taunt bear" and not bear_moved:
        print "the bear has moved from the door . you can go through it now "
        bear_moved = True
    elif next == "taunt bear" and bear_moved:
        print "the bear gets pissed off and chews your leg off."
    elif next == "open door" and bear_moved:
        print "hello world"
    else:
        print "i got no idea what that means."