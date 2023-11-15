package main

import "fmt" 

func main() {
    var numbers = map[int] int{}
    var n, sum, num int
    f := true
    fmt.Scan(&n, &sum, &num)
    numbers[num] = sum - num
    for i := 0; (i < n - 1); i++ {
        fmt.Scan(&num)
        numbers[num] = sum - num
    }
    for j := range numbers {
        if numbers[sum - j] == j {
            if j < (sum - j) {
                fmt.Println(j, sum - j)
            } else {
                fmt.Println(sum - j, j)
            }
            f = false
            break
        }
    }
    if f {
        fmt.Println(0, 0)
    }
}
