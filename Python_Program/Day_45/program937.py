def Addition(A ,B):
    
    Ans = 0
    Ans = A + B
    return Ans

def main():
    
    No1 = 0
    No2 = 0
    iRet = 0

    print("Enter first Number : ")
    No1 = int(input())

    print("Enter Second Number")
    No2 = int(input())

    iRet = Addition(No1 , No2)

    print("Addition is : ", iRet)

main()