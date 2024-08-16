package golang

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func newTreeNode() *TreeNode {
	return &TreeNode{}
}

func dfs(m **TreeNode, t *TreeNode) {

	if t == nil {
		return
	}

	if (*m) == nil {
		(*m) = newTreeNode()
	}

	(*m).Val += t.Val
	dfs(&((*m).Left), t.Left)
	dfs(&((*m).Right), t.Right)

}

func mergeTrees(t1 *TreeNode, t2 *TreeNode) *TreeNode {
	if t1 == nil && t2 == nil {
		return nil
	}

	m := newTreeNode()

	dfs(&m, t1)
	dfs(&m, t2)

	return m
}
