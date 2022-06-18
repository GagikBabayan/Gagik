
function Sum (arr) {
    
    let  sum = {
        positive: 0,
        negative: 0
    }

    for(let i = 0; i < arr.length; i++){
        if(arr[i] < 0) {
            {sum.negative+=arr[i]};
        }
        else {
            {sum.positive+=arr[i]};
        }
    }
   

    return sum;
}

const data = [10, -12, 30, -1, -8, 0, 14, -33, 20];

  console.log(Sum(data));
