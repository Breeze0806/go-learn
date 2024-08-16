package golang

func constructRectangle(area int) []int {
	ans := make([]int, 2)
	ans[0] = area
	ans[1] = 1
	for i := 2; i*i <= area; i++ {
		if area%i == 0 {
			if area/i-i < ans[0]-ans[1] {
				ans[0] = area / i
				ans[1] = i
			}
		}
	}
	return ans
}
