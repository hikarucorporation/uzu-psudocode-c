// Function : elem_new
// Namespace: 
// Entry    : 005af2e0
// Prototype: long * elem_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, long param_10, undefined8 param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005af2e0 - 005af395


long * elem_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 *param_9,long param_10,undefined8 param_11,long *param_12,char *param_13,
               undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,elem_class,
                  param_10,param_11,param_12,param_13,param_14);
  if (*(char *)*param_9 != '\0') {
    iVar1 = strcmp((char *)*param_9,"-");
    if (iVar1 != 0) {
      lVar3 = canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9);
      goto LAB_005af33a;
    }
  }
  param_12 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *param_12 + 0x168;
LAB_005af33a:
  plVar2[6] = lVar3;
  plVar2[7] = param_10;
  gpointer_init(plVar2 + 8);
  uVar5 = gpointer_init(plVar2 + 0xb);
  pointerinlet_new(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                   (long)(plVar2 + 0xb),extraout_RDX,param_12,param_13,param_14);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar2,*plVar4 + 0x60,extraout_RDX_00,param_12,param_13,param_14);
  return plVar2;
}


