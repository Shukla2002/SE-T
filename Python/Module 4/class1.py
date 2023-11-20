class Circle:
    def __init__(self,r):
        self.r=r

    def area(self,r):
        pi = 3.14
        area = pi*self.r*self.r
        print("Area of Circle is : ",area)
        
        
r=int(input("Enter Radious : "))
obj = Circle(r)
obj.area(r)


