// Function : readChar16
// Namespace: Steinberg:FStreamer
// Entry    : 00178980
// Prototype: bool readChar16(FStreamer * this, ushort * param_1)
// Body     : 00178980 - 001789bd


/* Steinberg::FStreamer::readChar16(char16_t&) */

bool __thiscall Steinberg::FStreamer::readChar16(FStreamer *this,ushort *param_1)

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


