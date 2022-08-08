
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)



#define M 32

int main()
{
	// default constructor initializes with all bits 0
	bitset<M> bset1;

	// bset2 is initialized with bits of 20
	bitset<M> bset2(20);

	// bset3 is initialized with bits of specified binary string
	bitset<M> bset3(string("1100"));

	// cout prints exact bits representation of bitset
	cout << bset1 << endl; // 00000000000000000000000000000000
	cout << bset2 << endl; // 00000000000000000000000000010100
	cout << bset3 << endl; // 00000000000000000000000000001100
	cout << endl;

	// declaring set8 with capacity of 8 bits

	bitset<8> set8; // 00000000

	// setting first bit (or 6th index)
	set8[1] = 1; // 00000010
	set8[4] = set8[1]; // 00010010
	cout << set8 << endl; //00010010

	// count function returns number of set bits in bitset
	int numberof1 = set8.count();

	// size function returns total number of bits in bitset
	// so there difference will give us number of unset(0)
	// bits in bitset
	int numberof0 = set8.size() - numberof1;

	cout << set8 << " has " << numberof1 << " ones and "<< numberof0 << " zeros\n";//00010010 has 2 ones and 6 zeros

	// test function return 1 if bit is set else returns 0
	cout << "bool representation of " << set8 << " : ";
	for (int i = 0; i < set8.size(); i++)
		cout << set8.test(i) << " ";//bool representation of 00010010 : 0 1 0 0 1 0 0 0

	cout << endl;

	// any function returns true, if atleast 1 bit
	// is set
	if (!set8.any())
		cout << "set8 has no bit set.\n";

	if (!bset1.any())
		cout << "bset1 has no bit set.\n";//it will be output

	// none function returns true, if none of the bit
	// is set
	if (!bset1.none())
		cout << "bset1 has some bit set\n";

	// bset.set() sets all bits
	cout << set8.set() << endl;//11111111

	// bset.set(pos, b) makes bset[pos] = b
	cout << set8.set(4, 0) << endl;//11101111

	// bset.set(pos) makes bset[pos] = 1 i.e. default
	// is 1
	cout << set8.set(4) << endl;//11111111

	// reset function makes all bits 0
	cout << set8.reset(2) << endl;//11111011
	cout << set8.reset() << endl;//00000000

	// flip function flips all bits i.e. 1 <-> 0
	// and 0 <-> 1
	cout << set8.flip(2) << endl;//00000100
	cout << set8.flip() << endl;//11111011

	// Converting decimal number to binary by using bitset
	int num = 100;
	cout << "\nDecimal number: " << num<< " Binary equivalent: " << bitset<8>(num);//Decimal number: 100 Binary equivalent: 01100100


	///part-2

	bitset<4> bset1(9); // bset1 contains 1001
    bitset<4> bset2(3); // bset2 contains 0011
  
    // comparison operator
    cout << (bset1 == bset2) << endl; // false 0
    cout << (bset1 != bset2) << endl; // true  1
  
    // bitwise operation and assignment
    cout << (bset1 ^= bset2) << endl; // 1010
    cout << (bset1 &= bset2) << endl; // 0010
    cout << (bset1 |= bset2) << endl; // 0011
  
    // left and right shifting
    cout << (bset1 <<= 2) << endl; // 1100
    cout << (bset1 >>= 1) << endl; // 0110
  
    // not operator
    cout << (~bset2) << endl; // 1100
  
    // bitwise operator
    cout << (bset1 & bset2) << endl; // 0010
    cout << (bset1 | bset2) << endl; // 0111
    cout << (bset1 ^ bset2) << endl; // 0101
	return 0;
}


