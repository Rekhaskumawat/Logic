class Arithematic:
       
       def __init__(self , A , B):
              self.No1 = A
              self.No2 = B
              
       def Addition(self):
             Ans = 0
             Ans = self.No1 + self.No2
             return Ans
       
       def Subtraction(self):
             Ans= 0
             Ans = self.No1 - self.No2
             return Ans
       
def main():
       
       Value1 = int(input("Enter First Number : "))
       Value2 = int(input("Enter Second Number : "))
       dobj = Arithematic(Value1 , Value2)
       
       ret = dobj.Addition()
       print("Additon is : ", ret)
       ret = dobj.Subtraction()
       print("Subtraction is : ", ret)

main()