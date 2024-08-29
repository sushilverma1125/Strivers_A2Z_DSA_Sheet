int gcd(int a,int b)
{
	//Write your code here
	while(a > 0 && b > 0) {
		if(a > 0) a = a %b;
		else b = b % a;
	}
	if(a == 0) return b;
	else a;
}

