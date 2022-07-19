import { Link } from "react-router-dom";
import { useState, useEffect } from "react";

export function Users() {
  const URL = process.env.MY_URL;
  console.log(URL);
  const [users, setUsers] = useState([]);
  useEffect(() => {
    fetch(`${URL}`)
      .then((response) => response.json())
      .then(setUsers);
  }, []);

  return (
    <div className="usersList">
      <h1>Users</h1>
      <ol>
        {users.map((user) => (
          <li key={user.userId}>
            <Link to={`/ToDo/${user.userId}`}>{user.name}</Link>
          </li>
        ))}
      </ol>
    </div>
  );
}

export default Users;
