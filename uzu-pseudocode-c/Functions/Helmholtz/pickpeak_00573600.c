// Function : pickpeak
// Namespace: Helmholtz
// Entry    : 00573600
// Prototype: undefined pickpeak(Helmholtz * this)
// Body     : 00573600 - 00573741


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Helmholtz::pickpeak() */

void __thiscall Helmholtz::pickpeak(Helmholtz *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  
  uVar7 = (uint)((double)*(int *)(this + 0x1c) * _DAT_0065b7f8);
  uVar5 = 1;
  if (1 < (int)uVar7) {
    uVar5 = 1;
    do {
      pfVar1 = (float *)(*(long *)(this + 0x10) + uVar5 * 4);
      if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) goto LAB_00573641;
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
    uVar5 = (ulong)uVar7;
  }
LAB_00573641:
  uVar8 = 0;
  if ((int)uVar5 < (int)(uVar7 - 1)) {
    lVar4 = *(long *)(this + 0x10);
    fVar10 = 0.0;
    uVar9 = 0;
    uVar5 = (long)(int)uVar5;
    do {
      fVar11 = *(float *)(lVar4 + (uVar5 & 0xffffffff) * 4);
      fVar2 = *(float *)(lVar4 + -4 + uVar5 * 4);
      uVar6 = uVar5 + 1;
      if (((fVar2 < fVar11) &&
          (fVar3 = *(float *)(lVar4 + (uVar6 & 0xffffffff) * 4), fVar3 < fVar11)) &&
         (fVar11 = (float)(((double)((fVar3 - fVar2) * (fVar3 - fVar2)) * DAT_006544a8) /
                           (double)((fVar11 + fVar11) - (fVar2 + fVar3)) + (double)fVar11),
         (double)fVar10 <
         (_DAT_005d9000 -
         (double)((float)(int)uVar5 * *(float *)(this + 0x30) *
                 (DAT_005d9038 / (float)*(int *)(this + 0x1c)))) * (double)fVar11)) {
        uVar9 = uVar5 & 0xffffffff;
        fVar10 = fVar11;
      }
      uVar8 = (undefined4)uVar9;
      uVar5 = uVar6;
    } while ((long)(int)(uVar7 - 1) != uVar6);
  }
  *(undefined4 *)(this + 0x24) = uVar8;
  return;
}


