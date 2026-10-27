// Function : cubicTo
// Namespace: juce:Path
// Entry    : 002f1ee0
// Prototype: undefined cubicTo(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, Path * this)
// Body     : 002f1ee0 - 002f20ce


/* juce::Path::cubicTo(float, float, float, float, float, float) */

void __thiscall
juce::Path::cubicTo(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6,Path *this)

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
    iVar6 = iVar2 + 7;
    uVar7 = *(uint *)(this + 8);
    if ((int)uVar7 < iVar6) goto LAB_002f1f67;
  }
  else {
    iVar6 = iVar2 + 7;
    uVar7 = *(uint *)(this + 8);
    if ((int)uVar7 < iVar6) {
LAB_002f1f67:
      uVar10 = iVar2 + iVar6 / 2 + 0xfU & 0xfffffff8;
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
      iVar6 = iVar2 + 7;
    }
  }
  lVar1 = *(long *)this;
  lVar4 = (long)iVar2;
  *(undefined4 *)(lVar1 + lVar4 * 4) = 0x47c35200;
  *(float *)(lVar1 + 4 + lVar4 * 4) = param_1;
  *(float *)(lVar1 + 8 + lVar4 * 4) = param_2;
  *(float *)(lVar1 + 0xc + lVar4 * 4) = param_3;
  *(float *)(lVar1 + 0x10 + lVar4 * 4) = param_4;
  *(float *)(lVar1 + 0x14 + lVar4 * 4) = param_5;
  *(int *)(this + 0xc) = iVar6;
  *(float *)(lVar1 + 0x18 + lVar4 * 4) = param_6;
  pPVar5 = this + 0x10;
  pPVar9 = pPVar5;
  if (param_1 < *(float *)(this + 0x10)) {
LAB_002f2040:
    *(float *)pPVar9 = param_1;
  }
  else if (*(float *)(this + 0x14) <= param_1 && param_1 != *(float *)(this + 0x14)) {
    pPVar9 = this + 0x14;
    goto LAB_002f2040;
  }
  pPVar9 = this + 0x18;
  pPVar8 = pPVar9;
  if (param_2 < *(float *)(this + 0x18)) {
LAB_002f205f:
    *(float *)pPVar8 = param_2;
  }
  else if (*(float *)(this + 0x1c) <= param_2 && param_2 != *(float *)(this + 0x1c)) {
    pPVar8 = this + 0x1c;
    goto LAB_002f205f;
  }
  pPVar8 = pPVar5;
  if (param_3 < *(float *)pPVar5) {
LAB_002f2079:
    *(float *)pPVar8 = param_3;
  }
  else if (*(float *)(this + 0x14) <= param_3 && param_3 != *(float *)(this + 0x14)) {
    pPVar8 = this + 0x14;
    goto LAB_002f2079;
  }
  pPVar8 = pPVar9;
  if (param_4 < *(float *)pPVar9) {
LAB_002f2093:
    *(float *)pPVar8 = param_4;
  }
  else if (*(float *)(this + 0x1c) <= param_4 && param_4 != *(float *)(this + 0x1c)) {
    pPVar8 = this + 0x1c;
    goto LAB_002f2093;
  }
  if (*(float *)pPVar5 <= param_5) {
    if (param_5 < *(float *)(this + 0x14) || param_5 == *(float *)(this + 0x14)) goto LAB_002f20ae;
    pPVar5 = this + 0x14;
  }
  *(float *)pPVar5 = param_5;
LAB_002f20ae:
  if (*(float *)pPVar9 <= param_6) {
    if (param_6 < *(float *)(this + 0x1c) || param_6 == *(float *)(this + 0x1c)) {
      return;
    }
    pPVar9 = this + 0x1c;
  }
  *(float *)pPVar9 = param_6;
  return;
}


