package golang

func findTargetSumWays(nums []int, S int) int {
	mid := 0
	for _, v := range nums {
		mid += v
	}
	dp := make([][]int, 2)
	for i, _ := range dp {
		dp[i] = make([]int, mid+mid+1)
	}
	dp[0][mid] = 1
	for i, v := range nums {
		for j, _ := range dp[(i+1)%2] {
			dp[(i+1)%2][j] = 0
		}
		for j := 0; j <= mid+mid; j++ {
			if j >= v {
				dp[(i+1)%2][j-v] += dp[i%2][j]
			}
			if j+v <= mid+mid {
				dp[(i+1)%2][j+v] += dp[i%2][j]
			}
		}
	}
	if S > mid || S < -mid {
		return 0
	}

	return dp[len(nums)%2][S+mid]
}
