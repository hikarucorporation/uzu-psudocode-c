// Function : readChar8
// Namespace: Steinberg:FStreamer
// Entry    : 001788f0
// Prototype: bool readChar8(FStreamer * this, undefined8 param_1)
// Body     : 001788f0 - 00178904


/* Steinberg::FStreamer::readChar8(char&) */

bool __thiscall Steinberg::FStreamer::readChar8(FStreamer *this,undefined8 param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x10))(this,param_1,1);
  return lVar1 == 1;
}


