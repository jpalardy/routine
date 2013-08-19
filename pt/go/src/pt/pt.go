package main

import (
	"fmt"
	"time"
)

type dateCond struct {
	weekday bool
	sunday  bool
}

func main() {
	fmt.Println("-------------------------------------------------")
	fmt.Println(time.Now().Format("2006-01-02"))
	fmt.Println("")
	for _, task := range getTasksToday() {
		fmt.Println("[ ]", task)
	}
}

func getTasks(dc *dateCond) []string {
	result := make([]string, 0, 10) // 10 would be more than enough...
	add := func(str string, cond bool) {
		if cond {
			result = append(result, str) // append grows the slice automatically
		}
	}
	add("memora", true)
	add("Pimsleur's Japanese 2", dc.weekday)
	add("twitter", true)
	add("review stocks", dc.weekday)
	add("1b programming", dc.weekday)
	add("weekly review", dc.sunday)
	return result
}

func dateCondToday() *dateCond {
	dc := new(dateCond)
	day := time.Now().Weekday()
	dc.weekday = day >= time.Monday && day <= time.Friday
	dc.sunday = day == time.Sunday
	return dc
}

func getTasksToday() []string {
	return getTasks(dateCondToday())
}
