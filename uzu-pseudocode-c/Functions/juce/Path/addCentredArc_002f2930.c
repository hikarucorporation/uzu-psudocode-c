// Function : addCentredArc
// Namespace: juce:Path
// Entry    : 002f2930
// Prototype: undefined addCentredArc(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, Path * this, char param_9)
// Body     : 002f2930 - 002f2cb2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Path::addCentredArc(float, float, float, float, float, float, float, bool) */

void __thiscall
juce::Path::addCentredArc
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,Path *this,char param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((0.0 < param_3) && (0.0 < param_4)) {
    fVar1 = cosf(param_5);
    fVar2 = sinf(param_5);
    fVar8 = (float)(_DAT_006524b0 ^ (uint)fVar2);
    fVar6 = (fVar2 * param_2 - fVar1 * param_1) + param_1;
    fVar7 = (fVar8 * param_1 - fVar1 * param_2) + param_2;
    if (param_9 != '\0') {
      fVar3 = sinf(param_6);
      fVar3 = fVar3 * param_3 + param_1;
      fVar4 = cosf(param_6);
      fVar4 = param_2 - fVar4 * param_4;
      startNewSubPath(fVar1 * fVar3 + fVar4 * fVar8 + fVar6,fVar3 * fVar2 + fVar1 * fVar4 + fVar7,
                      this);
    }
    if (param_7 <= param_6) {
      if (param_9 != '\0') {
        param_6 = param_6 + _DAT_005de540;
      }
      if (param_7 < param_6) {
        fVar3 = (float)(_DAT_006524b0 ^ (uint)param_4);
        do {
          fVar4 = sinf(param_6);
          fVar4 = fVar4 * param_3 + param_1;
          fVar5 = cosf(param_6);
          fVar5 = fVar5 * fVar3 + param_2;
          lineTo(fVar5 * fVar8 + fVar1 * fVar4 + fVar6,fVar4 * fVar2 + fVar1 * fVar5 + fVar7,this);
          param_6 = param_6 + _DAT_005de540;
        } while (param_7 < param_6);
      }
    }
    else {
      if (param_9 != '\0') {
        param_6 = param_6 + DAT_005d904c;
      }
      if (param_6 < param_7) {
        fVar3 = (float)(_DAT_006524b0 ^ (uint)param_4);
        do {
          fVar4 = sinf(param_6);
          fVar4 = fVar4 * param_3 + param_1;
          fVar5 = cosf(param_6);
          fVar5 = fVar5 * fVar3 + param_2;
          lineTo(fVar5 * fVar8 + fVar1 * fVar4 + fVar6,fVar4 * fVar2 + fVar1 * fVar5 + fVar7,this);
          param_6 = param_6 + DAT_005d904c;
        } while (param_6 < param_7);
      }
    }
    fVar3 = sinf(param_7);
    fVar4 = param_3 * fVar3 + param_1;
    fVar3 = cosf(param_7);
    fVar3 = param_2 - param_4 * fVar3;
    lineTo(fVar6 + fVar1 * fVar4 + fVar3 * fVar8,fVar7 + fVar2 * fVar4 + fVar3 * fVar1,this);
    return;
  }
  return;
}


