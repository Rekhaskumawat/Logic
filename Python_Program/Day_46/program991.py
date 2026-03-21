#Done
class Node:
    
    def __init__(self , value):
        self.data = value
        self.next = None

class SinglyLL:
    
    #Done
    def __init__(self):
        self.first = None
        self.iCount = 0
        
    def InsertFirst(self,no):
        newn = Node(no)
        
        # LinkedList is empty
        if(self.first == None):
            self.first = newn
        # it contains atleast one node
        else:
            newn.next = self.first
            self.first = newn
            
        self.iCount = self.iCount+1
        
    
    def InsertLast(self , no):
        
        newn = Node(no)
        
        # LinkedList is empty
        if(self.first == None):
            self.first = newn
        # it contains atleast one node
        else:
            
            temp = self.first
            
            while(temp.next != None):
                temp = temp.next
                
            temp.next = newn
            
        self.iCount = self.iCount+1
    
    def InsertAtPosition(self , no , ipos):
        
        #Invalid Position 
        if(ipos < 1 or ipos >(self.iCount +1)):
            print("Invalid Position")
            return
        
        if(ipos == 1):
            self.InsertFirst(no)
            return
        elif(ipos == self.iCount+1):
            self.InsertLast(no)
            return
        else:
            newn = Node(no)
            temp = self.first
            
            for i in range(1, ipos-1):
                temp = temp.next
                
            newn.next = temp.next
            temp.next = newn
            self.iCount = self.iCount+1
               
    def DeleteFirst(self):
        pass
    def DeleteLast(self):
        pass
    def DeleteAtPosition(self ,  ipos):
        pass

    #Done
    def Display(self):
        temp = self.first
        
        while(temp != None):
            
            print("| ", temp.data ," |->" , end=" ")
            temp = temp.next
            
        print("None")
    
    #Done
    def Count(self):
        return self.iCount
    
def main():
    
    sobj = SinglyLL()
    sobj.InsertFirst(101)
    sobj.InsertFirst(51)
    sobj.InsertFirst(21)
    sobj.InsertFirst(11)
    
    print("Elements of LinkedList Are :- ")
    sobj.Display()
    
    print("Number of elements in LinkedList are :- ", sobj.Count())
    
    sobj.InsertLast(111)
    sobj.InsertLast(121)
    
    print("Elements of LinkedList Are :- ")
    sobj.Display()
    
    print("Number of elements in LinkedList are :- ", sobj.Count())
    
    sobj.InsertAtPosition(75 ,4)
    
    print("Elements of LinkedList Are :- ")
    sobj.Display()
    
    print("Number of elements in LinkedList are :- ", sobj.Count())
        
if __name__ == "__main__":
    main()
        