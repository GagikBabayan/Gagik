console.log(
    "1.Snickers - 200 dram",
    "\n",
    "2.CocaCola - 400 dram",
    "\n",
    "3.Jermuk -  99.9 dram",
    "\n",
    "4 Chocolate -  1200 dram",
    "\n",
    "5 Candy - 350 dram"
  );
  
  let list = [0, 0, 0, 0, 0];
  let price = [200, 400, 99.9, 1200, 350];
  let product = ["Snickers", "CocaCola", "Jermuk", "Chocolate", "Candy"];
  let total_Sum = 0;
  let sum ;
  
  for (let i = 0; i < 5; i++) {
    list[i] = prompt(`Input ${product[i]} quantity:`);
    total_Sum += list[i] * price[i];
  }
  
  if (total_Sum == 0) {
    console.log("You did not buy anything");
    alert("You did not buy anything");
  } else {
        sum = Number(prompt(`Total Sum is ${total_Sum} \n Input Sum:`));
        console.log(sum);
        if (isNaN(sum)) {
          alert("Wrong amount of money");
          console.log("Wrong amount of money");
        }

        else{
     
  
    let total_product = [];
  
    function productList() {
      for (let i = 0; i < 5; i++) {
        if (list[i] != 0) {
          total_product.push(`${product[i]} - ${list[i]} hat - ${price[i]} dram`);
        }
      }
    }
    productList();
  
    if (sum >= total_Sum) {
      console.log();
      for (let i = 0; i < total_product.length; i++) {
        if (i == 0) {
          console.log(` Total: ${sum} dram,  \n
                      Return: ${sum - total_Sum} dram, \n
                      Cost:${total_Sum} dram, \n
                      Products:  \n`);
        }
        console.log(total_product[i]);
      }
    } else {
      console.log("You do not have enough money to shop");
      alert("You do not have enough money to shop");
    }
  }
}
