// Function : gatom_bang
// Namespace: 
// Entry    : 0052abd0
// Prototype: undefined gatom_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0052abd0 - 0052adad


void gatom_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  char *in_R8;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar11;
  
  lVar3 = gatom_getatom(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  uVar10 = extraout_XMM0_Da;
  uVar11 = extraout_XMM0_Db;
  if (*(int *)(param_9 + 0x30) != 2) {
    if (*(int *)(param_9 + 0x30) == 1) {
      if (*(long **)(param_9 + 0x18) != (long *)0x0) {
        outlet_float((ulong)*(uint *)(lVar3 + 8),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8,*(long **)(param_9 + 0x18));
        uVar10 = extraout_XMM0_Da_00;
        uVar11 = extraout_XMM0_Db_00;
      }
      pcVar7 = (char *)**(undefined8 **)(param_9 + 0x80);
      if (*pcVar7 == '\0') {
        return;
      }
      plVar1 = (long *)(*(undefined8 **)(param_9 + 0x80))[1];
      if (plVar1 == (long *)0x0) {
        return;
      }
      puVar5 = *(undefined8 **)(param_9 + 0x60);
      if (puVar5 != *(undefined8 **)(param_9 + 0x58)) {
        pd_float(plVar1);
        return;
      }
    }
    else {
      uVar2 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x10));
      lVar3 = binbuf_getvec(*(long *)(param_9 + 0x10));
      if (0 < (int)uVar2) {
        lVar6 = 0;
        do {
          uVar8 = *(int *)(lVar3 + lVar6) - 1;
          if (1 < uVar8) {
            pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,param_9,
                     "list: only sends literal numbers and symbols",(ulong)uVar8,lVar6,in_R8,in_R9);
            return;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar2 * 0x10 != lVar6);
      }
      plVar1 = *(long **)(param_9 + 0x18);
      uVar10 = extraout_XMM0_Da_02;
      uVar11 = extraout_XMM0_Db_02;
      if (plVar1 != (long *)0x0) {
        plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
        outlet_list(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,plVar1,*plVar4 + 0xc0,uVar2,lVar3,in_R8,in_R9);
        uVar10 = extraout_XMM0_Da_04;
        uVar11 = extraout_XMM0_Db_04;
      }
      pcVar7 = (char *)**(undefined8 **)(param_9 + 0x80);
      if (*pcVar7 == '\0') {
        return;
      }
      plVar1 = (long *)(*(undefined8 **)(param_9 + 0x80))[1];
      if (plVar1 == (long *)0x0) {
        return;
      }
      puVar5 = *(undefined8 **)(param_9 + 0x60);
      if (puVar5 != *(undefined8 **)(param_9 + 0x58)) {
        plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
        pd_list(plVar1,*plVar4 + 0xc0,uVar2,lVar3);
        return;
      }
    }
    pcVar9 = (char *)*puVar5;
LAB_0052ad93:
    pd_error(CONCAT44(uVar11,uVar10),param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
             ,"%s: atom with same send/receive name (infinite loop)",pcVar9,pcVar7,in_R8,in_R9);
    return;
  }
  if (*(long **)(param_9 + 0x18) != (long *)0x0) {
    outlet_symbol(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,*(long **)(param_9 + 0x18));
    uVar10 = extraout_XMM0_Da_01;
    uVar11 = extraout_XMM0_Db_01;
  }
  pcVar9 = (char *)**(undefined8 **)(param_9 + 0x60);
  if (*pcVar9 != '\0') {
    pcVar7 = *(char **)(param_9 + 0x80);
    if (*(long **)(pcVar7 + 8) != (long *)0x0) {
      if (*(undefined8 **)(param_9 + 0x60) != *(undefined8 **)(param_9 + 0x58)) {
        pd_symbol(*(long **)(pcVar7 + 8));
        return;
      }
      goto LAB_0052ad93;
    }
  }
  return;
}


