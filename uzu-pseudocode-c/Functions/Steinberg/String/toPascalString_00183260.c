// Function : toPascalString
// Namespace: Steinberg:String
// Entry    : 00183260
// Prototype: undefined1 * toPascalString(String * this, undefined1 * param_1)
// Body     : 00183260 - 00183384


/* Steinberg::String::toPascalString(unsigned char*) */

undefined1 * __thiscall Steinberg::String::toPascalString(String *this,undefined1 *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined **local_28;
  void *local_20;
  uint local_18;
  
  if (*(long *)(this + 8) == 0) {
    *param_1 = 0;
  }
  else {
    uVar1 = *(uint *)(this + 0x10);
    local_18 = uVar1 & 0x40000000;
    if (local_18 == 0) {
      uVar4 = 0xff;
      if ((uVar1 & 0x3fffffff) < 0xff) {
        uVar4 = (ulong)(uVar1 & 0x3fffffff);
      }
      *param_1 = (char)uVar4;
      uVar3 = (uint)uVar4;
      uVar1 = uVar3 + 1;
      uVar2 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        do {
          param_1[uVar4 + 1] = *(undefined1 *)(*(long *)(this + 8) + uVar4);
          uVar4 = uVar4 - 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      if (2 < uVar3) {
        do {
          param_1[uVar4 + 1] = *(undefined1 *)(*(long *)(this + 8) + uVar4);
          param_1[uVar4] = *(undefined1 *)(*(long *)(this + 8) + -1 + uVar4);
          param_1[uVar4 - 1] = *(undefined1 *)(*(long *)(this + 8) + -2 + uVar4);
          param_1[uVar4 - 2] = *(undefined1 *)(*(long *)(this + 8) + -3 + uVar4);
          uVar4 = uVar4 - 4;
        } while (uVar4 != 0xffffffffffffffff);
      }
    }
    else {
      local_20 = (void *)0x0;
      local_28 = &PTR__String_00702c10;
      if ((uVar1 & 0x3fffffff) != 0) {
                    /* try { // try from 00183342 to 0018334e has its CatchHandler @ 00183385 */
        assign((String *)&local_28,(long *)this,0xffffffff);
      }
                    /* try { // try from 0018334f to 00183363 has its CatchHandler @ 00183395 */
      toMultiByte((String *)&local_28,0);
      param_1 = toPascalString((String *)&local_28,param_1);
      local_28 = &PTR__String_00702c10;
      if (local_20 != (void *)0x0) {
        free(local_20);
      }
    }
  }
  return param_1;
}


