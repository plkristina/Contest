package main

import "fmt"

func main() {
    var n int
    var k float64
    var new_digit float64
    prog1 := make([]float64, 0, 10)
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        fmt.Scan(&k)
        prog1 = append(prog1, k)
    }
    fmt.Print(prog1[0], " ")
    for i := 1; i < n -1; i++ {
        new_digit = (prog1[i-1] + prog1[i] + prog1[i+1]) / 3
        fmt.Print(new_digit, " ")
    }
    fmt.Print(prog1[n-1])
}
