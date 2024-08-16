func _pow(n int) int{
    ans := 1
    for i := 0; i < n; i++{
        ans *= 3
    }
    return ans
}

func integerBreak(n int) int {
    if n == 2 {
        return 1
    }
    if n == 3 {
        return 2
    }
    if n % 3 == 0 {
        return _pow( n / 3 )
    }else if n % 3 == 1 {
        return 4 * _pow(n / 3 - 1)
    }else {
        return 2 * _pow(n / 3)
    }
}