package main

import "fmt"
import "math"

func main() {
    var (
        people float64 = 0.5 * 365
        dub float64
        topol float64
    )
    dub = math.Ceil(people / 20)
    topol = math.Ceil(people / 32)
    fmt.Println(people, topol, dub)
}
