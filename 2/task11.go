func isValidSudoku(bord [9][9]int) bool {
    for i := 0; i < len(bord); i++ {
        setik := make(map[int]int)
        setik2 := make(map[int]int)
        for _ , num :=  range bord[i] {
            setik[num] = setik[num]+1
        }
        for n := 1; n <= 9; n++ {
            if setik[n] != 1 {
                return false
                break
            }
        }
        for j := 0; j < len(bord[0]); j++ {
            num := bord[j][i]
            setik2[num] = setik2[num]+1
        }
        for m := 1; m <= 9; m++ {
            if setik2[m] != 1 {
                return false
            }
        }
    }
    return true
}
