package golang

import "strconv"

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func tree2str(t *TreeNode) string {
	if t == nil {
		return ""
	}

	str := strconv.Itoa(t.Val)

	if t.Left != nil {
		str = str + "(" + tree2str(t.Left) + ")"
	}

	if t.Left == nil && t.Right != nil {
		str = str + "()"
	}

	if t.Right != nil {
		str = str + "(" + tree2str(t.Right) + ")"
	}

	return str

}
