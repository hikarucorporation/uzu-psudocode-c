// Function : drawnumber_click
// Namespace: 
// Entry    : 005260c0
// Prototype: undefined8 drawnumber_click(undefined8 param_1, ulong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, long param_12, long param_13, long param_14, int param_15, uint param_16)
// Body     : 005260c0 - 005262db


undefined8
drawnumber_click(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long param_10,long param_11,long param_12,long param_13,long param_14,
                int param_15,uint param_16)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 extraout_RDX;
  long lVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  int in_stack_00000030;
  undefined1 in_stack_ffffffffffffff98;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  long local_38;
  
  piVar6 = &local_3c;
  piVar7 = &local_40;
  lVar5 = param_10;
  local_38 = param_11;
  uVar9 = drawnumber_getrect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,param_10,param_11,param_12,piVar6,piVar7,&local_44,&local_48);
  if (param_15 < local_3c) {
    return 0;
  }
  if (local_44 < param_15) {
    return 0;
  }
  if ((int)param_16 < local_40) {
    return 0;
  }
  if (local_48 < (int)param_16) {
    return 0;
  }
  if (param_12 == 0) {
    bug(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"template_find_field",lVar5,
        extraout_RDX,(ulong)param_16,(char *)piVar6,piVar7,in_stack_ffffffffffffff98);
    return 0;
  }
  uVar8 = *(uint *)(param_12 + 0x18);
  if ((int)uVar8 < 1) {
    return 0;
  }
  lVar5 = *(long *)(param_9 + 0x30);
  lVar2 = *(long *)(param_12 + 0x20);
  lVar3 = 0;
  while (*(long *)(lVar2 + 8 + lVar3) != lVar5) {
    lVar3 = lVar3 + 0x18;
    if ((ulong)uVar8 * 0x18 == lVar3) {
      return 0;
    }
  }
  uVar4 = 0xffffffff;
  if (*(uint *)(lVar2 + lVar3) != 3) {
    uVar4 = *(uint *)(lVar2 + lVar3);
  }
  if (1 < uVar4) {
    return 0;
  }
  if (in_stack_00000030 == 0) {
    return 1;
  }
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *(long *)(*(long *)(*plVar1 + 0x48) + 8);
  *(long *)(lVar3 + 200) = param_10;
  *(long *)(lVar3 + 0xe0) = local_38;
  *(long *)(lVar3 + 0xe8) = param_12;
  *(long *)(lVar3 + 0xd0) = param_13;
  *(long *)(lVar3 + 0xd8) = param_14;
  *(undefined4 *)(lVar3 + 0x10c) = 1;
  plVar1 = (long *)(lVar2 + 8);
  lVar2 = 0;
  do {
    if (*plVar1 == lVar5) {
      uVar8 = 0;
      if ((int)plVar1[-1] == 0) {
        uVar8 = *(uint *)(local_38 + (int)lVar2);
      }
      goto LAB_00526277;
    }
    lVar2 = lVar2 + 8;
    plVar1 = plVar1 + 3;
  } while ((ulong)uVar8 * 8 != lVar2);
  uVar8 = 0;
LAB_00526277:
  *(uint *)(lVar3 + 0xc0) = uVar8;
  *(uint *)(lVar3 + 0x108) = uVar4;
  if (param_13 == 0) {
    gpointer_setarray((ulong)uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (undefined8 *)(lVar3 + 0xf0),param_14,local_38,local_38,(char *)piVar6,piVar7)
    ;
  }
  else {
    gpointer_setglist((ulong)uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (undefined8 *)(lVar3 + 0xf0),param_10,param_13,local_38,(char *)piVar6,piVar7)
    ;
  }
  glist_grab(param_10,param_9,0x5275e0,drawnumber_key,param_15,param_16);
  return 1;
}


