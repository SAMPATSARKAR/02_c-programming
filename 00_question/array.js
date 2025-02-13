var output = [];
var count = 1;
function fizzBuzz(){
   
// output.push(count);

if (count%5===0 || count%3===0){
       output.push("fizz");
}
else if (count%5===0 && count%3===0){
       output.push("fizzBuzz");
}
else{
    output.push(count);
}

count+=1;


console.log(output);
}