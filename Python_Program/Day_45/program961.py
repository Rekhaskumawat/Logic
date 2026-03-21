def Summation(Brr):
   
   Sum = 0
   
   for i in range(len(Brr)):
          Sum = Sum + Brr[i]
          
   return Sum
           
def main():
    
   Size = 0
   Arr = []
   Value = 0
   Ret = 0
   
   print("Enter number of elements : ")
   Size = int(input())
   
   print("Enter the elements : ")
   
   for i in range(Size):
      Value = int(input())
      Arr.append(Value)
      
   Ret = Summation(Arr)
   
   print("Summation is : " , Ret)
      
   
main()