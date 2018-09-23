
#ifndef _ZCC_H
# define _ZCC_H

/*
 * ZCC has: 
 *  - 9 coinbase outputs for the first two years
 *  - 2 coinbase outputs for the second two years
 *  - 2 coinbase outputs for the third two years
 *  - 1 thereafter
 * 'ccsolominer' makes the first outputfor the miner
 *  based on the mining address '--coinbase-addr'
 *  The ZCC founder/treasury ones follow are and are 
 *  constant for a specific halving period.
 */

#define ZCC_FIRST_HALVING	210000
#define ZCC_SECOND_HALVING	420000
#define ZCC_THIRD_HALVING	630000


/*Founder 1*/
static char founder_01_output[] = {
	0x00, 0xe1, 0xf5, 0x05, 0x00, 0x00, 0x00, 0x00,					// Value in Zatoshis (100000000/1.00ZCC) 8 bytes [Founder 1]
	0x19,															// pubkey script length 25
	0x76,															// OP_DUP 
	0xa9,															// OP_HASH160
	0x14,															// push 20 bytes
// Testnet
//	0x2a, 0xb2, 0xb6, 0x39, 0xb2, 0x83, 0x8d, 0x78,					// <2ab2b639b2838d7884b47e4e4da6e820bf6c90f0>
//	0x84, 0xb4, 0x7e, 0x4e, 0x4d, 0xa6, 0xe8, 0x20,
//	0xbf, 0x6c, 0x90, 0xf0,
// Mainnet															// c5TCxXYaQbdpKP2ajtrn82iMdaC7GRtFqG
    0x2c, 0x64, 0xa4, 0x05, 0x71, 0x09, 0xbc, 0xc8, 
	0xa4, 0x86, 0xc7, 0x22, 0x03, 0xed, 0xca, 0xc0, 
	0x15, 0x69, 0xf8, 0x6f,
	0x88,															// OP_EQUALVERIFY
	0xac															// OP_CHECKSIG
};
static int founder_01_output_len = sizeof(founder_01_output);


/*Founder 2*/
static char founder_02_output[] = {
	0x00, 0xe1, 0xf5, 0x05, 0x00, 0x00, 0x00, 0x00,					// Value in Zatoshis (100000000/1.00ZCC) 8 bytes [Founder 2]
	0x19,															// pubkey script length 25
	0x76,															// OP_DUP 
	0xa9,															// OP_HASH160
	0x14,															// push 20 bytes
// Testnet
//	0x5b, 0xeb, 0x1c, 0x5c, 0x4a, 0xdb, 0x60, 0x4e,					// <5beb1c5c4adb604edb68ed8878fa0307c149aa78>
//	0xdb, 0x68, 0xed, 0x88, 0x78, 0xfa, 0x03, 0x07, 
//	0xc1, 0x49, 0xaa, 0x78,
// Mainnet															// c6uDG5gaLVkjKckgi6zjzTq9EyQSXU1xut
	0x3c, 0x47, 0xd5, 0x8a, 0x6f, 0x8b, 0xdf, 0x63,
	0x42, 0xfd, 0x7d, 0x4d, 0xdc, 0xc7, 0x32, 0x44,
	0x0d, 0x5e, 0xbb, 0xce,
	0x88,															// OP_EQUALVERIFY
	0xac															// OP_CHECKSIG
};
static int founder_02_output_len = sizeof(founder_02_output);


/*Founder 3*/
static char founder_03_output[] = {
	0x00, 0xe1, 0xf5, 0x05, 0x00, 0x00, 0x00, 0x00,					// Value in Zatoshis (100000000/1.00ZCC) 8 bytes [Founder 3]
	0x19,															// pubkey script length 25
	0x76,															// OP_DUP 
	0xa9,															// OP_HASH160
	0x14,															// push 20 bytes
// Testnet
//	0x4d, 0x3c, 0xa5, 0x33, 0x4d, 0x05, 0xdd, 0x4b,				    // <4d3ca5334d05dd4b5e10163cf3584b0db4d77c33>
//	0x5e, 0x10, 0x16, 0x3c, 0xf3, 0x58, 0x4b, 0x0d,
//	0xb4, 0xd7, 0x7c, 0x33,
// Mainnet															// cE788v1ZQwE9LLS8akeRQvxxHz7jyZ5mTj
	0x8b, 0x51, 0x6d, 0xe2, 0x55, 0xa9, 0x43, 0xb5, 
	0x83, 0x4f, 0xd5, 0xc5, 0xe9, 0xbc, 0x52, 0x53, 
	0xe6, 0xd4, 0xb1, 0xf3,
	0x88,															// OP_EQUALVERIFY
	0xac															// OP_CHECKSIG
};
static int founder_03_output_len = sizeof(founder_03_output);


