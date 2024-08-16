package golang

import "strings"

func repeatedSubstringPattern(str string) bool {
	l := len(str)
	for i := l - 1; i >= 1; i-- {
		seq := str[0:i]
		if l%i == 0 && i != l && strings.Count(str, seq) == l/i {
			return true
		}
	}
	return false
}
