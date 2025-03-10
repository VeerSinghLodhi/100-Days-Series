
function getFacotorial(num) {
    if (num < 0)
        return -1;
    if (num == 0)
        return 1;
    else {
        let fact = 1;
        for (i = 1; i <= num; i++) {
            fact = fact * i;
        }
        return fact;
    }
}
let num = 5;
// num=parseInt(prompt("Enter a number : "));
num = getFacotorial(num);
if (num == -1)
    console.log("Factorial of a negative number is not defined.");
else {
    console.log("Factorial is " + num);
}