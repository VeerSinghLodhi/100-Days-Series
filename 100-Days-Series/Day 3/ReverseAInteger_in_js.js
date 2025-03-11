
function getReverseInteger(num){
    let reversed=0;
    while(num!=0){
        digit=num%10;
        reversed=(reversed*10)+digit;
        num/=10;
        num=Math.floor(num);
    }
    return reversed;
}

num=12345;
num=getReverseInteger(num);
console.log("Reversed Integer is "+num);