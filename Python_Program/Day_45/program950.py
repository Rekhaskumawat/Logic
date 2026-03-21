def DisplayDigits(No):
    
    while(No != 0):
        Digit = No % 10
        print(Digit)
        No  = No / 10   # iSsue
    
    

def main():
    
   Value = 0
   
   print("Enter the Number : ")
   Value = int(input())
   
   DisplayDigits(Value)
   
main()