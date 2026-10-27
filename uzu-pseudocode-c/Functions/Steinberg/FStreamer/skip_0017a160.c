// Function : skip
// Namespace: Steinberg:FStreamer
// Entry    : 0017a160
// Prototype: bool skip(FStreamer * this, int param_1)
// Body     : 0017a160 - 0017a1aa


/* Steinberg::FStreamer::skip(unsigned int) */

bool __thiscall Steinberg::FStreamer::skip(FStreamer *this,int param_1)

{
  long lVar1;
  int iVar2;
  undefined1 local_19;
  
  iVar2 = param_1 + 1;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    lVar1 = (**(code **)(*(long *)this + 0x10))(this,&local_19,1);
  } while (lVar1 == 1);
  return iVar2 == 0;
}


