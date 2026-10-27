// Function : readBool
// Namespace: Steinberg:FStreamer
// Entry    : 001798a0
// Prototype: bool readBool(FStreamer * this, undefined8 param_1)
// Body     : 001798a0 - 001798f5


/* Steinberg::FStreamer::readBool(bool&) */

bool __thiscall Steinberg::FStreamer::readBool(FStreamer *this,undefined8 param_1)

{
  ulong in_RAX;
  long lVar1;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX & 0xffffffffffff;
  lVar1 = (**(code **)(*(long *)this + 0x10))(this,(long)&uStack_18 + 6,2);
  if (lVar1 == 2) {
    if (*(short *)(this + 8) != 0) {
      uStack_18 = (ulong)(ushort)(uStack_18._6_2_ << 8 | uStack_18._6_2_ >> 8) << 0x30;
    }
  }
  else {
    uStack_18 = 0;
  }
  *(bool *)param_1 = uStack_18._6_2_ != 0;
  return lVar1 == 2;
}


