// Function : cartopol_perform_nophase
// Namespace: 
// Entry    : 0055e800
// Prototype: long cartopol_perform_nophase(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055e800 - 0055e8a7


long cartopol_perform_nophase
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  void *__s;
  bool bVar4;
  undefined7 extraout_var;
  undefined8 extraout_RDX;
  int iVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(param_9 + 8);
  uVar1 = *(ulong *)(param_9 + 0x10);
  lVar2 = *(long *)(param_9 + 0x18);
  lVar3 = *(long *)(param_9 + 0x20);
  __s = *(void **)(param_9 + 0x28);
  bVar4 = magic_isnan(**(uint **)(lVar6 + 0x48));
  iVar5 = (int)uVar1;
  if ((int)CONCAT71(extraout_var,bVar4) == 0) {
    uVar8 = magic_setnan(*(undefined4 **)(lVar6 + 0x48));
    pd_error(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar6,
             "cartopol~: doesn\'t understand \'float\'",extraout_RDX,param_12,param_13,param_14);
  }
  if (iVar5 != 0) {
    if (*(long *)(lVar6 + 0x50) == 0) {
      memset(__s,0,(uVar1 & 0xffffffff) << 2);
    }
    else {
      lVar6 = 0;
      do {
        fVar7 = hypotf(*(float *)(lVar2 + lVar6 * 4),*(float *)(lVar3 + lVar6 * 4));
        *(float *)((long)__s + lVar6 * 4) = fVar7;
        lVar6 = lVar6 + 1;
      } while (iVar5 != (int)lVar6);
    }
  }
  return param_9 + 0x30;
}


