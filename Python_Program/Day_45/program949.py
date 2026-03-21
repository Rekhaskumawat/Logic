def ChkPerfect(No):
    
    iSum = 0 ;
    for i in range(1 ,int((No/2)+1)):
        if(No % i  == 0):
            iSum = iSum + i
    
    return iSum == No 

def main():
    
    Value = 0
    Ret = False
    
    print("Enter the Number : ")
    Value = int(input())
    
    Ret = ChkPerfect(Value)
    
    if(Ret == True):
        print("Number is  a Perfect number")
    else:
        print("Number is not a Perfect number")
     
main()