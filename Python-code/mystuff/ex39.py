# creat a mapping of state to abbreviation
states = {
	'oregon': 'OR',
	'florida': 'FL',
	'california': 'CA',
	'new york': 'NY',
	'michigan': 'MI'
}

# creat a basic set of states and some cities in them
cities = {
	'CA': 'san francisio',
	'MI': 'detroit',
	'FL': 'jacksonville'
}

# add some more cities
cities['NY'] = 'new york'
cities['OR'] = 'portland'

# print out some cities
print '-' * 10
print "NY state has:" , cities['NY']
print "OR state has:" , cities['OR']

# print some states
print '-' * 10
print "michigan's abbreviation is:" , states['michigan']
print "florida's abbreviation is:" , states['florida']

# do it by using the state then cities dict
print '-' * 10
print "michigan has :", cities[states['michigan']]
print "florida has :", cities[states['florida']]

# print every state abbreviation
print '-' * 10
for states, abbrev in states.items():
	print "%s is abbreviation %s " % (states, abbrev)

# print every city in state
print '-' * 10 
for abbrev, city in cities.items():
	print "%s has the city  %s"  % (abbrev, city)
	
# now do both at the same time
print '-' * 10
for states, abbrev in states.items():
	print "%s state is abbreviation %s and has city %s" % (states, abbrev, cities[abbrev])
	
	
print '-' * 10
# safely get a abbreviation by states that might not be there
state = states.get('Texas', None)

if not state:
	print "sorry, no Texas"
	
# get a city with a default value
city = cities.get('TX', 'does not exist')
print "the city for the state 'TX' is: %s" % city