// Function : startNewSubPath
// Namespace: juce:Path
// Entry    : 002f1b70
// Prototype: undefined startNewSubPath(float param_1, float param_2, Path * this)
// Body     : 002f1b70 - 002f1c47


/* juce::Path::startNewSubPath(float, float) */

void __thiscall juce::Path::startNewSubPath(float param_1,float param_2,Path *this)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  Path *pPVar6;
  uint uVar7;
  
  iVar2 = *(int *)(this + 0xc);
  pPVar6 = this + 0x10;
  if (iVar2 == 0) {
    *(float *)pPVar6 = param_1;
    *(float *)(this + 0x14) = param_1;
    *(float *)(this + 0x18) = param_2;
    *(float *)(this + 0x1c) = param_2;
    goto LAB_002f1bc5;
  }
  if (param_1 < *(float *)pPVar6) {
LAB_002f1b97:
    *(float *)pPVar6 = param_1;
  }
  else if (*(float *)(this + 0x14) <= param_1 && param_1 != *(float *)(this + 0x14)) {
    pPVar6 = this + 0x14;
    goto LAB_002f1b97;
  }
  if (*(float *)(this + 0x18) <= param_2) {
    if (param_2 < *(float *)(this + 0x1c) || param_2 == *(float *)(this + 0x1c)) goto LAB_002f1bc5;
    pPVar6 = this + 0x1c;
  }
  else {
    pPVar6 = this + 0x18;
  }
  *(float *)pPVar6 = param_2;
LAB_002f1bc5:
  iVar5 = iVar2 + 3;
  if ((int)*(uint *)(this + 8) < iVar5) {
    uVar7 = iVar2 + iVar5 / 2 + 0xbU & 0xfffffff8;
    if (*(uint *)(this + 8) != uVar7) {
      if ((int)uVar7 < 1) {
        free(*(void **)this);
        *(undefined8 *)this = 0;
      }
      else {
        pvVar3 = realloc(*(void **)this,(ulong)uVar7 << 2);
        *(void **)this = pvVar3;
      }
    }
    *(uint *)(this + 8) = uVar7;
    iVar2 = *(int *)(this + 0xc);
    iVar5 = iVar2 + 3;
  }
  lVar1 = *(long *)this;
  lVar4 = (long)iVar2;
  *(undefined4 *)(lVar1 + lVar4 * 4) = 0x47c35100;
  *(float *)(lVar1 + 4 + lVar4 * 4) = param_1;
  *(int *)(this + 0xc) = iVar5;
  *(float *)(lVar1 + 8 + lVar4 * 4) = param_2;
  return;
}


