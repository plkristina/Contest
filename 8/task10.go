func printTypes(data []interface{}) {
	for i := 0; i < len(data); i++ {
		switch data[i].(type) {
		case Human:
			fmt.Print("Human ")
		case *Human:
			fmt.Print("*Human ")
		case int:
			fmt.Print("int ")
		case string:
			fmt.Print("string ")
		default:
			fmt.Print("interface ")
		}
	}
}
