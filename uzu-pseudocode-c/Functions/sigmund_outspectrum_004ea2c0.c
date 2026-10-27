// Function : sigmund_outspectrum
// Namespace: 
// Entry    : 004ea2c0
// Prototype: undefined sigmund_outspectrum(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10)
// Body     : 004ea2c0 - 004ea38e


void sigmund_outspectrum(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                        long param_9,long *param_10)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 in_R9;
  undefined4 auStack_ffd18 [261956];
  
  if (*(uint *)(param_9 + 0x54) == 0) {
    puVar7 = auStack_ffd18;
    uVar3 = 0xffd0;
    iVar6 = 0xffd1;
  }
  else {
    uVar3 = 0xffffffd0;
    uVar5 = *(uint *)(param_9 + 0x54);
    do {
      uVar3 = uVar3 + 0x30;
      bVar2 = 1 < uVar5;
      uVar5 = (int)uVar5 >> 1;
    } while (bVar2);
    uVar3 = uVar3 & 0xfff0;
    iVar6 = uVar3 + 1;
    puVar7 = (undefined4 *)((long)auStack_ffd18 + -(ulong)(uint)(iVar6 * 0x10) + 0xffd10);
    *puVar7 = 1;
    *(int *)((long)auStack_ffd18 + -(ulong)(uint)(iVar6 * 0x10) + 0xffd18) = (int)param_1;
    if (uVar3 == 0) {
      iVar6 = 1;
      goto LAB_004ea380;
    }
  }
  lVar1 = *(long *)(param_9 + 0x68);
  uVar4 = (ulong)uVar3;
  lVar8 = 0x10;
  do {
    *(undefined4 *)((long)puVar7 + lVar8) = 1;
    *(undefined4 *)((long)puVar7 + lVar8 + 8) = *(undefined4 *)(lVar1 + -0x10 + lVar8);
    *(undefined4 *)((long)puVar7 + lVar8 + 0x10) = 1;
    uVar3 = *(uint *)(lVar1 + lVar8);
    param_1 = (ulong)uVar3;
    *(uint *)((long)puVar7 + lVar8 + 0x18) = uVar3;
    lVar8 = lVar8 + 0x20;
    uVar4 = uVar4 - 2;
  } while (uVar4 != 0);
LAB_004ea380:
  *(undefined8 *)(puVar7 + -2) = 0x4ea38a;
  outlet_list(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,0,iVar6,
              puVar7,(char *)param_10,in_R9);
  return;
}


