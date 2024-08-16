package golang

func intersection(nums1 []int, nums2 []int) []int {
	num_map := make(map[int]int, len(nums1))
	for _, v := range nums1 {
		_, ok := num_map[v]
		if !ok {
			num_map[v] = 1
		}
	}
	var ans []int
	ans_map := make(map[int]int, len(nums1))
	for _, v := range nums2 {
		_, ok := num_map[v]
		_, ans_ok := ans_map[v]
		if ok && !ans_ok {
			ans = append(ans, v)
			ans_map[v] = 1
		}
	}
	return ans
}
