# https://leetcode.com/problems/search-a-2d-matrix/

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        n=len(matrix)
        if n==0:
            return 0
        m=len(matrix[0])
        sz=high= n*m-1
        lo=0
        while lo<=high:
            mid=(lo+high)//2
            if matrix[mid//m][mid%m]==target:
                return True
            elif matrix[mid//m][mid%m]<target:
                lo=mid+1
            else:
                high=mid-1
        return False
'''
#same problem with different constraints- 
# https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1
# solution-
class Solution:
	def matSearch(self,mat, N, M, X):
		# Complete this function
		i=0
		j=M-1
		while i<N and j>=0:
		    if mat[i][j]==X:
		        return 1
		    elif mat[i][j]>X:
		        j-=1
		    else:
		        i+=1
		return 0
'''
