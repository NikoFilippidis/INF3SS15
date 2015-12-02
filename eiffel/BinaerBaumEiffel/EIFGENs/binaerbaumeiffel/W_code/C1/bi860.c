/*
 * Code for class BINARYTREE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F860_6950(EIF_REFERENCE);
extern EIF_TYPED_VALUE F860_6951(EIF_REFERENCE);
extern void F860_6952(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F860_6953(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F860_6954(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F860_6955(EIF_REFERENCE);
extern void F860_6956(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F860_6957(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F860_6958(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F860_6959(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F860_6960(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F860_6961(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F860_6962(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit860(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BINARYTREE}.root */
EIF_TYPED_VALUE F860_6950 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4880,Dtype(Current)));
	return r;
}


/* {BINARYTREE}.ausg */
EIF_TYPED_VALUE F860_6951 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4881,Dtype(Current)));
	return r;
}


/* {BINARYTREE}.make */
void F860_6952 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 859, Current, 0, 1, 12588);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12588);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4880, 0xF800035D, 0); /* root */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(4880, dtype, Dftype(Current))));
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4896, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4880, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4881, 0xF80000DB, 0); /* ausg */
	
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4881, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {BINARYTREE}.add */
void F860_6953 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "add";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 859, Current, 1, 1, 12589);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12589);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4887, dtype))(Current, ui4_1x)).it_b);
		RTTE((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800035D, 0, 0); /* loc1 */
	
	tr1 = RTLN(861);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4896, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4884, dtype))(Current, ur1x, ui4_1x);
	} else {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 4880, 0xF800035D, 0); /* root */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(4880, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT(NULL, EX_POST);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4887, dtype))(Current, ui4_1x)).it_b);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {BINARYTREE}.addrekursive */
void F860_6954 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "addrekursive";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 859, Current, 1, 2, 12590);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12590);
	if (arg1) {
		RTCC(arg1, 859, l_feature_name, 1, eif_non_attached_type(861));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4902, "getvalue", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (arg2 <= ti4_1)) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				RTHOOK(5);
				RTDBGAL(Current, 1, 0xF800035D, 0, 0); /* loc1 */
				
				tr1 = RTLN(861);
				ui4_1 = arg2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4896, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(5,1);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(6);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4897, "setleft", arg1))(arg1, ur1x);
				RTHOOK(7);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "setparent", loc1))(loc1, ur1x);
			} else {
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ui4_1 = arg2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4884, dtype))(Current, ur1x, ui4_1x);
			}
		}
		RTHOOK(9);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4902, "getvalue", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (arg2 >= ti4_1)) {
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				RTHOOK(11);
				RTDBGAL(Current, 1, 0xF800035D, 0, 0); /* loc1 */
				
				tr1 = RTLN(861);
				ui4_1 = arg2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4896, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(11,1);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(12);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4898, "setright", arg1))(arg1, ur1x);
				RTHOOK(13);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "setparent", loc1))(loc1, ur1x);
			} else {
				RTHOOK(14);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ui4_1 = arg2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4884, dtype))(Current, ur1x, ui4_1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {BINARYTREE}.inorder */
void F860_6955 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "inorder";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 859, Current, 0, 0, 12591);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12591);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4886, dtype))(Current, ur1x);
	}
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4881, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 4881, 0xF80000DB, 0); /* ausg */
	
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4881, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(166, "put_new_line", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {BINARYTREE}.inorderrec */
void F860_6956 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "inorderrec";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 859, Current, 0, 1, 12592);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12592);
	if (arg1) {
		RTCC(arg1, 859, l_feature_name, 1, eif_non_attached_type(861));
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4886, dtype))(Current, ur1x);
		}
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4881, 0xF80000DB, 0); /* ausg */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4881, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4902, "getvalue", arg1))(arg1)).it_i4);
		RTNHOOK(4,1);
		tr2 = c_outi(ti4_1);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr1 = RTMS_EX_H(", ",2,11296);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(4881, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4886, dtype))(Current, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {BINARYTREE}.has */
EIF_TYPED_VALUE F860_6957 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 859, Current, 0, 1, 12593);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12593);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ui4_1 = arg1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4888, dtype))(Current, ui4_1x, ur1x)).it_b);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		ui4_1 = arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4888, dtype))(Current, ui4_1x, ur1x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {BINARYTREE}.hasrek */
EIF_TYPED_VALUE F860_6958 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "hasrek";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 859, Current, 1, 2, 12594);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12594);
	if (arg2) {
		RTCC(arg2, 859, l_feature_name, 2, eif_non_attached_type(861));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4902, "getvalue", arg2))(arg2)).it_i4);
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			RTHOOK(5);
			RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
			
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(6);
		tb1 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4902, "getvalue", arg2))(arg2)).it_i4);
		if ((EIF_BOOLEAN) (arg1 > ti4_1)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			RTHOOK(7);
			RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
			
			ui4_1 = arg1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4888, dtype))(Current, ui4_1x, ur1x)).it_b);
		} else {
			RTHOOK(8);
			tb1 = '\0';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4902, "getvalue", arg2))(arg2)).it_i4);
			if ((EIF_BOOLEAN) (arg1 < ti4_1)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb1) {
				RTHOOK(9);
				RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
				
				ui4_1 = arg1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4888, dtype))(Current, ui4_1x, ur1x)).it_b);
			}
		}
	}
	RTHOOK(10);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {BINARYTREE}.del */
