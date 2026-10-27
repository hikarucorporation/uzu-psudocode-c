// Function : addRoundedRectangle
// Namespace: juce:Path
// Entry    : 002f2290
// Prototype: undefined addRoundedRectangle(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, Path * this, int param_8_00, char param_9, char param_10, char param_11)
// Body     : 002f2290 - 002f2543


/* juce::Path::addRoundedRectangle(float, float, float, float, float, float, bool, bool, bool, bool)
    */

void __thiscall
juce::Path::addRoundedRectangle
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          Path *this,int param_8_00,char param_9,char param_10,char param_11)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = param_3 * DAT_005d9044;
  if (param_5 <= param_3 * DAT_005d9044) {
    fVar5 = param_5;
  }
  fVar4 = DAT_005d9044 * param_4;
  if (param_6 <= DAT_005d9044 * param_4) {
    fVar4 = param_6;
  }
  fVar8 = fVar5 * DAT_005de468;
  fVar9 = DAT_005de468 * fVar4;
  if (param_8_00 == 0) {
    startNewSubPath(param_1,param_2,this);
  }
  else {
    startNewSubPath(param_1,fVar4 + param_2,this);
    cubicTo(param_1,fVar9 + param_2,fVar8 + param_1,param_2,fVar5 + param_1,param_2,this);
  }
  fVar6 = param_3 + param_1;
  if (param_9 == '\0') {
    lineTo(fVar6,param_2,this);
  }
  else {
    lineTo(fVar6 - fVar5,param_2,this);
    cubicTo(fVar6 - fVar8,param_2,fVar6,fVar9 + param_2,fVar6,fVar4 + param_2,this);
  }
  fVar7 = param_2 + param_4;
  if (param_11 == '\0') {
    lineTo(fVar6,fVar7,this);
  }
  else {
    lineTo(fVar6,fVar7 - fVar4,this);
    cubicTo(fVar6,fVar7 - fVar9,fVar6 - fVar8,fVar7,fVar6 - fVar5,fVar7,this);
  }
  if (param_10 == '\0') {
    lineTo(param_1,fVar7,this);
    iVar1 = *(int *)(this + 0xc);
  }
  else {
    lineTo(fVar5 + param_1,fVar7,this);
    cubicTo(fVar8 + param_1,fVar7,param_1,fVar7 - fVar9,param_1,fVar7 - fVar4,this);
    iVar1 = *(int *)(this + 0xc);
  }
  if (iVar1 != 0) {
    if (-1 < iVar1) {
      fVar5 = *(float *)(*(long *)this + (ulong)(iVar1 - 1) * 4);
      if ((fVar5 == DAT_005de41c) && (!NAN(fVar5) && !NAN(DAT_005de41c))) {
        return;
      }
    }
    if ((int)*(uint *)(this + 8) <= iVar1) {
      uVar3 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(this + 8) != uVar3) {
        if ((int)uVar3 < 1) {
          free(*(void **)this);
          *(undefined8 *)this = 0;
        }
        else {
          pvVar2 = realloc(*(void **)this,(ulong)uVar3 << 2);
          *(void **)this = pvVar2;
        }
      }
      *(uint *)(this + 8) = uVar3;
      iVar1 = *(int *)(this + 0xc);
    }
    *(int *)(this + 0xc) = iVar1 + 1;
    *(undefined4 *)(*(long *)this + (long)iVar1 * 4) = 0x47c35280;
  }
  return;
}


