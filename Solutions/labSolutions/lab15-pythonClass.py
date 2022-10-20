# lab15.py: Monster class
# Original solution by Jordan Doose
# Note that you can implement the __eq__ method in the way shown in this code ...
# ...or using an if statement

class Monster:
	def __init__(self, name, size):
		self.name = name
		self.size = size

	def attack(self, target):
		print(self.name, "attacks", target)

	def __str__(self):
		return self.name + ", Weight: " + str(self.size)

	def __eq__(self, other):
		return (self.name == other.name) and (self.size == other.size)

	def __add__(self, other):
		return Monster(self.name + other.name, self.size + other.size)

def test():
	godzilla = Monster("Godzilla", 2000)
	kong = Monster("Kong", 1500)

	print(godzilla)
	print(kong)

	print()

	print(godzilla == kong)
	print(godzilla == godzilla)

	print()

	print(godzilla + kong)

	print()

	godzilla.attack("Tokyo")
	kong.attack("the Golden Gate bridge")

	(godzilla + kong).attack("the whole world!")

if __name__ == "__main__":
	test()
