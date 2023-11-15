package main

import (
	"encoding/csv"
	"fmt"
	"os"
	"sort"
	"strconv"
)

type Passanger struct {
	Pclass int
	Name   string
	Age    int
}

func main() {

	file, err := os.Open("train.csv")
	if err != nil {
		panic(err)
	}
	defer file.Close()

	CsvFile := csv.NewReader(file)

	lines, err := CsvFile.Read()
	if err != nil {
		panic(err)
	}

	var class, age int
	fmt.Scan(&class, &age)
	names := make(map[int][]string)

	for i := 0; i < len(lines); i++ {
		if lines[i] == "female" {
			pclass, _ := strconv.Atoi(lines[i-2])
			ageInt, _ := strconv.Atoi(lines[i+1])
			passanger := Passanger{
				Pclass: pclass,
				Name:   lines[i-1],
				Age:    ageInt,
			}
			if passanger.Pclass == class && passanger.Age > age {
				names[passanger.Age] = append(names[passanger.Age], passanger.Name)
			}
		}
	}
	var answer []int
	for age := range names {
		answer = append(answer, age)
	}
	sort.Ints(answer)
	for i := range answer {
		sort.Strings(names[answer[i]])
		for j := range names[answer[i]] {
			fmt.Println(names[answer[i]][j])
		}
	}
}
