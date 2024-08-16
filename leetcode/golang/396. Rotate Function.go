package golang

func maxRotateFunction(A []int) int {
	if len(A) == 0 {
		return 0
	}
	var sums []int64
	sum := int64(0)

	for _, v := range A {
		sum += int64(v)
		sums = append(sums, sum)
	}

	for _, v := range A {
		sum += int64(v)
		sums = append(sums, sum)
	}
	//fmt.Println(sums)
	fsum := int64(0)
	for i, v := range A {
		fsum += int64(i) * int64(v)
	}
	ans := fsum
	l := len(A)

	for i := l + l - 2; i > l-1; i-- {

		fsum += sums[i] - sums[i-l+1] - (int64(l)-1)*int64(A[(i+1)%l])
		if ans <= fsum {
			ans = fsum
		}
		//fmt.Println(fsum)
		//fmt.Println(fsum)
	}

	return int(ans)
}
