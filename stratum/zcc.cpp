
#include "zcc.h"
#include "stratum.h"


static void add_zcc_outputs(char *cbtx, int *pcbtx_size, int gbt_height)
{
	if (gbt_height < ZCC_FIRST_HALVING)
	{
		debuglog("ZCC First period - 9 coinbase outputs\n");
		memcpy(&cbtx[*pcbtx_size], founder_01_output, founder_01_output_len);
		*pcbtx_size += founder_01_output_len;
		memcpy(&cbtx[*pcbtx_size], founder_02_output, founder_02_output_len);
		*pcbtx_size += founder_02_output_len;
		memcpy(&cbtx[*pcbtx_size], founder_03_output, founder_03_output_len);
		*pcbtx_size += founder_03_output_len;
		memcpy(&cbtx[*pcbtx_size], founder_04_output, founder_04_output_len);
		*pcbtx_size += founder_04_output_len;
		memcpy(&cbtx[*pcbtx_size], founder_05_output, founder_05_output_len);
		*pcbtx_size += founder_05_output_len;
		memcpy(&cbtx[*pcbtx_size], founder_06_output, founder_06_output_len);
		*pcbtx_size += founder_06_output_len;
		memcpy(&cbtx[*pcbtx_size], founder_07_output, founder_07_output_len);
		*pcbtx_size += founder_07_output_len;
		memcpy(&cbtx[*pcbtx_size], treasury_output_period_one, treasury_output_period_one_len);
		*pcbtx_size += treasury_output_period_one_len;
	} 
	else if (gbt_height < ZCC_SECOND_HALVING)
	{
		debuglog("ZCC Second period - 2 coinbase outputs\n");
		memcpy(&cbtx[*pcbtx_size], treasury_output_period_two, treasury_output_period_two_len);
		*pcbtx_size += treasury_output_period_two_len;
	}
	else if (gbt_height < ZCC_THIRD_HALVING)
	{
		debuglog("ZCC Third period - 2 coinbase outputs\n");
		memcpy(&cbtx[*pcbtx_size], treasury_output_period_three, treasury_output_period_three_len);
		*pcbtx_size += treasury_output_period_three_len;
	}
	else
	{
		debuglog("ZCC later periods - 1 coinbase output\n");
		return;
	}
}


