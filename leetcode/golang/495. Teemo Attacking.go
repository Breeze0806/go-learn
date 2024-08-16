package golang

func findPoisonedDuration(timeSeries []int, duration int) int {
	ans := 0
	start := 0
	end := 0
	for i, v := range timeSeries {
		if i == 0 {
			start = v
			end = v + duration
		} else {
			if end < v {
				ans += end - start
				start = v
			}
			end = v + duration
		}
	}
	ans += end - start
	return ans
}
