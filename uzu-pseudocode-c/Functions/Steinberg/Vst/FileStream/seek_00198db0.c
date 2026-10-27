// Function : seek
// Namespace: Steinberg:Vst:FileStream
// Entry    : 00198db0
// Prototype: undefined8 seek(FileStream * this, int param_2_00, int param_2, long * param_3)
// Body     : 00198db0 - 00198de8


/* Steinberg::Vst::FileStream::seek(long, int, long*) */

undefined8 __thiscall
Steinberg::Vst::FileStream::seek(FileStream *this,int param_2_00,int param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = fseek(*(FILE **)(this + 0x10),(long)param_2_00,param_2);
  uVar3 = 1;
  if ((iVar1 == 0) && (uVar3 = 0, param_3 != (long *)0x0)) {
    lVar2 = ftell(*(FILE **)(this + 0x10));
    *param_3 = lVar2;
  }
  return uVar3;
}


