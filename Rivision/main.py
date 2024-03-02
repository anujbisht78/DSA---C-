# def plusOne(arr):
#     str1 = [str(i) for i in arr]
#     str2 = int(",".join(str1))
#     str2 = str2 + 1
#     str3 = [int(i) for i in str(str2)]
#     str3 = str(str3)
#     # str3=",".join(str3)
#     # str3='[' + str3 + ']'
#     print(str(str3))
    
  
# arr = [1,2,3]
# plusOne(arr)
def findDuplicate(arr, n):
    
    for i in range(n):
        for j in range(i+1,n):
            if arr[i] == arr[j]:
                print(arr[i])
                
        
          
          
arr = [1,3,4,2,2]
n = len(arr)
findDuplicate(arr,n)