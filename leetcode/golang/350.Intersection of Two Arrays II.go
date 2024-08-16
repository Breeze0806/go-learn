package golang

func get_num_map(nums []int) map[int]int {
	nums_map := make(map[int]int, len(nums))
	for _, v := range nums {
		_, ok := nums_map[v]
		if ok {
			nums_map[v]++
		} else {
			nums_map[v] = 1
		}
	}
	return nums_map
}

func intersect(nums1 []int, nums2 []int) []int {
	nums1_map := get_num_map(nums1)
	nums2_map := get_num_map(nums2)
	var ans []int
	for k, v := range nums1_map {
		if val, ok := nums2_map[k]; ok {
			min := val
			if v < val {
				min = v
			}
			for i := 0; i < min; i++ {
				ans = append(ans, k)
			}
		}
	}
	return ans
}
