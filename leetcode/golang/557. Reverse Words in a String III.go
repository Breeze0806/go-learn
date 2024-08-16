package golang

import "strings"

func reverse(s string) string {
	b := []byte(s)
	for i := 0; i < len(b)/2; i++ {
		b[i], b[len(b)-i-1] = b[len(b)-i-1], b[i]
	}
	return string(b)
}

func reverseWords(s string) string {
	ss := strings.Split(s, " ")
	for i, v := range ss {
		ss[i] = reverse(v)
	}
	return strings.Join(ss, " ")
}
