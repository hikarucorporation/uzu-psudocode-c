// Function : readUChar8
// Namespace: Steinberg:FStreamer
// Entry    : 00178930
// Prototype: bool readUChar8(FStreamer * this, undefined8 param_1)
// Body     : 00178930 - 00178944


/* Steinberg::FStreamer::readUChar8(unsigned char&) */

bool __thiscall Steinberg::FStreamer::readUChar8(FStreamer *this,undefined8 param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x10))(this,param_1,1);
  return lVar1 == 1;
}


