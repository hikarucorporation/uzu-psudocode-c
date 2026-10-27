// Function : quadraticTo
// Namespace: juce:Path
// Entry    : 002f1d60
// Prototype: undefined quadraticTo(float param_1, float param_2, float param_3, float param_4, Path * this)
// Body     : 002f1d60 - 002f1ede


/* juce::Path::quadraticTo(float, float, float, float) */

void __thiscall
juce::Path::quadraticTo(float param_1,float param_2,float param_3,float param_4,Path *this)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  Path *pPVar5;
  int iVar6;
  uint uVar7;
  Path *pPVar8;
  Path *pPVar9;
  uint uVar10;
  
  iVar2 = *(int *)(this + 0xc);
  if (iVar2 == 0) {
    startNewSubPath(0.0,0.0,this);
    iVar2 = *(int *)(this + 0xc);
    iVar6 = iVar2 + 5;
    uVar7 = *(uint *)(this + 8);
    if ((int)uVar7 < iVar6) goto LAB_002f1dcd;
  }
  else {
    iVar6 = iVar2 + 5;
    uVar7 = *(uint *)(this + 8);
    if ((int)uVar7 < iVar6) {
LAB_002f1dcd:
      uVar10 = iVar2 + iVar6 / 2 + 0xdU & 0xfffffff8;
      if (uVar7 != uVar10) {
        if ((int)uVar10 < 1) {
          free(*(void **)this);
          *(undefined8 *)this = 0;
        }
        else {
          pvVar3 = realloc(*(void **)this,(ulong)uVar10 << 2);
          *(void **)this = pvVar3;
        }
      }
      *(uint *)(this + 8) = uVar10;
      iVar2 = *(int *)(this + 0xc);
      iVar6 = iVar2 + 5;
    }
  }
  lVar1 = *(long *)this;
  lVar4 = (long)iVar2;
  *(undefined4 *)(lVar1 + lVar4 * 4) = 0x47c35180;
  *(float *)(lVar1 + 4 + lVar4 * 4) = param_1;
  *(float *)(lVar1 + 8 + lVar4 * 4) = param_2;
  *(float *)(lVar1 + 0xc + lVar4 * 4) = param_3;
  *(int *)(this + 0xc) = iVar6;
  *(float *)(lVar1 + 0x10 + lVar4 * 4) = param_4;
  pPVar5 = this + 0x10;
  pPVar9 = pPVar5;
  if (param_1 < *(float *)(this + 0x10)) {
LAB_002f1e84:
    *(float *)pPVar9 = param_1;
  }
  else if (*(float *)(this + 0x14) <= param_1 && param_1 != *(float *)(this + 0x14)) {
    pPVar9 = this + 0x14;
    goto LAB_002f1e84;
  }
  pPVar9 = this + 0x18;
  pPVar8 = pPVar9;
  if (param_2 < *(float *)(this + 0x18)) {
LAB_002f1ea3:
    *(float *)pPVar8 = param_2;
  }
  else if (*(float *)(this + 0x1c) <= param_2 && param_2 != *(float *)(this + 0x1c)) {
    pPVar8 = this + 0x1c;
    goto LAB_002f1ea3;
  }
  if (*(float *)pPVar5 <= param_3) {
    if (param_3 < *(float *)(this + 0x14) || param_3 == *(float *)(this + 0x14)) goto LAB_002f1ebe;
    pPVar5 = this + 0x14;
  }
  *(float *)pPVar5 = param_3;
LAB_002f1ebe:
  if (*(float *)pPVar9 <= param_4) {
    if (param_4 < *(float *)(this + 0x1c) || param_4 == *(float *)(this + 0x1c)) {
      return;
    }
    pPVar9 = this + 0x1c;
  }
  *(float *)pPVar9 = param_4;
  return;
}


