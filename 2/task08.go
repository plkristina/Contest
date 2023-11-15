import "strings"

func isPalindrome(line string) bool {
    var str string
    for i := 0; i < len(line); i++ {
        if ('0' <= line[i] && line[i] <= '9') || ('a' <= line[i] && line[i] <= 'z') || ('A' <= line[i] && line[i] <= 'Z') {
            str += strings.ToLower(string(line[i]))
        }
    }
    for i := 0; i < (len(str)/2); i++ {
        if str[i] != str[len(str) - i - 1] {
            return false
        }
    }
    return true
}
