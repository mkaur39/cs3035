#Simple class example in Python
#Week 8: October 11, 2022

class Dog:
    def __init__(self, dogName, dogAge, dogBreed):
        self.name = dogName   #initialize an attribute name
        self.age = dogAge     #initialize an attribute age
        self.breed = dogBreed #initialize an attribute breed

#Commented out user-defined method because we replaced it with __str__
#    def description(self):
#        print(self.name +" is a "+str(self.age)+ " years old "+self.breed+"."

#Overriding method __str__ to do more than default "print" operation:
    def __str__(self):
        return (self.name +" is a "+str(self.age)+ " years old "+self.breed+".")

#Creating instances Dougie and Pluto
Dougie = Dog("Dougie", 4, "GoldenRetriever")
Pluto = Dog("Pluto", 5, "Boxer")

#Testing the print method
print(Dougie)

#Dougie.description()
