package golang

func arrangeCoins(n int) int {
	low, high := 1, n
	ans := 0
	var ans_n int64 = int64(n)
	for low <= high {
		mid := low + (high-low+1)/2
		cnt := int64(mid) * (int64(mid) + 1) / 2
		if cnt <= ans_n {
			ans = mid
			low = mid + 1
		} else {
			high = mid - 1
		}
	}
	return ans
}
