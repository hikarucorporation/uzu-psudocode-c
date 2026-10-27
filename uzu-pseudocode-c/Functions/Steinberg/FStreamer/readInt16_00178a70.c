// Function : readInt16
// Namespace: Steinberg:FStreamer
// Entry    : 00178a70
// Prototype: bool readInt16(FStreamer * this, ushort * param_1)
// Body     : 00178a70 - 00178aad


/* Steinberg::FStreamer::readInt16(short&) */

bool __thiscall Steinberg::FStreamer::readInt16(FStreamer *this,ushort *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x10))(this,param_1,2);
  if (lVar1 == 2) {
    if (*(short *)(this + 8) != 0) {
      *param_1 = *param_1 << 8 | *param_1 >> 8;
    }
  }
  else {
    *param_1 = 0;
  }
  return lVar1 == 2;
}


