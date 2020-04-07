//input
const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

//diagonal difference logic
function diagonalDifference(arr) {
    let n = arr.length;
    let diag1 = 0;
    let diag2 = 0;
    for(let i = 0; i < n; i++){
        for(let j=0;j< n; j++){
            //sum of principle diagonal
            if (i === j){
                diag1 += arr[i][j];

            }
            //sum of secondary diagonal
            if (i+j === n-1){
                diag2 +=arr[i][j];
            }
        }   
}
 return Math.abs(diag1 - diag2);


}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const n = parseInt(readLine().trim(), 10);

    let arr = Array(n);

    for (let i = 0; i < n; i++) {
        arr[i] = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));
    }

    const result = diagonalDifference(arr);

    ws.write(result + '\n');

    ws.end();
}
