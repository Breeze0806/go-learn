package golang

func findMaxConsecutiveOnes(nums []int) int {
	ans := 0
	now := 0
	for _, v := range nums {
		if v == 0 {
			if ans < now {
				ans = now
			}
			now = 0
		}
		now += v
	}
	if ans < now {
		ans = now
	}
	return ans
}
