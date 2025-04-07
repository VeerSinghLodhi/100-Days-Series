
// Fucntion to check if sentence is a pangram
const isPangram=(sentence)=>{
    const letters=new Set();
    for(let i=0;i<sentence.length;i++){
        let ch=sentence.charAt(i);
        ch=ch.toLowerCase();
        if(ch>='a' && ch<='z'){
            letters.add(ch);
        }
    }
    return letters.size==26;
}
// Let's Start here
let sentence="The quick brown fox jumps over the lazy dog";
if(isPangram(sentence))
    console.log("This sentence is a pangram");
else 
    console.log("This sentence is not a pangram");