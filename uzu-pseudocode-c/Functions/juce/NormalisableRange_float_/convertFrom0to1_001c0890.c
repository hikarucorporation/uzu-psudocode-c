// Function : convertFrom0to1
// Namespace: juce:NormalisableRange_float_
// Entry    : 001c0890
// Prototype: ulong convertFrom0to1(float param_1, NormalisableRange<float> * this)
// Body     : 001c0890 - 001c09ee


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::NormalisableRange<float>::convertFrom0to1(float) const */

ulong __thiscall
juce::NormalisableRange<float>::convertFrom0to1(float param_1,NormalisableRange<float> *this)

{
  float fVar1;
  ulong uVar2;
  undefined1 extraout_var [12];
  float fVar3;
  undefined4 uVar4;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = DAT_005d9038;
  if (param_1 <= DAT_005d9038) {
    local_14 = param_1;
  }
  local_14 = (float)(~-(uint)(param_1 < 0.0) & (uint)local_14);
  uVar4 = 0;
  if (*(long *)(this + 0x28) != 0) {
    local_c = *(undefined4 *)this;
    local_10 = *(undefined4 *)(this + 4);
                    /* try { // try from 001c08d8 to 001c08e9 has its CatchHandler @ 001c09ef */
    uVar2 = (**(code **)(this + 0x30))(this + 0x18,&local_c,&local_10,&local_14);
    return uVar2;
  }
  if (this[0x10] == (NormalisableRange<float>)0x0) {
    if (0.0 < local_14) {
      if ((*(float *)(this + 0xc) != DAT_005d9038) ||
         (NAN(*(float *)(this + 0xc)) || NAN(DAT_005d9038))) {
        fVar3 = logf(local_14);
        local_14 = expf(fVar3 / *(float *)(this + 0xc));
      }
    }
    return (ulong)(uint)((*(float *)(this + 4) - *(float *)this) * local_14 + *(float *)this);
  }
  fVar3 = local_14 + local_14 + DAT_005d9054;
  if (((*(float *)(this + 0xc) != DAT_005d9038) ||
      (NAN(*(float *)(this + 0xc)) || NAN(DAT_005d9038))) && ((fVar3 != 0.0 || (NAN(fVar3))))) {
    fVar1 = logf((float)(_DAT_005d91c0 & (uint)fVar3));
    fVar1 = expf(fVar1 / *(float *)(this + 0xc));
    uVar4 = extraout_var._0_4_;
    fVar3 = (float)(-(uint)(fVar3 < DAT_005d9058) & (_DAT_006524b0 ^ (uint)fVar1) |
                   ~-(uint)(fVar3 < DAT_005d9058) & (uint)fVar1);
  }
  return CONCAT44(uVar4,(fVar3 + DAT_005d9038) *
                        (*(float *)(this + 4) - *(float *)this) * DAT_005d9044 + *(float *)this);
}


