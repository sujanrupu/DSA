//Link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

class Solution:    
    #Function to return the count of number of elements in union of two arrays.
    def doUnion(self,a,n,b,m):
        
        #code here
        res = a + b
        res = set(res)
        return len(res)
