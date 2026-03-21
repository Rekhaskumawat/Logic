def Maximum(Brr):
   
   Max = Brr[0]

   for i in range(len(Brr)):
      
      if(Brr[i] > Max):
         Max = Brr[i]
      
   return Max
           
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
      
   Ret = Maximum(Arr)
   
   print("Maximum  is : " , Ret)
      
   
main()