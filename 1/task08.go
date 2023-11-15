package main

import "fmt"

func main() {
    var a, b, c int
    fmt.Scan(&a, &b, &c)
    if a > b {
        if a > c {
            fmt.Print(a)
        } else {
            fmt.Print(c)
        }
    } else if b > c {
        fmt.Print(b)
    } else {
        fmt.Print(c)
    }
}
