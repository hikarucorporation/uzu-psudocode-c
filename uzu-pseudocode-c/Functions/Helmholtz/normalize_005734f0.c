// Function : normalize
// Namespace: Helmholtz
// Entry    : 005734f0
// Prototype: undefined8 normalize(Helmholtz * this)
// Body     : 005734f0 - 005735f8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Helmholtz::normalize() */

undefined8 __thiscall Helmholtz::normalize(Helmholtz *this)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  double dVar5;
  undefined8 in_RAX;
  float *pfVar6;
  ulong uVar7;
  uint uVar8;
  float fVar9;
  
  iVar2 = *(int *)(this + 0x1c);
  uVar8 = (uint)((double)iVar2 * _DAT_0065b7f8);
  fVar9 = *(float *)(this + 0x34);
  pfVar3 = *(float **)(this + 0x10);
  fVar1 = *pfVar3;
  *pfVar3 = 1.0;
  dVar5 = DAT_005db338;
  if (1 < (int)uVar8) {
    fVar9 = (float)((double)fVar9 / SQRT(_DAT_005d9000 / (double)iVar2));
    fVar9 = fVar9 * fVar9;
    if (fVar9 <= fVar1) {
      fVar9 = fVar1;
    }
    fVar9 = fVar9 + fVar9;
    lVar4 = *(long *)(this + 8);
    pfVar6 = (float *)(lVar4 + (long)iVar2 * 4);
    uVar7 = 1;
    do {
      pfVar6 = pfVar6 + -1;
      fVar1 = *(float *)(lVar4 + -4 + uVar7 * 4);
      fVar9 = fVar9 - (*pfVar6 * *pfVar6 + fVar1 * fVar1);
      pfVar3[uVar7] = (float)((double)pfVar3[uVar7] / ((double)fVar9 * dVar5));
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
  }
  if ((int)uVar8 < iVar2) {
    memset(pfVar3 + (int)uVar8,0,(ulong)(~uVar8 + iVar2) * 4 + 4);
  }
  return in_RAX;
}


