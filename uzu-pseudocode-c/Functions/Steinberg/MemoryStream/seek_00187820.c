// Function : seek
// Namespace: Steinberg:MemoryStream
// Entry    : 00187820
// Prototype: undefined8 seek(MemoryStream * this, long param_1, int param_2, undefined8 * param_3)
// Body     : 00187820 - 00187866


/* Steinberg::MemoryStream::seek(long, int, long*) */

undefined8 __thiscall
Steinberg::MemoryStream::seek(MemoryStream *this,long param_1,int param_2,undefined8 *param_3)

{
  MemoryStream MVar1;
  
  if (param_2 == 2) {
    param_1 = param_1 + *(long *)(this + 0x20);
LAB_00187834:
    *(long *)(this + 0x28) = param_1;
  }
  else {
    if (param_2 == 1) {
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + param_1;
      MVar1 = this[0x30];
      goto joined_r0x00187856;
    }
    if (param_2 == 0) goto LAB_00187834;
  }
  MVar1 = this[0x30];
joined_r0x00187856:
  if ((MVar1 == (MemoryStream)0x0) && (*(long *)(this + 0x18) < *(long *)(this + 0x28))) {
    *(long *)(this + 0x28) = *(long *)(this + 0x18);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(this + 0x28);
  }
  return 0;
}


