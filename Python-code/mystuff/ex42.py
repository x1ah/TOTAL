## animal is-a object (yes , sort of confusing ) look at the extra credit 
class animal(object):
	pass 
	
## ??
class dog(animal):
	
	def __init__(self, name):
		## ??
		self.name = name
		
## ??
class cat(animal):

	def __init__(self, name):
		self.name = name
		
## "??"
class person(object):
	
	def __init__(self,name):
	## ??
		self.name = name
		
		## person has-a pet of some kind
		self.pet = None
		
## ??
class employee(person):
	
	def __init__(self, name, salary):
		## ?? hmm what is this strange magic?
		super(employee, self).__init__(name)
		## ??
		self.salary = salary
		

class fish(object):
	pass
	

class salmon(fish):
	pass
	
## ??
class halibut(fish):
	pass
	
	
## ???
rover = dog("rover")

## ??
satan = cat("satan")

## ??
mary = person("mary")

## ??
mary.pet = satan

## ??
frank = employee("frank", 120000)

## ??
frank.pet = rover

## ??
flipper = fish()

## ??
crouse = salmon()

## ??
harry = halibut