let Value1, Value2;
function ValuesAll() {
  Value1 = Number(document.getElementById("Number1").value);
  Value2 = Number(document.getElementById("Number2").value);
}

function DeleteAll() {
  document.getElementById("Number1").value = 0;
  document.getElementById("Number2").value = 0;
  document.getElementById("result").value = 0;
}

// Delete Number1,Number2 and Result
document.getElementById("reset").onclick = function () {
  document.getElementById("operator").innerHTML = "+";
  DeleteAll();
};

// Delete Number1,Number2 and Result, with use Esc
document.addEventListener("keydown", function (event) {
  if (event.key === "Escape") {
    document.getElementById("operator").innerHTML = "+";
    DeleteAll();
  }
});

// Add + operator
document.getElementById("add").onclick = function () {
  document.getElementById("operator").innerHTML = "+";
  ValuesAll();
  document.getElementById("result").value = Value1 + Value2;
};

// Substract - operator
document.getElementById("substract").onclick = function () {
  document.getElementById("operator").innerHTML = "-";
  ValuesAll();
  document.getElementById("result").value = Value1 - Value2;
};

// Multiply * operator
document.getElementById("multiply").onclick = function () {
  document.getElementById("operator").innerHTML = "*";
  ValuesAll();
  document.getElementById("result").value = Value1 * Value2;
};

// Decide / operator
document.getElementById("decide").onclick = function () {
  document.getElementById("operator").innerHTML = "/";
  ValuesAll();
  document.getElementById("result").value =
    Value1 / Value2 == Infinity ? Infinity : Value1 / Value2;
};
