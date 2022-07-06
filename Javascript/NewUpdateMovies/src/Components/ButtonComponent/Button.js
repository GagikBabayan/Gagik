import React from "react";
import "../../Styles/Button.css"
function Button(props) {
  return <button onClick={props.onClick}> {props.value}</button>;
}

export { Button };
