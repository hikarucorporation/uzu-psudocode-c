// Function : writeBool
// Namespace: Steinberg:FStreamer
// Entry    : 00179900
// Prototype: bool writeBool(FStreamer * this, undefined2 param_1)
// Body     : 00179900 - 0017992f


/* Steinberg::FStreamer::writeBool(bool) */

bool __thiscall Steinberg::FStreamer::writeBool(FStreamer *this,undefined2 param_1)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 uStack_8;
  
  uStack_8 = CONCAT26(param_1,(int6)in_RAX);
  if (*(short *)(this + 8) != 0) {
    uStack_8 = CONCAT17((char)param_1,(int7)in_RAX) & 0xff00ffffffffffff;
  }
  lVar1 = (**(code **)(*(long *)this + 0x18))(this,(long)&uStack_8 + 6,2);
  return lVar1 == 2;
}


