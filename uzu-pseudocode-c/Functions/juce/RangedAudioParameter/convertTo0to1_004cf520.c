// Function : convertTo0to1
// Namespace: juce:RangedAudioParameter
// Entry    : 004cf520
// Prototype: float convertTo0to1(undefined8 param_1, RangedAudioParameter * this)
// Body     : 004cf520 - 004cf722


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RangedAudioParameter::convertTo0to1(float) const */

float __thiscall
juce::RangedAudioParameter::convertTo0to1(undefined8 param_1,RangedAudioParameter *this)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar5;
  float local_34;
  float local_30;
  float local_2c;
  undefined1 local_28 [16];
  float local_c;
  
  local_28._8_4_ = in_XMM0_Dc;
  local_28._0_8_ = param_1;
  local_28._12_4_ = in_XMM0_Dd;
                    /* try { // try from 004cf52d to 004cf532 has its CatchHandler @ 004cf733 */
  pfVar2 = (float *)(**(code **)(*(long *)this + 0x98))();
  if (*(long *)(pfVar2 + 0x1a) != 0) {
    local_2c = *pfVar2;
    local_30 = pfVar2[1];
    local_34 = (float)local_28._0_4_;
                    /* try { // try from 004cf565 to 004cf576 has its CatchHandler @ 004cf72b */
    fVar3 = (float)(**(code **)(pfVar2 + 0x1c))(pfVar2 + 0x16,&local_2c,&local_30,&local_34);
    fVar5 = *pfVar2;
    lVar1 = *(long *)(pfVar2 + 0x12);
    goto joined_r0x004cf650;
  }
  fVar5 = *pfVar2;
  fVar3 = pfVar2[2];
  if (fVar3 <= 0.0) {
    fVar3 = (float)local_28._0_4_;
    if (fVar5 < (float)local_28._0_4_) goto LAB_004cf630;
  }
  else {
    fVar4 = (float)local_28._0_4_ - fVar5;
    local_28._0_4_ = fVar5;
    local_c = fVar3;
    fVar5 = floorf(fVar4 / fVar3 + DAT_005d9044);
    fVar3 = fVar5 * local_c + (float)local_28._0_4_;
    fVar5 = (float)local_28._0_4_;
    if ((float)local_28._0_4_ < fVar3) {
LAB_004cf630:
      fVar4 = pfVar2[1];
      if (fVar5 < fVar4) {
        lVar1 = *(long *)(pfVar2 + 0x12);
        fVar3 = (float)(~-(uint)(fVar4 <= fVar3) & (uint)fVar3 |
                       (uint)fVar4 & -(uint)(fVar4 <= fVar3));
        goto joined_r0x004cf650;
      }
    }
  }
  lVar1 = *(long *)(pfVar2 + 0x12);
  fVar3 = fVar5;
joined_r0x004cf650:
  if (lVar1 == 0) {
    fVar4 = pfVar2[3];
    fVar3 = (fVar3 - fVar5) / (pfVar2[1] - fVar5);
    fVar5 = DAT_005d9038;
    if (fVar3 <= DAT_005d9038) {
      fVar5 = fVar3;
    }
    fVar5 = (float)(~-(uint)(fVar3 < 0.0) & (uint)fVar5);
    if ((fVar4 != DAT_005d9038) || (NAN(fVar4) || NAN(DAT_005d9038))) {
      if (*(char *)(pfVar2 + 4) == '\0') {
        fVar5 = powf(fVar5,fVar4);
        return fVar5;
      }
      fVar5 = fVar5 + fVar5 + DAT_005d9054;
      local_28 = ZEXT416((uint)fVar5);
      fVar5 = powf((float)(_DAT_005d91c0 & (uint)fVar5),fVar4);
      return ((float)(~-(uint)((float)local_28._0_4_ < 0.0) & (uint)DAT_005d9038 |
                     (uint)DAT_005d9054 & -(uint)((float)local_28._0_4_ < 0.0)) * fVar5 +
             DAT_005d9038) * DAT_005d9044;
    }
  }
  else {
    local_30 = pfVar2[1];
                    /* try { // try from 004cf5a7 to 004cf5b8 has its CatchHandler @ 004cf723 */
    local_34 = fVar3;
    local_2c = fVar5;
    fVar3 = (float)(**(code **)(pfVar2 + 0x14))(pfVar2 + 0xe,&local_2c,&local_30,&local_34);
    fVar5 = DAT_005d9038;
    if (fVar3 <= DAT_005d9038) {
      fVar5 = fVar3;
    }
    fVar5 = (float)(~-(uint)(fVar3 < 0.0) & (uint)fVar5);
  }
  return fVar5;
}


