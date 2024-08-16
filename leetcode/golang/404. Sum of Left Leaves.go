package golang

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func sumOfLeftLeaves(root *TreeNode) int {
	if root == nil {
		return 0
	} else {
		sum := 0
		if (root.Left != nil) && (root.Left.Right == nil) && (root.Left.Left == nil) {
			sum = root.Left.Val
		}
		return sumOfLeftLeaves(root.Left) + sumOfLeftLeaves(root.Right) + sum
	}

}
