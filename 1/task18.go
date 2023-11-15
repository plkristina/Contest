package main

import "fmt"

func main() {
    var n int
    var ch byte
    s := ""
    alph := make([]byte, 0, 26)
    fmt.Scan(&n)
    alph = append(alph, 'Z')
    for ch = 'A'; ch <= 'Y'; ch++ {
        alph = append(alph, ch)
    }
    for n != 0 {
        s = string(alph[n % 26]) + s
        if (n % 26 == 0) && (n / 26 != 0) {
            n -= 1
        }
        n /= 26
    }
    fmt.Print(s)
}
