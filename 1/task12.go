package main

import "fmt"

func main() {
    var (
        cnt int = 0
        x int
    )
    fmt.Scan(&x)
    for x != 1 {
        if x % 2 == 0 {
            x /= 2
        } else {
            x = 3 * x + 1
        }
        cnt += 1
    }
    fmt.Print(cnt)
}
