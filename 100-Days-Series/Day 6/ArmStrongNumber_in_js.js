
// Arrow Function
const getCountDigit=(num)=>{
    let count=0;
    while(num!=0){
        count++;
        num/=10;
        num=Math.floor(num);
    }
    return count;
}
// Expression Function
const getPower=function(num,power){
    let res=1;
    while(power>0){
        res*=num;
        power--;
    }
    return res;
}
//Function Declaration(Normal Function)
function getIsArmStrongNumber(num){
    temp=num,sum=0,power=getCountDigit(num);
    while(num!=0){
        sum+=getPower(num,power);
        num/=10;
        num=Math.floor(num);
    }
    return temp==sum;
}

let num=8;
ans=getIsArmStrongNumber(num);
if(ans)
    console.log(num+" is a Arm Strong");
else 
    console.log(num+" is not a Arm Strong");