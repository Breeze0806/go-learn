package golang

import "sort"

func myabs(num int) int {
	if num < 0 {
		return -num
	} else {
		return num
	}
}

func minMoves2(nums []int) int {
	sort.Ints(nums)
	mid := nums[len(nums)/2]
	sum := 0
	for _, v := range nums {
		sum += myabs(mid - v)
	}
	return sum
}
