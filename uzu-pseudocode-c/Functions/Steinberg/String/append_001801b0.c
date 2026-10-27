// Function : append
// Namespace: Steinberg:String
// Entry    : 001801b0
// Prototype: String * append(String * this, undefined2 param_1, int param_2)
// Body     : 001801b0 - 001802b7


/* Steinberg::String::append(char16_t, int) */

String * __thiscall Steinberg::String::append(String *this,undefined2 param_1,int param_2)

{
  undefined4 in_EAX;
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_28;
  
  if (param_2 == 1) {
    uStack_28 = (ulong)CONCAT24(param_1,in_EAX);
    this = append(this,(char *)((long)&uStack_28 + 4),1);
  }
  else if (1 < param_2) {
    uVar3 = *(uint *)(this + 0x10);
    if ((uVar3 & 0x40000000) == 0) {
      if ((*(char **)(this + 8) == (char *)0x0) || ((uVar3 & 0x3fffffff) == 0)) {
        uVar3 = uVar3 | 0x40000000;
        *(uint *)(this + 0x10) = uVar3;
      }
      else {
        uVar1 = _toWideString(this,*(char **)(this + 8),uVar3 & 0x3fffffff,0);
        if ((char)uVar1 == '\0') {
          return this;
        }
        uVar3 = *(uint *)(this + 0x10);
      }
    }
    uVar3 = (uVar3 & 0x3fffffff) + param_2;
    uVar2 = resize(this,uVar3,1,'\0');
    if ((char)uVar2 != '\0') {
      if ((*(long *)(this + 8) != 0) && ((*(uint *)(this + 0x10) & 0x3fffffff) < uVar3)) {
        uVar1 = (ulong)(*(uint *)(this + 0x10) & 0x3fffffff);
        *(undefined2 *)(*(long *)(this + 8) + uVar1 * 2) = param_1;
        while (uVar1 = uVar1 + 1, uVar1 != uVar3) {
          *(undefined2 *)(*(long *)(this + 8) + uVar1 * 2) = param_1;
        }
      }
      *(uint *)(this + 0x10) =
           *(uint *)(this + 0x10) & 0xc0000000 | param_2 + *(uint *)(this + 0x10) & 0x3fffffff;
    }
  }
  return this;
}


