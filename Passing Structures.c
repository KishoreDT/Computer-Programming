#include<stdio.h>
struct Fraction
{
	int num,denom;
};
struct Fraction Multiply(struct Fraction f1, struct Fraction f2)
{
	struct Fraction result;
	result.num = f1.num * f2.num;
	result.denom = f1.denom * f2.denom;
	return (result);
}
int main()
{
	struct Fraction fr1,fr2,product;
	scanf(" %d %d", &fr1.num, &fr1.denom);
	scanf(" %d %d", &fr2.num, &fr2.denom);
	product = Multiply(fr1,fr2);
	printf("Numerator:%d, Denominator:%d",product.num, product.denom);
	return 0;

}