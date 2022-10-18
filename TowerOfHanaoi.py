#recursion implementation

def towerofhanoi(n, source, aux, dest):
    # Please add your code here
    if n == 1:                              #Base case
     print(source, dest)
     return
    if n<1:                                 #condition to check
        return -1
    
    #first we move n-1 disks from A to B with help of C 
    #then we move n-1 disks from B to C with help of A
    
    towerofhanoi(n-1, source, dest, aux)    #recursive call
    print(source, dest)
    towerofhanoi(n-1, aux, source, dest)

#main
#here n is number of disks we need to move from source rod to destination rod.
n=int(input())
print(towerofhanoi(n, 'a', 'b', 'c'))
