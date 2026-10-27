// Function : toLower
// Namespace: Steinberg:String
// Entry    : 00182ca0
// Prototype: undefined toLower(String * this)
// Body     : 00182ca0 - 00182d16


/* Steinberg::String::toLower() */

void __thiscall Steinberg::String::toLower(String *this)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = *(long *)(this + 8);
  if (((lVar3 != 0) && (uVar2 = *(uint *)(this + 0x10), (uVar2 & 0x3fffffff) != 0)) &&
     ((uVar2 & 0x40000000) == 0)) {
    lVar5 = 0;
    do {
      while( true ) {
        cVar1 = *(char *)(lVar3 + lVar5);
        if (0x19 < (byte)(cVar1 + 0xbfU)) break;
        *(char *)(lVar3 + lVar5) = cVar1 + ' ';
        lVar5 = lVar5 + 1;
        if ((uVar2 & 0x3fffffff) == (uint)lVar5) {
          return;
        }
      }
      iVar4 = tolower((int)cVar1);
      *(char *)(lVar3 + lVar5) = (char)iVar4;
      lVar5 = lVar5 + 1;
    } while ((uVar2 & 0x3fffffff) != (uint)lVar5);
  }
  return;
}


