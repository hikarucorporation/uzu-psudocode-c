// Function : sys_doneglobinit
// Namespace: 
// Entry    : 0053fd70
// Prototype: undefined sys_doneglobinit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053fd70 - 0053fe26


void sys_doneglobinit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  char *__s1;
  int iVar2;
  long *plVar3;
  undefined *in_RCX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 unaff_RBX;
  char *pcVar4;
  char *in_R8;
  undefined *in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  pbVar1 = (byte *)(*(long *)(*plVar3 + 0x38) + 0x48);
  *pbVar1 = *pbVar1 | 2;
  plVar3 = (long *)pd_getcanvaslist();
  if (plVar3 != (long *)0x0) {
    do {
      __s1 = *(char **)plVar3[0x19];
      iVar2 = strcmp(__s1,"_float_template");
      if ((iVar2 != 0) && (iVar2 = strcmp(__s1,"_float_array_template"), iVar2 != 0)) {
        pcVar4 = "_text_template";
        iVar2 = strcmp(__s1,"_text_template");
        if (iVar2 != 0) {
          glist_maybevis(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,plVar3,pcVar4,extraout_RDX,in_RCX,in_R8,in_R9,
                         (char)unaff_RBX);
          canvas_vis((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     plVar3,pcVar4,extraout_RDX_00,in_RCX,in_R8,in_R9,(char)unaff_RBX);
        }
      }
      plVar3 = (long *)plVar3[0x1b];
    } while (plVar3 != (long *)0x0);
  }
  return;
}


