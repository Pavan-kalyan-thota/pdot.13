//Input
process.stdin.resume();
process.stdin.setEncoding("utf-8");
var stdin_input = "";
 
process.stdin.on("data", function (input) {
    stdin_input += input;                      
});
 
process.stdin.on("end", function () {
   superReducedString(stdin_input);
});
//main logic 
//Method 1 
function superReducedString(s) {
    let stack = [];
    for(let i = 0 ;i < s.length;i++){
        if(stack.length === 0){
            stack.push(s[i]);
        }
        else if(stack[stack.length-1]=== s[i]){
                stack.pop();
            }
            else{
                stack.push(s[i]);
            }
        }
   process.stdout.write (stack.length > 0? stack.join(''):"Empty String");
}
//Method-2 (If we use this method the will not execute in given time limit.)
/*function superReducedString(s){
     var result = s.split('');
     for(let i = 0;i<= result.length ; i++){
         if(result[i]===result[i+1]){
         result.splice(i,2);
         i = -1;
        }
     }
     if(result.length === 0){
        console.log("Empty String");
     }
     else{
       console.log(result.join(''));
     }
    process.stdout.write(result.length === 0 ? "Empty String":result.join(''));
} 
*/