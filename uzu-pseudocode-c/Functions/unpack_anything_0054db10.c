// Function : unpack_anything
// Namespace: 
// Entry    : 0054db10
// Prototype: undefined unpack_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0054db10 - 0054dbea


void unpack_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,uint param_11,long param_12,char *param_13,
                    undefined8 param_14)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar10;
  
  puVar6 = getbytes((long)(int)param_11 * 0x10 + 0x10);
  uVar9 = extraout_XMM0_Da;
  uVar10 = extraout_XMM0_Db;
  if (0 < (int)param_11) {
    if (param_11 == 1) {
      uVar7 = 0;
    }
    else {
      lVar8 = 0x10;
      uVar7 = 0;
      do {
        puVar1 = (undefined8 *)(param_12 + -0x10 + lVar8);
        uVar5 = puVar1[1];
        *(undefined8 *)((long)puVar6 + lVar8) = *puVar1;
        ((undefined8 *)((long)puVar6 + lVar8))[1] = uVar5;
        uVar7 = uVar7 + 2;
        puVar2 = (undefined4 *)(param_12 + lVar8);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        uVar3 = puVar2[2];
        uVar4 = puVar2[3];
        puVar2 = (undefined4 *)((long)puVar6 + lVar8 + 0x10);
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2[2] = uVar3;
        puVar2[3] = uVar4;
        lVar8 = lVar8 + 0x20;
      } while ((param_11 & 0xfffffffe) != uVar7);
    }
    if ((param_11 & 1) != 0) {
      puVar2 = (undefined4 *)(param_12 + uVar7 * 0x10);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      uVar3 = puVar2[2];
      uVar4 = puVar2[3];
      puVar2 = puVar6 + uVar7 * 4 + 4;
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar2[2] = uVar3;
      puVar2[3] = uVar4;
    }
  }
  *puVar6 = 2;
  *(undefined8 *)(puVar6 + 2) = param_10;
  unpack_list(CONCAT44(uVar10,uVar9),param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
              ,0,(ulong)(param_11 + 1),(long)puVar6,param_13,param_14);
  freebytes(puVar6);
  return;
}


