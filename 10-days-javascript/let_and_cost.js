//https://www.hackerrank.com/challenges/js10-let-and-const/problem?isFullScreen=true
function main() {
    const PI= Math.PI;
    // Radius
    let r = readLine()
        
    // Print the area of the circle:
    let area = PI * Math.pow(r,2);
    console.log(area);
    // Print the perimeter of the circle:
    let perimeter = 2 * PI * r;
    console.log(perimeter);
    try {    
        // Attempt to redefine the value of constant variable PI
        PI = 0;
        // Attempt to print the value of PI
        console.log(PI);
    } catch(error) {
        console.error("You correctly declared 'PI' as a constant.");
    }
}