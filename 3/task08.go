package main

import "fmt" 

func main() {
    var nums = map[int] int{}
    var n int 
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        var d int 
        fmt.Scan(&d)
        if nums[d] == 1 {
            delete(nums, d)
        } else {
            nums[d]++
        }
    }
    for number := range nums {
        fmt.Println(number)
    }
}
