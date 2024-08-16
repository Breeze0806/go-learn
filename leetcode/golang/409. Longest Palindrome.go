package golang

func longestPalindrome(s string) int {
	map_s := make([]int, 256)
	for _, v := range s {
		map_s[v]++
	}
	ans := 0
	flg := 0
	for _, v := range map_s {
		if v&1 == 1 {
			flg = 1
			ans += v - 1
		} else {
			ans += v
		}
	}
	ans += flg

	return ans
}