/*Founder 4*/
static char founder_04_output[] = {
	0x00, 0xe1, 0xf5, 0x05, 0x00, 0x00, 0x00, 0x00,					// Value in Zatoshis (100000000/1.00ZCC) 8 bytes [Founder 4]
	0x19,															// pubkey script length 25
	0x76,															// OP_DUP 
	0xa9,															// OP_HASH160
	0x14,															// push 20 bytes
// Testnet
//	0x8f, 0x0a, 0x5d, 0x98, 0xbc, 0xa4, 0xd0, 0x63,					// <8f0a5d98bca4d063cbc736fbfaaca84b41d3aad0> 
//	0xcb, 0xc7, 0x36, 0xfb, 0xfa, 0xac, 0xa8, 0x4b, 
//	0x41, 0xd3, 0xaa, 0xd0,
// Mainnet															// cGgXzCxnUTts9qRAxRAKqRbNLSJWSStmZQ
	0xa7, 0x93, 0x51, 0x00, 0x18, 0x68, 0x37, 0xd5,
	0x95, 0xa5, 0x09, 0xca, 0xac, 0xa5, 0xf2, 0x63,
	0x47, 0x7b, 0x8d, 0x79,
	0x88,															// OP_EQUALVERIFY
	0xac															// OP_CHECKSIG
};
static int founder_04_output_len = sizeof(founder_04_output);


/*Founder 5*/
static char founder_05_output[] = {
	0x00, 0xe1, 0xf5, 0x05, 0x00, 0x00, 0x00, 0x00,					// Value in Zatoshis (100000000/1.00ZCC) 8 bytes [Founder 5]
	0x19,															// pubkey script length 25
	0x76,															// OP_DUP 
	0xa9,															// OP_HASH160
	0x14,															// push 20 bytes
// Testnet
//	0x32, 0xad, 0xcd, 0x7c, 0x5d, 0x2b, 0x9e, 0x3f,					// <32adcd7c5d2b9e3f25dff69d9821f8b92ca54902> 
//	0x25, 0xdf, 0xf6, 0x9d, 0x98, 0x21, 0xf8, 0xb9, 
//	0x2c, 0xa5, 0x49, 0x02,
// Mainnet															// c6UqJ5GhGovzFEooaQMtFpH9K3EeVP5phi
	0x37, 0xab, 0x83, 0xdb, 0x80, 0xb4, 0x40, 0x8d,
	0x31, 0x07, 0x43, 0x78, 0xb7, 0xdc, 0x6f, 0x06,
	0x69, 0x6c, 0xdf, 0x4b,
	0x88,															// OP_EQUALVERIFY
	0xac															// OP_CHECKSIG
};
static int founder_05_output_len = sizeof(founder_05_output);


/*Founder 6*/
static char founder_06_output[] = {
	0x00, 0xe1, 0xf5, 0x05, 0x00, 0x00, 0x00, 0x00,					// Value in Zatoshis (100000000/1.00ZCC) 8 bytes [Founder 6]
	0x19,															// pubkey script length 25
	0x76,															// OP_DUP 
	0xa9,															// OP_HASH160
	0x14,															// push 20 bytes
// Testnet
//	0xe6, 0x8c, 0x12, 0xf0, 0x5b, 0xce, 0x9f, 0x66,					// <e68c12f05bce9f661cc71bc0fafb98743914a707>
//	0x1c, 0xc7, 0x1b, 0xc0, 0xfa, 0xfb, 0x98, 0x74,
//	0x39, 0x14, 0xa7, 0x07,
// Mainnet															// c5dng8dFr6Xg685P3AhTvSngGfomRVXwen
	0x2e, 0x64, 0xf2, 0x35, 0xa8, 0xae, 0x0f, 0xf6,
	0xff, 0x92, 0x1c, 0x45, 0x39, 0x2f, 0xb8, 0xcf,
	0x85, 0xd2, 0xea, 0x21,
	0x88,															// OP_EQUALVERIFY
	0xac															// OP_CHECKSIG
};
static int founder_06_output_len = sizeof(founder_06_output);


/*Founder 7*/
static char founder_07_output[] = {
	0x00, 0xe1, 0xf5, 0x05, 0x00, 0x00, 0x00, 0x00,					// Value in Zatoshis (100000000/1.00ZCC) 8 bytes [Founder 7]
	0x19,															// pubkey script length 25
	0x76,															// OP_DUP 
	0xa9,															// OP_HASH160
	0x14,															// push 20 bytes
// Testnet
//	0xd2, 0x3d, 0x7d, 0xd4, 0xc8, 0xf2, 0x61, 0x05,					// <d23d7dd4c8f26105b4d8e2f2ad9997e3b7066696>
//	0xb4, 0xd8, 0xe2, 0xf2, 0xad, 0x99, 0x97, 0xe3, 
//	0xb7, 0x06, 0x66, 0x96,
// Mainnet															// cPGkkExJFnQue1vV2Mi5y9aazVS2KVvmz4
	0xef, 0xdc, 0xdd, 0x5a, 0xb9, 0xd0, 0x4c, 0x6a,
	0x71, 0x6c, 0x13, 0xde, 0x61, 0xdd, 0x6a, 0x73,
	0x36, 0x82, 0x19, 0x79,
	0x88,															// OP_EQUALVERIFY
	0xac															// OP_CHECKSIG
};
static int founder_07_output_len = sizeof(founder_07_output);


