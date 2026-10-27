// Function : write
// Namespace: Steinberg:Vst:FileStream
// Entry    : 00198d70
// Prototype: bool write(FileStream * this, void * param_1, int param_2, int * param_3)
// Body     : 00198d70 - 00198da8


/* Steinberg::Vst::FileStream::write(void*, int, int*) */

bool __thiscall
Steinberg::Vst::FileStream::write(FileStream *this,void *param_1,int param_2,int *param_3)

{
  size_t sVar1;
  
  sVar1 = fwrite(param_1,1,(long)param_2,*(FILE **)(this + 0x10));
  if (param_3 != (int *)0x0) {
    *param_3 = (int)sVar1;
  }
  return (int)sVar1 != param_2;
}


