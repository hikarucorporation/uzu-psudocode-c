// Function : autocorrelation
// Namespace: Helmholtz
// Entry    : 005733e0
// Prototype: undefined autocorrelation(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, Helmholtz * this)
// Body     : 005733e0 - 005734e5


/* Helmholtz::autocorrelation() */

void __thiscall
Helmholtz::autocorrelation
          (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined8 param_7,undefined8 param_8,Helmholtz *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(this + 0x1c);
  lVar6 = (long)iVar2 * 2;
  uVar8 = (uint)lVar6;
  mayer_realfft(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar8,
                *(float **)(this + 0x10));
  pfVar4 = *(float **)(this + 0x10);
  *pfVar4 = *pfVar4 * *pfVar4;
  uVar3 = *(uint *)(this + 0x1c);
  lVar5 = (long)(int)uVar3;
  fVar9 = pfVar4[lVar5] * pfVar4[lVar5];
  pfVar4[lVar5] = fVar9;
  if (1 < lVar5) {
    lVar5 = 1;
    if (uVar3 != 2) {
      pfVar7 = pfVar4 + (long)iVar2 * 2 + -1;
      lVar5 = 1;
      do {
        pfVar4[lVar5] = *pfVar7 * *pfVar7 + pfVar4[lVar5] * pfVar4[lVar5];
        *pfVar7 = 0.0;
        fVar9 = pfVar4[lVar5 + 1] * pfVar4[lVar5 + 1];
        fVar10 = pfVar7[-1] * pfVar7[-1] + fVar9;
        param_2 = (ulong)(uint)fVar10;
        pfVar4[lVar5 + 1] = fVar10;
        pfVar7[-1] = 0.0;
        pfVar7 = pfVar7 + -2;
        lVar1 = lVar5 - ((ulong)uVar3 - 1 & 0xfffffffffffffffe);
        lVar5 = lVar5 + 2;
      } while (lVar1 != -1);
    }
    if (((ulong)uVar3 - 1 & 1) != 0) {
      fVar9 = pfVar4[lVar5] * pfVar4[lVar5];
      lVar6 = lVar6 - lVar5;
      fVar10 = pfVar4[lVar6] * pfVar4[lVar6] + fVar9;
      param_2 = (ulong)(uint)fVar10;
      pfVar4[lVar5] = fVar10;
      pfVar4[lVar6] = 0.0;
    }
  }
  mayer_realifft((ulong)(uint)fVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar8,
                 pfVar4);
  return;
}