EIF_TYPED_VALUE F860_6959 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "del";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 859, Current, 0, 1, 12595);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12595);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4887, dtype))(Current, ui4_1x)).it_b);
		RTTE((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ui4_1 = arg1;
	ur2 = NULL;
	ub1 = (EIF_BOOLEAN) 0;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4890, dtype))(Current, ur1x, ui4_1x, ur2x, ub1x)).it_b);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4887, dtype))(Current, ui4_1x)).it_b);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
#undef arg1
}

/* {BINARYTREE}.delrec */
EIF_TYPED_VALUE F860_6960 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "delrec";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_b = * (EIF_BOOLEAN *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,loc1);
	RTLR(7,loc4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_BOOL,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 859, Current, 4, 4, 12596);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12596);
	if (arg1) {
		RTCC(arg1, 859, l_feature_name, 1, eif_non_attached_type(861));
	}
	if (arg3) {
		RTCC(arg3, 859, l_feature_name, 3, eif_non_attached_type(861));
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(4);
		RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
		
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(5);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN) !loc3)) {
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4902, "getvalue", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
			RTHOOK(7);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb1 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			if (tb1) {
				RTHOOK(8);
				if ((EIF_BOOLEAN)(arg3 == NULL)) {
					RTHOOK(9);
					RTDBGAA(Current, dtype, 4880, 0xF800035D, 0); /* root */
					
					*(EIF_REFERENCE *)(Current + RTWA(4880, dtype)) = (EIF_REFERENCE) NULL;
				} else {
					RTHOOK(10);
					ur1 = RTCCL(arg3);
					ub1 = arg4;
					ur2 = NULL;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4891, dtype))(Current, ur1x, ub1x, ur2x);
				}
				RTHOOK(11);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(12);
				RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
				
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(13);
			tb1 = '\0';
			tb2 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb2 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb2) {
				tb1 = (EIF_BOOLEAN) !loc3;
			}
			if (tb1) {
				RTHOOK(14);
				if ((EIF_BOOLEAN)(arg3 == NULL)) {
					RTHOOK(15);
					RTDBGAA(Current, dtype, 4880, 0xF800035D, 0); /* root */
					
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(4880, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(16);
					ur1 = RTCCL(arg3);
					ub1 = arg4;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur2 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4891, dtype))(Current, ur1x, ub1x, ur2x);
				}
				RTHOOK(17);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(18);
				RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
				
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(19);
			tb1 = '\0';
			tb2 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb2 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			if (tb2) {
				tb1 = (EIF_BOOLEAN) !loc3;
			}
			if (tb1) {
				RTHOOK(20);
				if ((EIF_BOOLEAN)(arg3 == NULL)) {
					RTHOOK(21);
					RTDBGAA(Current, dtype, 4880, 0xF800035D, 0); /* root */
					
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(4880, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(22);
					ur1 = RTCCL(arg3);
					ub1 = arg4;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur2 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4891, dtype))(Current, ur1x, ub1x, ur2x);
				}
				RTHOOK(23);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(24);
				RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
				
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(25);
			RTDBGAL(Current, 1, 0xF800035D, 0, 0); /* loc1 */
			
			tr1 = RTLN(861);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4896, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(25,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(26);
			RTDBGAL(Current, 1, 0xF800035D, 0, 0); /* loc1 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4892, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(27);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tb1 = (EIF_BOOLEAN) !loc3;
			}
			if (tb1) {
				RTHOOK(28);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(29);
					RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
					
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4902, "getvalue", loc1))(loc1)).it_i4);
					ui4_1 = ti4_1;
					loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4889, dtype))(Current, ui4_1x)).it_b);
					RTHOOK(30);
					if ((EIF_BOOLEAN)(arg3 == NULL)) {
						RTHOOK(31);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc4 = RTCCL(tr1);
						if (EIF_TEST(loc4)) {
							RTHOOK(32);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4897, "setleft", loc1))(loc1, ur1x);
							RTHOOK(33);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4898, "setright", loc1))(loc1, ur1x);
							RTHOOK(34);
							RTDBGAA(Current, dtype, 4880, 0xF800035D, 0); /* root */
							
							RTAR(Current, loc1);
							*(EIF_REFERENCE *)(Current + RTWA(4880, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
						}
					} else {
						RTHOOK(35);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4897, "setleft", loc1))(loc1, ur1x);
						RTHOOK(36);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4898, "setright", loc1))(loc1, ur1x);
						RTHOOK(37);
						ur1 = RTCCL(arg3);
						ub1 = arg4;
						ur2 = RTCCL(loc1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4891, dtype))(Current, ur1x, ub1x, ur2x);
					}
				}
			}
		}
		RTHOOK(38);
		tb1 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4902, "getvalue", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (arg2 < ti4_1)) {
			tb1 = (EIF_BOOLEAN) !loc3;
		}
		if (tb1) {
			RTHOOK(39);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				RTHOOK(40);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(41);
				RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
				
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(42);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ui4_1 = arg2;
				ur2 = RTCCL(arg1);
				ub1 = (EIF_BOOLEAN) 1;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4890, dtype))(Current, ur1x, ui4_1x, ur2x, ub1x)).it_b);
				RTHOOK(43);
				RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
				
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(44);
		tb1 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4902, "getvalue", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (arg2 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !loc3;
		}
		if (tb1) {
			RTHOOK(45);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				RTHOOK(46);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(47);
				RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
				
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(48);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "getright", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ui4_1 = arg2;
				ur2 = RTCCL(arg1);
				ub1 = (EIF_BOOLEAN) 0;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4890, dtype))(Current, ur1x, ui4_1x, ur2x, ub1x)).it_b);
				RTHOOK(49);
				RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
				
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(50);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(51);
		RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
		
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(52);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {BINARYTREE}.hangunderfather */
void F860_6961 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "hangunderfather";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 859, Current, 0, 3, 12597);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12597);
	if (arg1) {
		RTCC(arg1, 859, l_feature_name, 1, eif_non_attached_type(861));
	}
	if (arg3) {
		RTCC(arg3, 859, l_feature_name, 3, eif_non_attached_type(861));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		if (arg2) {
			RTHOOK(4);
			ur1 = RTCCL(arg3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4897, "setleft", arg1))(arg1, ur1x);
		} else {
			RTHOOK(5);
			ur1 = RTCCL(arg3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4898, "setright", arg1))(arg1, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg3
#undef arg2
#undef arg1
}

/* {BINARYTREE}.getsmallest */
EIF_TYPED_VALUE F860_6962 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "getsmallest";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 859, Current, 1, 1, 12598);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(859, Current, 12598);
	if (arg1) {
		RTCC(arg1, 859, l_feature_name, 1, eif_non_attached_type(861));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4880, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTHOOK(4);
			RTDBGAL(Current, 1, 0xF800035D, 0, 0); /* loc1 */
			
			loc1 = (EIF_REFERENCE) RTCCL(arg1);
		} else {
			RTHOOK(5);
			RTDBGAL(Current, 1, 0xF800035D, 0, 0); /* loc1 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4900, "getleft", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4892, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		}
	}
	RTHOOK(6);
	RTDBGAL(Current, 0, 0xF800035D, 0,0); /* Result */
	
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

void EIF_Minit860 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
