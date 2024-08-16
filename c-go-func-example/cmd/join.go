package main

import (
	"C"

	"github.com/Breeze0806/c-func-example/lib"
)

//export Join
func Join(s1 *C.char, s2 *C.char) *C.char {
	//s := []string{C.GoString(s1), C.GoString(s2)}
	//js := strings.Join(s, " ")
	js := lib.Join(C.GoString(s1), C.GoString(s2))
	return C.CString(js)
}

func main() {

}
