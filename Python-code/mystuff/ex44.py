class other(object):
	
	def override(self):
		print "other override()"
		
	def implicit(self):
		print "other implicit()"
		
	def altered(self):
		print "other altered()"
		
class child(object):
	
	def __init__(self):
		self.other = other()
		
	def implicit(self):
		self.other.implicit()
		
	def override(self):
		print "child override()"
		
	def altered(self):
		print "CHILD , BEFORE PARENT ALTERED"
		self.other.altered()
		print "CHILD , AFTER PARENT altered()"
		
son = child()

son.override()

son.implicit()

son.altered()