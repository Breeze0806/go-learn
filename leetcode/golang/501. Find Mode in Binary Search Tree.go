package golang

import "fmt"

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func dfs(root *TreeNode, cnt *map[int]int) {
	if root == nil {
		return
	}
	fmt.Println(root.Val)
	if _, ok := (*cnt)[root.Val]; ok {
		(*cnt)[root.Val]++
	} else {
		(*cnt)[root.Val] = 1
	}
	dfs(root.Left, cnt)
	dfs(root.Right, cnt)
}
func findMode(root *TreeNode) []int {

	cnt := make(map[int]int)

	dfs(root, &cnt)

	max := 0
	for _, v := range cnt {
		if max < v {
			max = v
		}
	}

	var ans []int
	for k, v := range cnt {
		if v == max {
			ans = append(ans, k)
		}
	}
	return ans
}
