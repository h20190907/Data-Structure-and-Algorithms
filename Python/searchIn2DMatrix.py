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
