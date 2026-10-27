// Function : readInt8u
// Namespace: Steinberg:FStreamer
// Entry    : 00178a20
// Prototype: bool readInt8u(FStreamer * this, undefined8 param_1)
// Body     : 00178a20 - 00178a34


/* Steinberg::FStreamer::readInt8u(unsigned char&) */

bool __thiscall Steinberg::FStreamer::readInt8u(FStreamer *this,undefined8 param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x10))(this,param_1,1);
  return lVar1 == 1;
}


