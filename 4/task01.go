package main

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
)

type Project struct {
	Project_id int    `json:"project_id"`
	Tasks      []Task `json:"tasks"`
}

type Task struct {
	User_id   int    `json:"user_id"`
	Id        int    `json:"id"`
	Title     string `json:"title"`
	Completed bool   `json:"completed"`
}

func main() {
	content, _ := ioutil.ReadFile("./data.json")
	var data []Project
	err := json.Unmarshal(content, &data)
	if err != nil {
		panic(err)
	}
	var id, cnt int
	fmt.Scan(&id)
	for i := 0; i < len(data); i++ {
		for j := 0; j < len(data[i].Tasks); j++ {
			if data[i].Tasks[j].User_id == id && data[i].Tasks[j].Completed == true {
				cnt++
			}
		}
	}
	fmt.Print(cnt)
}
