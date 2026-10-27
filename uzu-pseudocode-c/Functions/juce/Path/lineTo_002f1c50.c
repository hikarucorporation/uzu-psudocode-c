// Function : lineTo
// Namespace: juce:Path
// Entry    : 002f1c50
// Prototype: undefined lineTo(float param_1, float param_2, Path * this)
// Body     : 002f1c50 - 002f1d58


/* juce::Path::lineTo(float, float) */

void __thiscall juce::Path::lineTo(float param_1,float param_2,Path *this)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  Path *pPVar7;
  uint uVar8;
  
  iVar2 = *(int *)(this + 0xc);
  if (iVar2 == 0) {
    startNewSubPath(0.0,0.0,this);
    iVar2 = *(int *)(this + 0xc);
    iVar5 = iVar2 + 3;
    uVar6 = *(uint *)(this + 8);
    if ((int)uVar6 < iVar5) goto LAB_002f1ca0;
  }
  else {
    iVar5 = iVar2 + 3;
    uVar6 = *(uint *)(this + 8);
    if ((int)uVar6 < iVar5) {
LAB_002f1ca0:
      uVar8 = iVar2 + iVar5 / 2 + 0xbU & 0xfffffff8;
      if (uVar6 != uVar8) {
        if ((int)uVar8 < 1) {
          free(*(void **)this);
          *(undefined8 *)this = 0;
        }
        else {
          pvVar3 = realloc(*(void **)this,(ulong)uVar8 << 2);
          *(void **)this = pvVar3;
        }
      }
      *(uint *)(this + 8) = uVar8;
      iVar2 = *(int *)(this + 0xc);
      iVar5 = iVar2 + 3;
    }
  }
  lVar1 = *(long *)this;
  lVar4 = (long)iVar2;
  *(undefined4 *)(lVar1 + lVar4 * 4) = 0x47c35080;
  *(float *)(lVar1 + 4 + lVar4 * 4) = param_1;
  *(int *)(this + 0xc) = iVar5;
  *(float *)(lVar1 + 8 + lVar4 * 4) = param_2;
  if (*(float *)(this + 0x10) <= param_1) {
    if (param_1 < *(float *)(this + 0x14) || param_1 == *(float *)(this + 0x14)) goto LAB_002f1d34;
    pPVar7 = this + 0x14;
  }
  else {
    pPVar7 = this + 0x10;
  }
  *(float *)pPVar7 = param_1;
LAB_002f1d34:
  if (*(float *)(this + 0x18) <= param_2) {
    if (param_2 < *(float *)(this + 0x1c) || param_2 == *(float *)(this + 0x1c)) {
      return;
    }
    pPVar7 = this + 0x1c;
  }
  else {
    pPVar7 = this + 0x18;
  }
  *(float *)pPVar7 = param_2;
  return;
}


