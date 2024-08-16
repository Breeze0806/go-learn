package golang

func firstUniqChar(s string) int {
	map_s := make([]int, 256)
	for _, v := range s {
		map_s[v]++
	}
	for i, v := range s {
		if map_s[v] == 1 {
			return i
		}
	}
	return -1
}
