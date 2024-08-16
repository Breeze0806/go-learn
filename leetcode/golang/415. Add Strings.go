package golang

func reverse(num []byte) []byte {
	for i := 0; i < len(num)/2; i++ {
		num[len(num)-i-1], num[i] = num[i], num[len(num)-i-1]
	}
	return num
}

func add(a []byte, b []byte) []byte {

	for i, v := range b {
		a[i] += (v - '0')
	}

	for i, _ := range a {
		a[i] -= '0'
		if i < len(a)-1 {
			if a[i] >= 10 {
				a[i+1]++
				a[i] -= 10
			}
		} else {
			if a[i] >= 10 {
				a = append(a, '1')
				a[i] -= 10
			}
		}
		a[i] += '0'
	}
	return a
}

func cmp_num(a string, b string) bool {
	return (len(a) < len(b)) || ((len(a) == len(b)) && (a < b))
}

func addStrings(num1 string, num2 string) string {
	a := reverse([]byte(num1))
	b := reverse([]byte(num2))
	var ans []byte
	if cmp_num(num1, num2) {
		ans = add(b, a)
	} else {
		ans = add(a, b)
	}
	ans = reverse(ans)
	return string(ans)
}
