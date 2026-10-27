// Function : choice_add
// Namespace: 
// Entry    : 004dca10
// Prototype: undefined choice_add(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 004dca10 - 004dcc2d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void choice_add(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,int param_11,long param_12)

{
  int iVar1;
  void *pvVar2;
  float *pfVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar1 = *(int *)(param_9 + 0x38);
  uVar4 = (long)iVar1 * 0x2c;
  pvVar2 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0x30),uVar4,uVar4 + 0x2c);
  *(void **)(param_9 + 0x30) = pvVar2;
  *(int *)(param_9 + 0x38) = iVar1 + 1;
  *(undefined4 *)((long)pvVar2 + uVar4) = 0x40000000;
  fVar5 = (float)atom_getfloatarg(0,param_11,param_12);
  pfVar3 = (float *)((long)pvVar2 + uVar4 + 4);
  *(float *)((long)pvVar2 + uVar4 + 4) = fVar5;
  fVar6 = (float)atom_getfloatarg(1,param_11,param_12);
  *(float *)((long)pvVar2 + uVar4 + 8) = fVar6;
  fVar7 = (float)atom_getfloatarg(2,param_11,param_12);
  *(float *)((long)pvVar2 + uVar4 + 0xc) = fVar7;
  fVar8 = (float)atom_getfloatarg(3,param_11,param_12);
  *(float *)((long)pvVar2 + uVar4 + 0x10) = fVar8;
  fVar9 = (float)atom_getfloatarg(4,param_11,param_12);
  *(float *)((long)pvVar2 + uVar4 + 0x14) = fVar9;
  fVar10 = (float)atom_getfloatarg(5,param_11,param_12);
  *(float *)((long)pvVar2 + uVar4 + 0x18) = fVar10;
  fVar11 = (float)atom_getfloatarg(6,param_11,param_12);
  *(float *)((long)pvVar2 + uVar4 + 0x1c) = fVar11;
  fVar12 = (float)atom_getfloatarg(7,param_11,param_12);
  *(float *)((long)pvVar2 + uVar4 + 0x20) = fVar12;
  fVar13 = (float)atom_getfloatarg(8,param_11,param_12);
  *(float *)((long)pvVar2 + uVar4 + 0x24) = fVar13;
  fVar14 = (float)atom_getfloatarg(9,param_11,param_12);
  fVar5 = fVar11 * fVar11 + fVar7 * fVar7 + fVar13 * fVar13 + fVar9 * fVar9 +
          fVar12 * fVar12 + fVar8 * fVar8 + fVar14 * fVar14 + fVar10 * fVar10 +
          fVar6 * fVar6 + fVar5 * fVar5;
  if (fVar5 <= 0.0) {
    fVar5 = DAT_005d9038;
  }
  else {
    fVar5 = (float)(_DAT_005d9000 / SQRT((double)fVar5));
  }
  *pfVar3 = *pfVar3 * fVar5;
  *(float *)((long)pvVar2 + uVar4 + 8) = *(float *)((long)pvVar2 + uVar4 + 8) * fVar5;
  *(float *)((long)pvVar2 + uVar4 + 0xc) = *(float *)((long)pvVar2 + uVar4 + 0xc) * fVar5;
  *(float *)((long)pvVar2 + uVar4 + 0x10) = *(float *)((long)pvVar2 + uVar4 + 0x10) * fVar5;
  *(float *)((long)pvVar2 + uVar4 + 0x14) = *(float *)((long)pvVar2 + uVar4 + 0x14) * fVar5;
  *(float *)((long)pvVar2 + uVar4 + 0x18) = *(float *)((long)pvVar2 + uVar4 + 0x18) * fVar5;
  *(float *)((long)pvVar2 + uVar4 + 0x1c) = *(float *)((long)pvVar2 + uVar4 + 0x1c) * fVar5;
  *(float *)((long)pvVar2 + uVar4 + 0x20) = *(float *)((long)pvVar2 + uVar4 + 0x20) * fVar5;
  *(float *)((long)pvVar2 + uVar4 + 0x24) = fVar5 * *(float *)((long)pvVar2 + uVar4 + 0x24);
  *(float *)((long)pvVar2 + uVar4 + 0x28) = fVar14 * fVar5;
  return;
}


