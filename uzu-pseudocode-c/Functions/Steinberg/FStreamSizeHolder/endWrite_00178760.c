// Function : endWrite
// Namespace: Steinberg:FStreamSizeHolder
// Entry    : 00178760
// Prototype: uint endWrite(FStreamSizeHolder * this)
// Body     : 00178760 - 001787d8


/* Steinberg::FStreamSizeHolder::endWrite() */

uint __thiscall Steinberg::FStreamSizeHolder::endWrite(FStreamSizeHolder *this)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_1c;
  
  if (*(long *)(this + 8) < 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)this + 0x28))();
    (**(code **)(**(long **)this + 0x20))(*(long **)this,*(undefined8 *)(this + 8),0);
    uVar3 = ((int)uVar2 - *(int *)(this + 8)) - 4;
    plVar1 = *(long **)this;
    local_1c = uVar3;
    if ((short)plVar1[1] != 0) {
      local_1c = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000
      ;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_1c,4);
    (**(code **)(**(long **)this + 0x20))(*(long **)this,uVar2,0);
  }
  return uVar3;
}


