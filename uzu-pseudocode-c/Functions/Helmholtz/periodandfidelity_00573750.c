// Function : periodandfidelity
// Namespace: Helmholtz
// Entry    : 00573750
// Prototype: undefined periodandfidelity(Helmholtz * this)
// Body     : 00573750 - 00573805


/* Helmholtz::periodandfidelity() */

void __thiscall Helmholtz::periodandfidelity(Helmholtz *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  float fVar7;
  
  lVar5 = (long)*(int *)(this + 0x24);
  if (lVar5 != 0) {
    lVar4 = *(long *)(this + 0x10);
    fVar1 = *(float *)(lVar4 + -4 + lVar5 * 4);
    fVar2 = *(float *)(lVar4 + 4 + lVar5 * 4);
    dVar6 = (double)*(float *)(lVar4 + lVar5 * 4);
    *(float *)(this + 0x28) =
         (float)(((double)(fVar2 - fVar1) * DAT_005db338) /
                ((dVar6 + dVar6) - ((double)fVar2 + (double)fVar1))) + (float)*(int *)(this + 0x24);
    fVar1 = *(float *)(lVar4 + lVar5 * 4);
    fVar2 = *(float *)(lVar4 + -4 + lVar5 * 4);
    fVar3 = *(float *)(lVar4 + 4 + lVar5 * 4);
    fVar7 = fVar3 - fVar2;
    *(float *)(this + 0x2c) =
         (float)(((double)(fVar7 * fVar7) * DAT_006544a8) /
                 (double)((fVar1 + fVar1) - (fVar2 + fVar3)) + (double)fVar1);
  }
  return;
}


