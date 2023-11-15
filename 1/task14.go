package main

import "fmt"

func main() {
    var row, col int
    fmt.Scan(&row, &col)
    fmt.Print("    |")
    for m := 1; m <= col; m++ {
        switch {
            case m / 10 == 0 : fmt.Print("   ", m)
            case m / 100 == 0 : fmt.Print("  ", m)
            default : fmt.Print(" ", m)
        }
    }
    fmt.Println("")
    fmt.Print("   --")
    for n := 1; n <= col; n++ {
        fmt.Print("----")
    }    
    fmt.Println("")
    
    for i := 1; i <= row; i++ {
        switch {
            case i / 10 == 0 : fmt.Print("   ", i)
            case i / 100 == 0 : fmt.Print("  ", i)
            default : fmt.Print(" ", i)
        }
        fmt.Print("|")
        for j := 1; j <= col; j++ {
            switch {
                case (i * j) / 10 == 0 : fmt.Print("   ", i * j)
                case (i * j) / 100 == 0 : fmt.Print("  ", i * j)
                default : fmt.Print(" ", i * j)
            }
        }
        fmt.Println("")
    }
}
