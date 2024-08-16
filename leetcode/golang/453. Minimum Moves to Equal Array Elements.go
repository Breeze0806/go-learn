package golang

func minMoves(nums []int) int {
	min, sum := nums[0], 0
	for _, v := range nums {
		sum += v
		if min > v {
			min = v
		}
	}
	return sum - min*len(nums)
}
