// Function : glist_select
// Namespace: 
// Entry    : 00504980
// Prototype: undefined glist_select(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00504980 - 00504a0e


void glist_select(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_RDX;
  undefined1 unaff_BL;
  long *plVar4;
  undefined8 extraout_XMM0_Qa;
  
  if (*(long *)(param_9 + 0xc0) == 0) {
    return;
  }
  plVar4 = param_10;
  puVar2 = getbytes(0x10);
  lVar3 = *(long *)(param_9 + 0xc0);
  plVar1 = *(long **)(lVar3 + 0x20);
  do {
    if (plVar1 == (long *)0x0) {
LAB_005049eb:
      puVar2[1] = *(undefined8 *)(lVar3 + 0x20);
      *puVar2 = param_10;
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      gobj_select(param_10,param_9);
      return;
    }
    if ((long *)*plVar1 == param_10) {
      bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"glist_select",
          plVar4,extraout_RDX,plVar1,param_13,param_14,unaff_BL);
      lVar3 = *(long *)(param_9 + 0xc0);
      goto LAB_005049eb;
    }
    plVar1 = (long *)plVar1[1];
  } while( true );
}


