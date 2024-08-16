package golang

func findAnagrams(s string, p string) []int {
	var ans []int
	if len(s) < len(p) {
		return ans
	}
	cnt := make([]int, 26)
	for _, v := range p {
		cnt[v-'a']++
	}

	var out [][]int
	for i := 0; i < 26; i++ {
		tmp := make([]int, len(s)+1)
		out = append(out, tmp)
	}

	for i, _ := range out {
		for j, v := range s {
			if int(v)-'a' == i {
				out[i][j+1] = out[i][j] + 1
			} else {
				out[i][j+1] = out[i][j]
			}
		}
	}

	for i := len(p); i < len(s)+1; i++ {
		flg := true
		for j := 0; j < 26; j++ {
			if out[j][i]-out[j][i-len(p)] != cnt[j] {
				flg = false
				break
			}
		}
		if flg {
			ans = append(ans, i-len(p))
		}
	}

	return ans
}
