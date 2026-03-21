def SumDigits(No):
    
    Digit = 0
    Sum = 0
    
    while(No != 0):
        Digit = No % 10
        Sum = Sum + Digit
        No  = No // 10 
    return Sum

def main():
    
   Value = 0
   Ret = 0
   
   print("Enter the Number : ")
   Value = int(input())
   
   Ret = SumDigits(Value)
   print("Summation of Digits : " , Ret)
   
main()