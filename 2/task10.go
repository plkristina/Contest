func shift(data []int, s int) []int {
    var data2 []int 
    for n := 0; n < 10; n++ {
        data2 = append(data2, 0)
    }
    if s > 0 {
        for i := 0; i != 10; i++ {
            data2[(i + s) % 10] = data[i]
        }
    } else {
        for i := 0; i != 10; i++ {
            data2[(i + 10 + (s % 10)) % 10] = data[i]
        }
    }
    copy(data, data2)
    return data
}
