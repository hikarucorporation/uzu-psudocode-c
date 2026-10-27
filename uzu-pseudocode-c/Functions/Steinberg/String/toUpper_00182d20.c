// Function : toUpper
// Namespace: Steinberg:String
// Entry    : 00182d20
// Prototype: undefined toUpper(String * this, uint param_1)
// Body     : 00182d20 - 00182d6a


/* Steinberg::String::toUpper(unsigned int) */

void __thiscall Steinberg::String::toUpper(String *this,uint param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *(long *)(this + 8);
  if (((lVar1 != 0) && (param_1 < (*(uint *)(this + 0x10) & 0x3fffffff))) &&
     ((*(uint *)(this + 0x10) & 0x40000000) == 0)) {
    cVar2 = *(char *)(lVar1 + (ulong)param_1);
    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
      cVar2 = cVar2 + -0x20;
    }
    else {
      iVar3 = toupper((int)cVar2);
      cVar2 = (char)iVar3;
    }
    *(char *)(lVar1 + (ulong)param_1) = cVar2;
  }
  return;
}


