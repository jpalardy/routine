package main

import (
	"fmt"
	//#include "code.h"
	"C"
)

func main() {
	fmt.Println("4 * 5 =", C.mult(4, 5))
}
