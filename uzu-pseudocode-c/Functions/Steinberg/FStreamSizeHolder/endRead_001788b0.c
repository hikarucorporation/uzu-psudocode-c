// Function : endRead
// Namespace: Steinberg:FStreamSizeHolder
// Entry    : 001788b0
// Prototype: undefined endRead(FStreamSizeHolder * this)
// Body     : 001788b0 - 001788c7


/* Steinberg::FStreamSizeHolder::endRead() */

void __thiscall Steinberg::FStreamSizeHolder::endRead(FStreamSizeHolder *this)

{
  if (*(long *)(this + 8) < 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001788c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x20))(*(long **)this,*(long *)(this + 8),0);
  return;
}


