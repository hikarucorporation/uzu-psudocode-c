// Function : readInt8
// Namespace: Steinberg:FStreamer
// Entry    : 001789e0
// Prototype: bool readInt8(FStreamer * this, undefined8 param_1)
// Body     : 001789e0 - 001789f4


/* Steinberg::FStreamer::readInt8(char&) */

bool __thiscall Steinberg::FStreamer::readInt8(FStreamer *this,undefined8 param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x10))(this,param_1,1);
  return lVar1 == 1;
}


