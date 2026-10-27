// Function : assign
// Namespace: Steinberg:String
// Entry    : 0017fb50
// Prototype: String * assign(String * this, undefined2 param_1, uint param_2)
// Body     : 0017fb50 - 0017fc33


/* Steinberg::String::assign(char16_t, int) */

String * __thiscall Steinberg::String::assign(String *this,undefined2 param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = resize(this,param_2,1,'\0');
  if ((char)uVar3 != '\0') {
    if (((0 < (int)param_2) && (*(undefined2 **)(this + 8) != (undefined2 *)0x0)) &&
       (**(undefined2 **)(this + 8) = param_1, param_2 != 1)) {
      uVar1 = (ulong)param_2 - 1;
      uVar4 = (ulong)((uint)uVar1 & 3);
      lVar5 = 1;
      if (2 < (ulong)param_2 - 2) {
        uVar2 = 0;
        do {
          uVar6 = uVar2;
          *(undefined2 *)(*(long *)(this + 8) + 2 + uVar6 * 2) = param_1;
          *(undefined2 *)(*(long *)(this + 8) + 4 + uVar6 * 2) = param_1;
          *(undefined2 *)(*(long *)(this + 8) + 6 + uVar6 * 2) = param_1;
          *(undefined2 *)(*(long *)(this + 8) + 8 + uVar6 * 2) = param_1;
          uVar2 = uVar6 + 4;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar6 + 4);
        lVar5 = uVar6 + 5;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined2 *)(*(long *)(this + 8) + lVar5 * 2) = param_1;
        lVar5 = lVar5 + 1;
      }
    }
    *(uint *)(this + 0x10) =
         (*(uint *)(this + 0x10) & 0x80000000) + (param_2 & 0x3fffffff) + 0x40000000;
  }
  return this;
}


