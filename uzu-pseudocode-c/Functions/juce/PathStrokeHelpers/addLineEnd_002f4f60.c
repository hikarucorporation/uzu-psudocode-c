// Function : addLineEnd
// Namespace: juce:PathStrokeHelpers
// Entry    : 002f4f60
// Prototype: undefined addLineEnd(float param_1_00, float param_2, float param_3, float param_4, float param_5, Path * param_6, int param_7)
// Body     : 002f4f60 - 002f51e3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PathStrokeHelpers::addLineEnd(juce::Path&, juce::PathStrokeType::EndCapStyle, float, float,
   float, float, float) */

void __cdecl
juce::PathStrokeHelpers::addLineEnd
          (float param_1_00,float param_2,float param_3,float param_4,float param_5,Path *param_6,
          int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_7 == 0) {
    Path::lineTo(param_3,param_4,param_6);
    return;
  }
  fVar1 = hypotf(param_3 - param_1_00,param_4 - param_2);
  fVar5 = (float)(_DAT_005d91c0 & (uint)fVar1);
  fVar2 = param_1_00;
  fVar3 = param_2;
  fVar4 = param_2;
  fVar6 = param_1_00;
  if (fVar5 == DAT_005d94c8) {
    if ((fVar1 == 0.0) && (!NAN(fVar1))) goto LAB_002f504e;
  }
  else if ((fVar5 <= DAT_005d94cc) || (fVar5 <= DAT_005d94d0 * fVar5)) goto LAB_002f504e;
  fVar4 = (param_3 - param_1_00) * (param_5 / fVar1);
  fVar6 = (param_4 - param_2) * (param_5 / fVar1);
  fVar2 = fVar6 + param_1_00;
  fVar3 = param_2 - fVar4;
  fVar4 = param_4 - fVar4;
  fVar6 = fVar6 + param_3;
LAB_002f504e:
  if (param_7 == 1) {
    Path::lineTo(fVar2,fVar3,param_6);
    Path::lineTo(fVar6,fVar4,param_6);
    Path::lineTo(param_3,param_4,param_6);
    return;
  }
  fVar1 = (fVar6 + fVar2) * DAT_005d9044;
  fVar5 = (fVar4 + fVar3) * DAT_005d9044;
  Path::cubicTo((fVar2 - param_1_00) * DAT_005de46c + param_1_00,
                (fVar3 - param_2) * DAT_005de46c + param_2,(fVar1 - fVar2) * DAT_005de468 + fVar2,
                (fVar5 - fVar3) * DAT_005de468 + fVar3,fVar1,fVar5,param_6);
  Path::cubicTo((fVar6 - fVar1) * DAT_005de46c + fVar1,(fVar4 - fVar5) * DAT_005de46c + fVar5,
                (param_3 - fVar6) * DAT_005de468 + fVar6,(param_4 - fVar4) * DAT_005de468 + fVar4,
                param_3,param_4,param_6);
  return;
}


