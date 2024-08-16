package golang

func matrixReshape(nums [][]int, r int, c int) [][]int {
	if len(nums) == 0 {
		return nums
	}

	x := len(nums)
	y := len(nums[0])

	if x*y != r*c {
		return nums
	}

	n := -1
	m := 0
	ans := make([][]int, r)

	for i := range ans {
		ans[i] = make([]int, c)
	}

	for _, v := range nums {
		for _, vv := range v {
			if c == n+1 {
				n = 0
				m++
			} else {
				n++
			}
			ans[m][n] = vv
		}
	}

	return ans
}
