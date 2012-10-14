package main

import "fmt"
import "strconv"

func main() {
	count := 0
	for i := 0; i <= 999999; i++ {
		si := strconv.Itoa(i)
		digits := make(map[rune]bool)
		repeat := false
		for _, d := range si {
			if digits[d] {
				repeat = true
				break
			} else {
				digits[d] = true
			}
		}
		if !repeat {
			count++
		}
	}
	fmt.Println(count)
}
