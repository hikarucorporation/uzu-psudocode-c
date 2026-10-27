// Function : pad
// Namespace: Steinberg:FStreamer
// Entry    : 0017a1b0
// Prototype: bool pad(FStreamer * this, int param_1)
// Body     : 0017a1b0 - 0017a1ff


/* Steinberg::FStreamer::pad(unsigned int) */

bool __thiscall Steinberg::FStreamer::pad(FStreamer *this,int param_1)

{
  long lVar1;
  int iVar2;
  undefined1 local_19;
  
  iVar2 = param_1 + 1;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    local_19 = 0;
    lVar1 = (**(code **)(*(long *)this + 0x18))(this,&local_19,1);
  } while (lVar1 == 1);
  return iVar2 == 0;
}


