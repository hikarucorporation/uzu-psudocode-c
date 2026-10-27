// Function : convertFrom0to1
// Namespace: juce:RangedAudioParameter
// Entry    : 004cf740
// Prototype: ulong convertFrom0to1(undefined8 param_1, RangedAudioParameter * this)
// Body     : 004cf740 - 004cf828


/* juce::RangedAudioParameter::convertFrom0to1(float) const */

ulong __thiscall
juce::RangedAudioParameter::convertFrom0to1(undefined8 param_1,RangedAudioParameter *this)

{
  float fVar1;
  ulong uVar2;
  NormalisableRange<float> *this_00;
  float fVar3;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [16];
  
  local_18._8_4_ = in_XMM0_Dc;
  local_18._0_8_ = param_1;
  local_18._12_4_ = in_XMM0_Dd;
                    /* try { // try from 004cf74d to 004cf752 has its CatchHandler @ 004cf831 */
  this_00 = (NormalisableRange<float> *)(**(code **)(*(long *)this + 0x98))();
  fVar3 = DAT_005d9038;
  if ((float)local_18._0_4_ <= DAT_005d9038) {
    fVar3 = (float)local_18._0_4_;
  }
  uVar2 = NormalisableRange<float>::convertFrom0to1
                    ((float)(~-(uint)((float)local_18._0_4_ < 0.0) & (uint)fVar3),this_00);
  local_24 = (float)uVar2;
  uVar4 = (undefined4)(uVar2 >> 0x20);
  if (*(long *)(this_00 + 0x68) == 0) {
    fVar3 = *(float *)this_00;
    local_18._0_8_ = ZEXT48((uint)fVar3);
    fVar1 = *(float *)(this_00 + 8);
    if (DAT_005d9058 < fVar1) {
      local_18 = ZEXT416((uint)fVar3);
      fVar3 = floorf((local_24 - fVar3) / fVar1 + DAT_005d9044);
      local_24 = fVar3 * fVar1 + local_18._0_4_;
      uVar4 = extraout_XMM0_Db;
    }
    if (((float)local_18._0_8_ < local_24) &&
       (fVar3 = *(float *)(this_00 + 4), (float)local_18._0_8_ < fVar3)) {
      return CONCAT44(uVar4,~-(uint)(fVar3 <= local_24) & (uint)local_24) |
             (ulong)((uint)fVar3 & -(uint)(fVar3 <= local_24));
    }
  }
  else {
    local_1c = *(undefined4 *)this_00;
    local_20 = *(undefined4 *)(this_00 + 4);
                    /* try { // try from 004cf7a3 to 004cf7b4 has its CatchHandler @ 004cf829 */
    local_18._0_8_ = (**(code **)(this_00 + 0x70))(this_00 + 0x58,&local_1c,&local_20,&local_24);
  }
  return local_18._0_8_;
}


