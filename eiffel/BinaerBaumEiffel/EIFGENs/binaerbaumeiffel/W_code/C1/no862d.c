/*
 * Class NODE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_862 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_862 [] = {0xFF11,236,0xFF12,861,0xFFFF};
static EIF_TYPE_INDEX gen_type2_862 [] = {0xFF11,861,0xFFFF};
static EIF_TYPE_INDEX gen_type3_862 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_862 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_862 [] = {0xFF11,861,0xFFFF};
static EIF_TYPE_INDEX gen_type6_862 [] = {0xFF11,861,0xFFFF};
static EIF_TYPE_INDEX gen_type7_862 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_862 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_862 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_862 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_862 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_862 [] = {0xFF11,861,0xFFFF};


static struct desc_info desc_862[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_862},
	{1, (BODY_INDEX)-1, 236, gen_type1_862},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 861, gen_type2_862},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_862},
	{14, (BODY_INDEX)-1, 0, gen_type4_862},
	{15, (BODY_INDEX)-1, 861, gen_type5_862},
	{16, (BODY_INDEX)-1, 861, gen_type6_862},
	{17, (BODY_INDEX)-1, 0, gen_type7_862},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_862},
	{21, (BODY_INDEX)-1, 219, gen_type9_862},
	{22, (BODY_INDEX)-1, 219, gen_type10_862},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_862},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 861, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 861, gen_type12_862},
	{12599, 24, 205, NULL},
	{12600, 0, 861, NULL},
	{12601, 8, 861, NULL},
	{12602, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12603, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12604, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12605, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12606, (BODY_INDEX)-1, 861, NULL},
	{12607, (BODY_INDEX)-1, 861, NULL},
	{12608, (BODY_INDEX)-1, 205, NULL},
	{12610, 16, 861, NULL},
	{12611, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12609, (BODY_INDEX)-1, 861, NULL},
};

extern void Init862(void);
void Init862(void)
{
	IDSC(desc_862, 0, 861);
	IDSC(desc_862 + 1, 1, 861);
	IDSC(desc_862 + 32, 344, 861);
	IDSC(desc_862 + 42, 343, 861);
}


#ifdef __cplusplus
}
#endif
