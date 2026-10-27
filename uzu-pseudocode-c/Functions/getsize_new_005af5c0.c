// Function : getsize_new
// Namespace: 
// Entry    : 005af5c0
// Prototype: long * getsize_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005af5c0 - 005af648


long * getsize_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar7;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,getsize_class,
                  param_10,param_11,param_12,param_13,param_14);
  if (*(char *)*param_9 != '\0') {
    iVar1 = strcmp((char *)*param_9,"-");
    if (iVar1 != 0) {
      lVar3 = canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9);
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar6 = *plVar4;
      uVar5 = extraout_RDX;
      uVar7 = extraout_XMM0_Qa_00;
      goto LAB_005af62c;
    }
  }
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar6 = *plVar4;
  lVar3 = lVar6 + 0x168;
  uVar5 = extraout_RDX_00;
  uVar7 = extraout_XMM0_Qa_01;
LAB_005af62c:
  plVar2[6] = lVar3;
  plVar2[7] = param_10;
  outlet_new(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,lVar6 + 0x78
             ,uVar5,param_12,param_13,param_14);
  return plVar2;
}


