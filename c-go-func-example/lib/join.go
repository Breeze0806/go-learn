package lib

import "strings"

func Join(s1 string, s2 string) string {
	s := []string{s1, s2}
	return strings.Join(s, " ")
}
