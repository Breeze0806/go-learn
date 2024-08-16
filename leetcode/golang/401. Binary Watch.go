package golang

import "fmt"

func get(n, m uint, d int, s *[]string) {
	if n > 8 {
		return
	}
	if (m>>6) > 11 || (m&0x3f) > 59 {
		return
	}
	if n == 0 {
		(*s) = append((*s), fmt.Sprintf("%d:%02d", (m>>6), (m&0x3f)))
		return
	}
	if d < 0 {
		return
	}
	get(n, m, d-1, s)
	get(n-1, m|(1<<uint(d)), d-1, s)

}

func readBinaryWatch(num int) []string {
	var s []string
	get(uint(num), 0, 10, &s)
	return s
}
