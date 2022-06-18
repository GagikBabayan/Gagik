function uniqueCityFind (obj) {
    

    let arr = (obj.map(item=>item.city));

    let unique = new Set();

    for(let x = 0; x < arr.length;x++){
        unique.add(arr[x]);
    }
   

    return Array.from(unique);
}

const data = [
    {
      id: 1,
      name: 'Name one',
      city: 'Stepanakert',
    },
    {
      id: 2,
      name: 'Name one',
      city: 'Erevan',
    },
    {
      id: 3,
      name: 'Name one',
      city: 'Moscow',
    },
    {
      id: 4,
      name: 'Name one',
      city: 'Stepanakert',
    },
    {
      id: 5,
      name: 'Name one',
      city: 'Erevan',
    },
  ];

  console.log(uniqueCityFind(data));
