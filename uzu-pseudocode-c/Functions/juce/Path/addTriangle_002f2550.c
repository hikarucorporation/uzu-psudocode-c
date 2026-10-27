// Function : addTriangle
// Namespace: juce:Path
// Entry    : 002f2550
// Prototype: undefined addTriangle(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, Path * this)
// Body     : 002f2550 - 002f262b


/* juce::Path::addTriangle(float, float, float, float, float, float) */

void __thiscall
juce::Path::addTriangle
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          Path *this)

{
  float fVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
  startNewSubPath(param_1,param_2,this);
  lineTo(param_3,param_4,this);
  lineTo(param_5,param_6,this);
  iVar2 = *(int *)(this + 0xc);
  if ((iVar2 != 0) &&
     (((iVar2 < 1 ||
       (fVar1 = *(float *)(*(long *)this + (ulong)(iVar2 - 1) * 4), fVar1 != DAT_005de41c)) ||
      (NAN(fVar1) || NAN(DAT_005de41c))))) {
    if ((int)*(uint *)(this + 8) <= iVar2) {
      uVar4 = iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(this + 8) != uVar4) {
        if ((int)uVar4 < 1) {
          free(*(void **)this);
          *(undefined8 *)this = 0;
        }
        else {
          pvVar3 = realloc(*(void **)this,(ulong)uVar4 << 2);
          *(void **)this = pvVar3;
        }
      }
      *(uint *)(this + 8) = uVar4;
      iVar2 = *(int *)(this + 0xc);
    }
    *(int *)(this + 0xc) = iVar2 + 1;
    *(undefined4 *)(*(long *)this + (long)iVar2 * 4) = 0x47c35280;
    return;
  }
  return;
}


