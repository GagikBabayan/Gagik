import React from "react";
import UserList from "../components/UserList";
import UserForm from "../components/UserForm";
import { useState, useReducer,useEffect } from "react";



export function HomePage() {
    const [usersData, setUsersData] = useState([]);
        
        useEffect(() => {
            fetch('http://localhost:3001/todos')
        .then((response) => response.json())
        .then((data) => setUsersData(data));
    }, []);


    function setUser (user) {
        const sendingData = JSON.stringify({user});
        fetch("http://localhost:3001/setUser",{
            method:"post",
            headers: {
                "content-type": "application/json"
            },
            body: sendingData
        })
    }

    function deleteUser (userId) {
        fetch(`http://localhost:3001/deleteUser/${userId}`,{
            method:"delete",
            headers: {
                "content-type": "application/json"
            },
        })

    }

    return (
            <div>
                <UserForm onAdd={(userName) => {
                    let newUsers = [
                        ...usersData,
                        {
                            id: Math.random(),
                            name: userName,
                        }
                    ];
                    setUsersData(newUsers);
                    setUser({userName, id:newUsers[newUsers.length - 1].id});
                }} />
                <UserList
                    users={usersData}
                    onDelete={(user) => {
                        deleteUser(user.id);
                        let newUsers =  usersData.filter((t) => t.id !== user.id);
                        setUsersData(newUsers);
                    }}
                />
            </div>
    )
}