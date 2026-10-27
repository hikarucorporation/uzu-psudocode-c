// Function : array_get_bang
// Namespace: 
// Entry    : 00549b70
// Prototype: undefined array_get_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00549b70 - 00549c95


void array_get_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar11;
  undefined8 uStack_50;
  undefined1 auStack_48 [12];
  int local_3c;
  undefined4 *local_38;
  int local_30;
  uint local_2c;
  
  piVar9 = &local_3c;
  uStack_50 = 0x549b97;
  uVar4 = array_rangeop_getrange
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)&local_38,(int *)&local_2c,&local_30,piVar9,in_R9);
  if ((int)uVar4 == 0) {
    return;
  }
  if ((long)(int)local_2c < 100) {
    lVar2 = (long)(int)local_2c * -0x10;
    puVar5 = auStack_48 + lVar2;
    uVar10 = extraout_XMM0_Da;
    uVar11 = extraout_XMM0_Db;
    puVar6 = local_38;
    puVar3 = puVar5;
    if ((int)local_2c < 1) {
      plVar1 = *(long **)(param_9 + 0x18);
      *(undefined8 *)(auStack_48 + lVar2 + -8) = 0x549c89;
      outlet_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar1,0,local_2c,puVar5,(char *)piVar9,in_R9);
      return;
    }
  }
  else {
    uStack_50 = 0x549bde;
    puVar5 = getbytes((ulong)local_2c << 4);
    uVar10 = extraout_XMM0_Da_00;
    uVar11 = extraout_XMM0_Db_00;
    puVar6 = local_38;
    puVar3 = auStack_48;
  }
  if (local_2c == 1) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)(puVar5 + 0x18);
    uVar7 = 0;
    do {
      puVar8[-6] = 1;
      puVar8[-4] = *puVar6;
      puVar8[-2] = 1;
      uVar10 = *(undefined4 *)((long)puVar6 + (long)local_30);
      uVar11 = 0;
      puVar6 = (undefined4 *)((long)puVar6 + (long)local_30 * 2);
      *puVar8 = uVar10;
      uVar7 = uVar7 + 2;
      puVar8 = puVar8 + 8;
    } while ((local_2c & 0xfffffffe) != uVar7);
  }
  if ((local_2c & 1) != 0) {
    *(undefined4 *)(puVar5 + uVar7 * 0x10) = 1;
    uVar10 = *puVar6;
    uVar11 = 0;
    *(undefined4 *)(puVar5 + uVar7 * 0x10 + 8) = uVar10;
  }
  plVar1 = *(long **)(param_9 + 0x18);
  *(undefined8 *)(puVar3 + -8) = 0x549c61;
  outlet_list(CONCAT44(uVar11,uVar10),param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
              ,0,local_2c,puVar5,(char *)piVar9,in_R9);
  if (99 < (int)local_2c) {
    *(undefined8 *)(puVar3 + -8) = 0x549c76;
    freebytes(puVar5);
  }
  return;
}


