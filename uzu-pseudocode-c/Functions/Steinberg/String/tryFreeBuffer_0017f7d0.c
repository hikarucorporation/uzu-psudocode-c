// Function : tryFreeBuffer
// Namespace: Steinberg:String
// Entry    : 0017f7d0
// Prototype: undefined tryFreeBuffer(String * this)
// Body     : 0017f7d0 - 0017f7eb


/* Steinberg::String::tryFreeBuffer() */

void __thiscall Steinberg::String::tryFreeBuffer(String *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


