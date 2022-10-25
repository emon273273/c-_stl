def binsearch(arr,n):
    l=0
    u=len(arr)-1
    while(l<=u):
        mid=(l+u)//2
        if(arr[mid]==n):
            global pos
            pos=mid
            return True
        else:
            if(arr[mid]<n):
                l=mid
            else:
                u=mid


arr=[3,5,5,6,7,8]

n=6
result=binsearch(arr,n)
print(pos)
