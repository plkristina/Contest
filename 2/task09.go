func isLucky(num string) bool {
    if num[0] + num[1] + num[2] == num[3] + num[4] + num[5] {
        return true
    }
    return false
}
