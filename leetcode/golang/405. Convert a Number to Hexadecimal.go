package golang

func toHex(num int) string {
	if num == 0 {
		return "0"
	}
	var hex []byte
	for num_u := uint32(num); num_u != 0; num_u /= 16 {
		c := num_u % 16
		if c >= 10 {
			hex = append(hex, byte(c-10)+'a')
		} else {
			hex = append(hex, byte(c)+'0')
		}
	}
	l := len(hex)
	for i := 0; i < l/2; i++ {
		hex[l-i-1], hex[i] = hex[i], hex[l-i-1]
	}
	return string(hex)
}
