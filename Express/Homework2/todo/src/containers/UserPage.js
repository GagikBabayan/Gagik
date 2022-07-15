import React from "react";
import TodoList from "../components/TodoList"
import TodoForm from "../components/TodoForm"
import { useParams } from "react-router-dom";
import { useEffect, useState } from "react";


export function UserPage(props) {
    const [todos, setTodos] = useState([]);
    const { title } = useParams();
    const URL = `http://localhost:3001/todos/${title}`;

    useEffect(() => {
        
        fetch(URL)
        .then((response) => response.json())
        .then((data) => setTodos(data));
    }, []);

    function setUserTodos (user) {
        const sendingData = JSON.stringify({user});
        fetch(`http://localhost:3001/setUserTodos`,{
            method:"post",
            headers: {
                "content-type": "application/json"
            },
            body: sendingData
        })
    }

    function deleteUserTodo (userId, todoId) {
        fetch(`http://localhost:3001/deleteUserTodo/${userId}/${todoId}`,{
            method:"delete",
            headers: {
                "content-type": "application/json"
            }
        })

    }

    return (
        <div>
            <TodoForm onAdd={(text) => {
                let newTodos = [
                    ...todos,
                    {
                        id: Math.random(),
                        text: text,
                        isCompleted: false
                    }
                ];
                setTodos(newTodos);
                setUserTodos({id:title, todos:newTodos[newTodos.length - 1]});
            }} />
            <TodoList
                todos={todos}
                onDelete={(todo) => {
                    let newTodos = todos.filter((t) => t.id !== todo.id);
                    setTodos(newTodos);
                    deleteUserTodo(title, todo.id)
                }}
                onChange={(newTodo) => {
                    let newTodos = todos.map((todo) => {
                        if (todo.id === newTodo.id) {
                            return newTodo;
                        }
                        return todo;
                    });
                }}
            />
        </div>
    )
}