var i = 1;

while (i<=100) {
	var result = "";
	if (i%3===0) {
		result += "Fizz";
	}
	if (i%5===0) {
		result += "Buzz";
  }
	if (result==="") {
		result = i;
	}
	document.write(result);
	i++;
	document.write("<br>");
}
