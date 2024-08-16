package golang

import "strconv"

func findNthDigit(n int) int {
	cnt, bits := make([]int64, 10), make([]int64, 10)
	bit := int64(1)
	for i, _ := range bits {
		bits[i] = bit
		bit *= 10
	}
	bits[0] = 0
	for i, _ := range cnt {
		if i == 0 {
			cnt[i] = 0
		} else {
			cnt[i] = (bits[i] - bits[i-1]) * int64(i)
		}
	}
	j := int64(0)
	n64 := int64(n)
	for i, _ := range cnt {
		if n64 > cnt[i] {
			n64 -= cnt[i]
			j = int64(i) + 1
		}
	}
	num := bits[j-1] + n64/j
	index := n64 % j
	s := strconv.FormatInt(num, 10)
	return int(s[index] - '0')
}
