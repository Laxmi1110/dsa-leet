class Solution:
    def pushZerosToEnd(self, arr):
        n = len(arr)  
        count = 0
        
        for i in range(n):
            if arr[i] != 0:
                arr[i], arr[count] = arr[count], arr[i]
                count += 1
