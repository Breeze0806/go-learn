package golang

func findDisappearedNumbers(nums []int) []int {
	for i := 0; i < len(nums); i++ {
		m := nums[i]
		if nums[i] < 0 {
			m = -nums[i]
		}
		if nums[m-1] > 0 {
			nums[m-1] = -nums[m-1]
		}
	}
	var ans []int
	for i := 0; i < len(nums); i++ {
		if nums[i] > 0 {
			ans = append(ans, i+1)
		}
	}
	return ans
}
