// Function : removeChars
// Namespace: Steinberg:String
// Entry    : 001817a0
// Prototype: undefined removeChars(String * this, int param_1)
// Body     : 001817a0 - 00181a50


/* Steinberg::String::removeChars(Steinberg::String::CharGroup) */

void __thiscall Steinberg::String::removeChars(String *this,int param_1)

{
  uint uVar1;
  ushort *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  
  puVar2 = *(ushort **)(this + 8);
  if (puVar2 != (ushort *)0x0) {
    uVar1 = *(uint *)(this + 0x10);
    uVar7 = uVar1 & 0x3fffffff;
    if (uVar7 != 0) {
      if (param_1 == 2) {
        if ((uVar1 & 0x40000000) == 0) {
          cVar3 = (char)*puVar2;
          if (cVar3 != '\0') {
            puVar6 = puVar2;
            do {
              while (iVar5 = isalpha((int)cVar3), iVar5 != 0) {
                puVar6 = (ushort *)((long)puVar6 + 1);
                cVar3 = *(char *)puVar6;
                if (cVar3 == '\0') goto LAB_00181a10;
              }
              memmove(puVar6,(char *)((long)puVar6 + 1),
                      (size_t)((long)puVar2 + ((ulong)uVar7 - (long)puVar6)));
              uVar7 = uVar7 - 1;
              cVar3 = (char)*puVar6;
            } while (cVar3 != '\0');
          }
        }
        else {
          uVar4 = *puVar2;
          if (uVar4 != 0) {
            puVar6 = puVar2;
            do {
              while (iVar5 = iswalpha((uint)uVar4), iVar5 != 0) {
                puVar6 = puVar6 + 1;
                uVar4 = *puVar6;
                if (uVar4 == 0) goto LAB_00181a10;
              }
              memmove(puVar6,puVar6 + 1,
                      ((ulong)uVar7 - ((ulong)((long)puVar6 - (long)puVar2) >> 1)) * 2);
              uVar7 = uVar7 - 1;
              uVar4 = *puVar6;
            } while (uVar4 != 0);
          }
        }
      }
      else if (param_1 == 1) {
        if ((uVar1 & 0x40000000) == 0) {
          cVar3 = (char)*puVar2;
          if (cVar3 != '\0') {
            puVar6 = puVar2;
            do {
              while (iVar5 = isalnum((int)cVar3), iVar5 != 0) {
                puVar6 = (ushort *)((long)puVar6 + 1);
                cVar3 = *(char *)puVar6;
                if (cVar3 == '\0') goto LAB_00181a10;
              }
              memmove(puVar6,(char *)((long)puVar6 + 1),
                      (size_t)((long)puVar2 + ((ulong)uVar7 - (long)puVar6)));
              uVar7 = uVar7 - 1;
              cVar3 = (char)*puVar6;
            } while (cVar3 != '\0');
          }
        }
        else {
          uVar4 = *puVar2;
          if (uVar4 != 0) {
            puVar6 = puVar2;
            do {
              while (iVar5 = iswalnum((uint)uVar4), iVar5 != 0) {
                puVar6 = puVar6 + 1;
                uVar4 = *puVar6;
                if (uVar4 == 0) goto LAB_00181a10;
              }
              memmove(puVar6,puVar6 + 1,
                      ((ulong)uVar7 - ((ulong)((long)puVar6 - (long)puVar2) >> 1)) * 2);
              uVar7 = uVar7 - 1;
              uVar4 = *puVar6;
            } while (uVar4 != 0);
          }
        }
      }
      else {
        if (param_1 != 0) {
          return;
        }
        if ((uVar1 & 0x40000000) == 0) {
          cVar3 = (char)*puVar2;
          if (cVar3 != '\0') {
            puVar6 = puVar2;
            do {
              while (iVar5 = isspace((int)cVar3), iVar5 == 0) {
                puVar6 = (ushort *)((long)puVar6 + 1);
                cVar3 = *(char *)puVar6;
                if (cVar3 == '\0') goto LAB_00181a10;
              }
              memmove(puVar6,(char *)((long)puVar6 + 1),
                      (size_t)((long)puVar2 + ((ulong)uVar7 - (long)puVar6)));
              uVar7 = uVar7 - 1;
              cVar3 = (char)*puVar6;
            } while (cVar3 != '\0');
          }
        }
        else {
          uVar4 = *puVar2;
          if (uVar4 != 0) {
            puVar6 = puVar2;
            do {
              while (iVar5 = iswspace((uint)uVar4), iVar5 == 0) {
                puVar6 = puVar6 + 1;
                uVar4 = *puVar6;
                if (uVar4 == 0) goto LAB_00181a10;
              }
              memmove(puVar6,puVar6 + 1,
                      ((ulong)uVar7 - ((ulong)((long)puVar6 - (long)puVar2) >> 1)) * 2);
              uVar7 = uVar7 - 1;
              uVar4 = *puVar6;
            } while (uVar4 != 0);
          }
        }
      }
LAB_00181a10:
      if (uVar7 != (*(uint *)(this + 0x10) & 0x3fffffff)) {
        resize(this,uVar7,*(uint *)(this + 0x10) >> 0x1e & 1,'\0');
        *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000 | uVar7 & 0x3fffffff;
      }
    }
  }
  return;
}


