package golang

func canConstruct(ransomNote string, magazine string) bool {
	var cnt [256]int
	for i := range cnt {
		cnt[i] = 0
	}

	for i := range magazine {
		cnt[magazine[i]]++
	}

	for i := range ransomNote {
		cnt[ransomNote[i]]--
		if cnt[ransomNote[i]] < 0 {
			return false
		}
	}
	return true
}
