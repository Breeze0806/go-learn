package golang

func hammingDistance(x int, y int) int {
	cnt := 0
	if x < y {
		x, y = y, x
	}
	for ; x != 0; x, y = x>>1, y>>1 {
		if (x & 1) != (y & 1) {
			cnt++
		}
	}
	return cnt
}
