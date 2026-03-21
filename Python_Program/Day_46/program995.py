class ArrayX:
    
    def __init__(self , Size):
        self.size = Size
        self.Arr = [0]*Size

    def Accept(self):
        print("Enter Elements : ")
        
        for i in range(self.size):
            value = int(input())
            self.Arr[i] = (value)
        
    def Display(self):
        
        print("Elements of the Array Are: ")
        
        for i in range(self.size):
            print(self.Arr[i])
            
    def Summation(self):
        
        iSum = 0
        for i in range(self.size):
            iSum = iSum+ self.Arr[i]
        return iSum
def main():
    
    aobj = ArrayX(5)
    aobj.Accept()
    aobj.Display()
    print("Addition is : ",aobj.Summation())
    
if __name__ == "__main__":
    main()