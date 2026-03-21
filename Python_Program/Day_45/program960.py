    
def main():
    
   Size = 0
   Arr = []
   Value = 0
   
   print("Enter number of elements : ")
   Size = int(input())
   
   print("Enter the elements : ")
   
   for i in range(Size):
      Value = int(input())
      Arr.append(Value)
      
   print(Arr)
      
   
main()