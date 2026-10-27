// Function : setsize_new
// Namespace: 
// Entry    : 005af800
// Prototype: long * setsize_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, long param_10, undefined8 param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005af800 - 005af88c


long * setsize_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,long param_10,undefined8 param_11,long *param_12,
                  char *param_13,undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,setsize_class,
                  param_10,param_11,param_12,param_13,param_14);
  if (*(char *)*param_9 != '\0') {
    iVar1 = strcmp((char *)*param_9,"-");
    if (iVar1 != 0) {
      lVar3 = canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9);
      goto LAB_005af85a;
    }
  }
  param_12 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *param_12 + 0x168;
LAB_005af85a:
  plVar2[6] = lVar3;
  plVar2[7] = param_10;
  uVar4 = gpointer_init(plVar2 + 8);
  pointerinlet_new(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                   (long)(plVar2 + 8),extraout_RDX,param_12,param_13,param_14);
  return plVar2;
}