/* Treasury */
static char treasury_output_period_one[] = {
	0x00, 0xa3, 0xe1, 0x11, 0x00, 0x00, 0x00, 0x00,	  				// Value in Zatoshis(300000000 / 3.00ZCC) 8 bytes[Treasury]
	0x19,															// pubkey script length 25
	0x76,															// OP_DUP 
	0xa9,															// OP_HASH160
	0x14,															// push 20 bytes
// Testnet
//	0xa2, 0x84, 0xc3, 0x12, 0x65, 0x0b, 0x76, 0x38,					// <a284c312650b7638ae8846fdc19ca20e579573b1>
//	0xae, 0x88, 0x46, 0xfd, 0xc1, 0x9c, 0xa2, 0x0e, 
//	0x57, 0x95, 0x73, 0xb1, 
// Mainnet															// cMW9MEMpDEFrcSqHy1pJfmu3bgEXrYa3ZE
	0xdc, 0x74, 0xe3, 0x8c, 0x79, 0x2d, 0xc8, 0x22,
	0x80, 0xe6, 0xa2, 0x6d, 0x63, 0xef, 0x9e, 0x85,
	0xd1, 0x46, 0xe4, 0x13,
	0x88,															// OP_EQUALVERIFY
	0xac															// OP_CHECKSIG
};
static int treasury_output_period_one_len = sizeof(treasury_output_period_one);

static char treasury_output_period_two[] = {
	0x00, 0xc2, 0xeb, 0x0b, 0x00, 0x00, 0x00, 0x00, 				// Value in Zatoshis(200000000 / 2.00ZCC) 8 bytes[Treasury]
	0x19,															// pubkey script length 25
	0x76,															// OP_DUP 
	0xa9,															// OP_HASH160
	0x14,															// push 20 bytes
// Testnet
//	0xa2, 0x84, 0xc3, 0x12, 0x65, 0x0b, 0x76, 0x38,					// <a284c312650b7638ae8846fdc19ca20e579573b1>
//	0xae, 0x88, 0x46, 0xfd, 0xc1, 0x9c, 0xa2, 0x0e,
//	0x57, 0x95, 0x73, 0xb1,
// Mainnet															// cMW9MEMpDEFrcSqHy1pJfmu3bgEXrYa3ZE
	0xdc, 0x74, 0xe3, 0x8c, 0x79, 0x2d, 0xc8, 0x22,
	0x80, 0xe6, 0xa2, 0x6d, 0x63, 0xef, 0x9e, 0x85,
	0xd1, 0x46, 0xe4, 0x13,
	0x88,															// OP_EQUALVERIFY
	0xac															// OP_CHECKSIG
};
static int treasury_output_period_two_len = sizeof(treasury_output_period_two);

static char treasury_output_period_three[] = {
	0x00, 0xe1, 0xf5, 0x05, 0x00, 0x00, 0x00, 0x00,					// Value in Zatoshis (100000000/1.00ZCC) 8 bytes [Treasury 3rd period]
	0x19,															// pubkey script length 25
	0x76,															// OP_DUP 
	0xa9,															// OP_HASH160
	0x14,															// push 20 bytes
// Testnet
//	0xa2, 0x84, 0xc3, 0x12, 0x65, 0x0b, 0x76, 0x38,					// <a284c312650b7638ae8846fdc19ca20e579573b1>
//	0xae, 0x88, 0x46, 0xfd, 0xc1, 0x9c, 0xa2, 0x0e,
//	0x57, 0x95, 0x73, 0xb1,
// Mainnet															// cMW9MEMpDEFrcSqHy1pJfmu3bgEXrYa3ZE
	0xdc, 0x74, 0xe3, 0x8c, 0x79, 0x2d, 0xc8, 0x22,
	0x80, 0xe6, 0xa2, 0x6d, 0x63, 0xef, 0x9e, 0x85, 0xd1,
	0x46, 0xe4, 0x13,
	0x88,															// OP_EQUALVERIFY
	0xac															// OP_CHECKSIG
};
static int treasury_output_period_three_len = sizeof(treasury_output_period_three);


static void add_zcc_outputs(char *cbtx, int *pcbtx_size, int gbt_height);

#endif // _ZCC_H
