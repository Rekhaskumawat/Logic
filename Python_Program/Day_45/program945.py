def ChkEvenOdd(No):
    
    if(No % 2 == 0):
        print("Number is Even")
    else:
        print("Number is odd")
        
def main():
    
    Value = 0
    
    print("Enter the Number : ")
    Value = int(input())
    
    ChkEvenOdd(Value)
     
main()