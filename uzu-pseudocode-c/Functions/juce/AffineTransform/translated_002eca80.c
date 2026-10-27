// Function : translated
// Namespace: juce:AffineTransform
// Entry    : 002eca80
// Prototype: undefined8 * translated(float param_1, float param_2, undefined8 * param_3, undefined8 * param_4)
// Body     : 002eca80 - 002ecaa5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AffineTransform::translated(float, float) const */

undefined8 * __cdecl
juce::AffineTransform::translated
          (float param_1,float param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar1 = *(float *)(param_4 + 1);
  uVar3 = *(undefined8 *)((long)param_4 + 0xc);
  fVar2 = *(float *)((long)param_4 + 0x14);
  *param_3 = *param_4;
  *(float *)(param_3 + 1) = param_1 + fVar1;
  *(undefined8 *)((long)param_3 + 0xc) = uVar3;
  *(float *)((long)param_3 + 0x14) = param_2 + fVar2;
  return param_3;
}


