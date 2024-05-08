#!/usr/bin/node
const process = require('node:process');

function createAddClosure () {
	/** declare and initialize globSum, encapsulated in closure creator func **/
	let globSum;

	/** define add function, returned by the closure creator func **/
	function add(a, b) {
		let lenA = a.length;
		let lenB = b.length;
		let i = lenA - 1;
		let j = lenB - 1;
		let k = 0;
		let digitA;
		let digitB;
		let sum;
		let carry = 0;
		let start;
		let end;
		let temp;
		let tempSum = '';

		while (i >= 0 || j >= 0 || carry) {
			digitA = (i >= 0) ? parseInt(a[i]) : 0;
			digitB = (j >= 0) ? parseInt(b[j]) : 0;
			sum = digitA + digitB + carry;

			tempSum = String(sum % 10) + tempSum;
			carry = Math.floor(sum / 10);

			(i >= 0) ? i-- : i;
			(j >= 0) ? j-- : j;
		}

		start = 0;
		end = k - 1;
		while (start < end) {
			temp = tempSum[start];
			tempSum[start] = tempSum[end];
			tempSum[end] = temp;
			start++;
			end--;
		}

		globSum = tempSum;
	}

	/** return add and globSum getter (getSum) in obj **/
	return { add, getSum: () => globSum };
}

function fibonacci(n) {
	/** create closure instance **/
	let addClosure = createAddClosure();

	/** extract add **/
	let add = addClosure.add
	
	let a = '1';
	let b = '2';

	process.stdout.write(`${a}, ${b}`);

	let i = 3;
	while (i <= n) {
		add(a, b);
		process.stdout.write(`, ${addClosure.getSum()}`); /** call getter **/
		a = b;
		b = addClosure.getSum();
		i++;
	}
}

function driver() {
	const n = 98;
	fibonacci(n);
	process.stdout.write('\n');
}

driver()
