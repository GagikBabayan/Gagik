//generates a random number in the range 1 - 100
let random = Math.floor(Math.random() * 100 + 1);

// We take the values of the ids
let num = document.getElementById("input");
let count = document.getElementById("countValue");
let score = document.getElementById("scoreValue");
let help = document.getElementById("help");

//this function deletes the import location
function deleteInput() {
  num.value = "";
}

//this function only lets you read և does not let you enter values
function readOnly() {
  document.getElementById("input").readOnly = true;
}

//It's the function of this defeat, it changes the text, it turns red
function loseInport() {
  document.getElementById("text").style.color = "red";
  document.getElementById("text").innerHTML = "You loss";
  alert(random);
  readOnly();
}

//It's the function of this victory, it changes the text, it turns green
function winInport() {
  document.getElementById("text").style.color = "green";
  document.getElementById("text").innerHTML = "You win";
  readOnly();
}

function changeCount() {
  //If we answer incorrectly, we will get Count(Count page) and reduce by 1
  let count1 = Number(count.innerText) - 1;
  document.getElementById("countValue").innerHTML = count1;

  //if Count1(Count in page) becomes 0, the game ends, the  and  function loseInport is called
  if (count1 === 0) {
    loseInport();
    return;
  }
}

let check = () => {
  //num1 we give the entered number
  let num1 = Number(num.value);

  //If the number we enter matches the number we remember, we win, and winInport and calcScore functions are called.
  if (num1 === random) {
    winInport();
    calcScore();
  } else {
    //We call the changeCount () function to change it to Count because we are wrong to answer
    changeCount();

    let sub = Math.abs(random - num1);
    let check;

    //We check that the stored value is greater or less than our imported number
    if (num < random) {
      check = `${num1} < mindedNum`;
    } else {
      check = `${num1} > mindedNum`;
    }

    //We check our distance from the memorized number
    if (sub <= 10 && sub > 5) {
      help.innerHTML = "superlow  " + check;
    } else if (sub <= 5) {
      help.innerHTML = "low  " + check;
    } else if (sub > 10 && sub <= 15) {
      help.innerHTML = "superhigh  " + check;
    } else if (sub > 15) {
      help.innerHTML = "high  " + check;
    }
  }
};

// Input value  by using  Enter button
document.addEventListener("keydown", function (event) {
  if (event.key === "Enter") {
    check();
    deleteInput();
  }
});

// Output Highscore and Input Highscore in sessionStorage
function calcScore() {
  let arrScore = [6, 12, 15, 20, 25, 35, 40];
  let countindex = Number(count.innerText);

  for (let i = 0; i < arrScore.length; i++) {
    if (i + 1 === countindex) {
      document.getElementById("scoreValue").innerHTML = arrScore[i];
      arrScore[i] > Number(sessionStorage.getItem("highScoore"))
        ? sessionStorage.setItem("highScoore", `${arrScore[i]}`)
        : sessionStorage.getItem("highScoore");
      return;
    }
  }
}

//Clicking the button again invokes a feature that refreshes the site
document.getElementById("again").onclick = function () {
  document.location.reload(true);
};
