
function getCheckPalindromeNumber(num) {
    let reversed = 0, n;
    n = num;
    while (num != 0) {
        reversed=(reversed*10)+num%10;
        num/=10;
        num=Math.floor(num)
    }
    return n==reversed;
}

let num = 12321;
ans = getCheckPalindromeNumber(num);
if (ans)
    console.log(num + " is a Palindrome Number");
else
    console.log(num + " is not a Palindrome Number");