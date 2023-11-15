package main

import "fmt"

func main() {
    var money, k5000, k1000, k500, k200, k100 int
    fmt.Scan(&money)
    k5000 = money / 5000
    money -= k5000 * 5000
    k1000 = money / 1000
    money -= k1000 * 1000
    k500 = money / 500
    money -= k500 * 500
    k200 = money / 200
    money -= k200 * 200
    k100 = money / 100
    fmt.Println(k5000, k1000, k500, k200, k100)
}
