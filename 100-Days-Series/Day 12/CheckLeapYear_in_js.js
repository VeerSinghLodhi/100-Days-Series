// Arrow Function for Check Leap year
const getCheckLeapYear=(year)=>{
    // Check if the year is divisible by 4 but not by 100, 
    // or if it is divisible by 400
    if((year%4 == 0 && year%100!=0)|| year%400==0){
        return true;
    }else{
        return false;
    }
}

// Let's Start here 
let year=2024;
// Call the function and display the result
res=getCheckLeapYear(year);
if(res)
    console.log(year+" is a Leap Year!!");
else
    console.log(year+" is not a Leap Year!!");