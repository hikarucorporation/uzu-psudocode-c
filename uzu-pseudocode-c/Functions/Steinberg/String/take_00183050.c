// Function : take
// Namespace: Steinberg:String
// Entry    : 00183050
// Prototype: undefined take(String * this, long param_1)
// Body     : 00183050 - 001830b0


/* Steinberg::String::take(Steinberg::String&) */

void __thiscall Steinberg::String::take(String *this,long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  uVar1 = *(uint *)(this + 0x10) & 0x80000000 | uVar1 & 0x40000000;
  *(uint *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(uint *)(this + 0x10) = *(uint *)(param_1 + 0x10) & 0x3fffffff | uVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xc0000000;
  return;
}


