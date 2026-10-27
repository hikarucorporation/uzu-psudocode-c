// Function : readString8
// Namespace: Steinberg:FStreamer
// Entry    : 00179960
// Prototype: long readString8(FStreamer * this, long param_1, long param_2)
// Body     : 00179960 - 001799fb


/* Steinberg::FStreamer::readString8(char*, long) */

long __thiscall Steinberg::FStreamer::readString8(FStreamer *this,long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char local_29;
  
  lVar1 = 0;
  if ((param_1 != 0) && (0 < param_2)) {
    local_29 = '\0';
    lVar2 = 0;
    do {
      lVar1 = (**(code **)(*(long *)this + 0x10))(this,&local_29,1);
      if (((lVar1 != 1) || (*(char *)(param_1 + lVar2) = local_29, local_29 == '\0')) ||
         (local_29 == '\n')) goto LAB_001799c6;
      lVar2 = lVar2 + 1;
    } while (param_2 != lVar2);
    lVar2 = param_2;
LAB_001799c6:
    if (((local_29 == '\n') && (lVar2 != 0)) && (*(char *)(param_1 + -1 + lVar2) == '\r')) {
      lVar2 = lVar2 + -1;
    }
    lVar1 = param_2 + -1;
    if (lVar2 < param_2) {
      lVar1 = lVar2;
    }
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return lVar1;
}


