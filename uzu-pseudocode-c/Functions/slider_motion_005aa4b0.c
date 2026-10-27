// Function : slider_motion
// Namespace: 
// Entry    : 005aa4b0
// Prototype: undefined slider_motion(float param_1, float param_2, float param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005aa4b0 - 005aa6cc


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slider_motion(float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar15 = 0;
  uVar16 = 0;
  if (param_3 != 0.0) {
    return;
  }
  uVar1 = *(uint *)(param_9 + 0x494);
  if (*(int *)(param_9 + 0x4bc) == 0) {
    lVar4 = *(long *)(param_9 + 0x30);
    iVar2 = *(int *)(lVar4 + 0xec);
    iVar5 = *(int *)(param_9 + 0x44) / iVar2;
    uVar3 = *(uint *)(param_9 + 0x440);
  }
  else {
    lVar4 = *(long *)(param_9 + 0x30);
    iVar2 = *(int *)(lVar4 + 0xec);
    iVar5 = *(int *)(param_9 + 0x40) / iVar2;
    param_1 = (float)((uint)param_2 ^ _DAT_006524b0);
    uVar3 = *(uint *)(param_9 + 0x440);
  }
  if ((uVar3 & 0x2000000) == 0) {
    param_1 = (param_1 * DAT_005d94c4) / (float)iVar2;
  }
  uVar6 = (int)param_1 + *(int *)(param_9 + 0x490);
  *(uint *)(param_9 + 0x490) = uVar6;
  *(uint *)(param_9 + 0x494) = uVar6;
  uVar7 = iVar5 * 100 - 100;
  uVar8 = uVar6;
  if ((int)uVar7 < (int)uVar6) {
    *(uint *)(param_9 + 0x494) = uVar7;
    iVar5 = (int)(0x32 / (long)iVar2) + uVar6;
    uVar8 = iVar5 - iVar5 % (int)(100 / (long)iVar2);
    *(uint *)(param_9 + 0x490) = uVar8;
    uVar6 = uVar7;
  }
  if ((int)uVar6 < 0) {
    *(undefined4 *)(param_9 + 0x494) = 0;
    uVar6 = 0;
    iVar5 = uVar8 - (int)(0x32 / (long)iVar2);
    *(int *)(param_9 + 0x490) = iVar5 - iVar5 % (int)(100 / (long)iVar2);
  }
  uVar8 = uVar6;
  if ((uVar3 & 0x2000000) == 0) {
    uVar8 = (uVar6 / 100) * 100;
  }
  if ((uVar3 & 0x80) == 0) {
    iVar2 = *(int *)(param_9 + 0x498);
  }
  else {
    if (*(long *)(param_9 + 0x458) == *(long *)(param_9 + 0x460)) {
      uVar8 = uVar6;
    }
    iVar2 = *(int *)(param_9 + 0x498);
  }
  if (iVar2 == 0) {
    dVar10 = (double)(int)uVar8 * DAT_00651f48 * *(double *)(param_9 + 0x4b0) +
             *(double *)(param_9 + 0x4a0);
  }
  else {
    dVar10 = exp((double)(int)uVar8 * DAT_00651f48 * *(double *)(param_9 + 0x4b0));
    dVar10 = dVar10 * *(double *)(param_9 + 0x4a0);
  }
  uVar12 = (undefined4)((ulong)dVar10 >> 0x20);
  fVar9 = (float)dVar10;
  dVar10 = (double)fVar9;
  fVar13 = fVar9;
  uVar14 = uVar12;
  if (_DAT_0065e800 < dVar10) {
    fVar13 = 0.0;
    uVar14 = 0;
  }
  if (_DAT_00652e60 <= dVar10) {
    *(float *)(param_9 + 0x4b8) = fVar9;
    fVar13 = fVar9;
    uVar14 = uVar12;
  }
  else {
    *(float *)(param_9 + 0x4b8) = fVar13;
  }
  if (uVar1 == uVar6) {
    return;
  }
  uVar11 = (**(code **)(param_9 + 0x38))(param_9,lVar4,0);
  slider_bang(uVar11,(double)CONCAT44(uVar14,fVar13),dVar10,CONCAT44(uVar16,uVar15),param_5,param_6,
              param_7,param_8,param_9);
  return;
}


