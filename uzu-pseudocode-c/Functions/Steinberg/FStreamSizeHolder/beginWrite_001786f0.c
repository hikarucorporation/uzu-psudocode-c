// Function : beginWrite
// Namespace: Steinberg:FStreamSizeHolder
// Entry    : 001786f0
// Prototype: undefined beginWrite(FStreamSizeHolder * this)
// Body     : 001786f0 - 00178725


/* Steinberg::FStreamSizeHolder::beginWrite() */

void __thiscall Steinberg::FStreamSizeHolder::beginWrite(FStreamSizeHolder *this)

{
  undefined8 uVar1;
  undefined4 local_c;
  
  uVar1 = (**(code **)(**(long **)this + 0x28))();
  *(undefined8 *)(this + 8) = uVar1;
  local_c = 0;
  (**(code **)(**(long **)this + 0x18))(*(long **)this,&local_c,4);
  return;
}


