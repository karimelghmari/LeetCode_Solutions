# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def trav(self,root):
        if not root:
            return self.result
        self.trav(root.left)
        self.result.append(root.val)
        self.trav(root.right)
        return self.result
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        self.result=[]
        return self.trav(root)
        