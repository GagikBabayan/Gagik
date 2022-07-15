import TodoItem from "./TodoItem";

const TodoList = ({ todos, onDelete, onChange }) => {
    return (
        <div>
            <header>
                <h1 className="header">todos</h1>
            </header>
            {
                todos.map(
                    (todo) => {
                        return (
                            <TodoItem
                                key={todo.id}
                                todo={todo}
                                onChange={onChange}
                                onDelete={onDelete}
                            />
                        )
                    }
                )
            }
        </div>
    )
}

export default TodoList;