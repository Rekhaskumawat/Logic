def Minimum(Brr):
   
   Min = Brr[0]

   for i in range(len(Brr)):
      
      if(Brr[i] < Min):
         Min = Brr[i]
      
   return Min
           
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
      
   Ret = Minimum(Arr)
   
   print("Minimum  is : " , Ret)
      
   
main()