package main

import (
	"fmt"
	"os"
	"strconv"
)

func hanoi(rings int, src int, dst int, tmp int, f func(int, int)) {
	if rings == 1 {
		f(src, dst)
		return
	}

	hanoi(rings-1, src, tmp, dst, f)
	hanoi(1, src, dst, tmp, f)
	hanoi(rings-1, tmp, dst, src, f)
}

func main() {
	rings, err := strconv.Atoi(os.Args[1])
	if err == nil {
		hanoi(rings, 1, 3, 2, func(src int, dst int) {
			fmt.Println(src, "->", dst)
		})
	}
}
