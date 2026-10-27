// Function : fromPascalString
// Namespace: Steinberg:String
// Entry    : 001833c0
// Prototype: String * fromPascalString(String * this, byte * param_1)
// Body     : 001833c0 - 001834ae


/* Steinberg::String::fromPascalString(unsigned char const*) */

String * __thiscall Steinberg::String::fromPascalString(String *this,byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000;
  bVar2 = *param_1;
  uVar4 = (ulong)bVar2;
  resize(this,bVar2 + 1,0,'\0');
  *(undefined1 *)(*(long *)(this + 8) + uVar4) = 0;
  if (uVar4 != 0) {
    uVar1 = uVar4 - 1;
    uVar5 = uVar4 & 3;
    uVar3 = uVar4;
    if ((bVar2 & 3) != 0) {
      do {
        uVar3 = uVar4 - 1;
        *(byte *)(*(long *)(this + 8) + -1 + uVar4) = param_1[uVar4];
        uVar5 = uVar5 - 1;
        uVar4 = uVar3;
      } while (uVar5 != 0);
    }
    if (2 < uVar1) {
      do {
        *(byte *)(*(long *)(this + 8) + -1 + uVar3) = param_1[uVar3];
        *(byte *)(*(long *)(this + 8) + -2 + uVar3) = param_1[uVar3 - 1];
        *(byte *)(*(long *)(this + 8) + -3 + uVar3) = param_1[uVar3 - 2];
        *(byte *)(*(long *)(this + 8) + -4 + uVar3) = param_1[uVar3 - 3];
        uVar4 = uVar3 - 3;
        uVar3 = uVar3 - 4;
      } while (1 < uVar4);
    }
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000 | (uint)*param_1;
  return this;
}


