package golang

import "fmt"

func fizzBuzz(n int) []string {
	var str_arr []string
	str_arr = make([]string, n)
	for i := 1; i <= n; i++ {
		if i%15 == 0 {
			str_arr[i-1] = "FizzBuzz"
		} else if i%5 == 0 {
			str_arr[i-1] = "Buzz"
		} else if i%3 == 0 {
			str_arr[i-1] = "Fizz"
		} else {
			str_arr[i-1] = fmt.Sprintf("%d", i)
		}
	}
	return str_arr
}
