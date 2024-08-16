package golang

func countSegments(s string) int {
	i := -1
	for j, v := range s {
		if v != ' ' {
			i = j
			break
		}
	}
	if i == -1 {
		return 0
	}
	cnt := 1
	for ; i < len(s); i++ {
		if i+1 < len(s) {
			if s[i] == ' ' && s[i+1] != ' ' {
				cnt++
			}
		}
	}
	return cnt
}
