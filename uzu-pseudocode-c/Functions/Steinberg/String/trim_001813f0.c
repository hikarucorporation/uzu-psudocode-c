// Function : trim
// Namespace: Steinberg:String
// Entry    : 001813f0
// Prototype: undefined8 trim(String * this, int param_1)
// Body     : 001813f0 - 0018179a


/* Steinberg::String::trim(Steinberg::String::CharGroup) */

undefined8 __thiscall Steinberg::String::trim(String *this,int param_1)

{
  ushort uVar1;
  ushort *__dest;
  char cVar2;
  int iVar3;
  size_t __n;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  
  __dest = *(ushort **)(this + 8);
  if (__dest == (ushort *)0x0) {
    return 0;
  }
  uVar6 = *(uint *)(this + 0x10);
  uVar8 = uVar6 & 0x3fffffff;
  if (uVar8 == 0) {
    return 0;
  }
  iVar4 = (int)__dest;
  if (param_1 == 2) {
    if ((uVar6 & 0x40000000) == 0) {
      cVar2 = (char)*__dest;
      puVar7 = __dest;
      if (cVar2 != '\0') {
        do {
          iVar3 = isalpha((int)cVar2);
          if (iVar3 != 0) break;
          cVar2 = *(char *)((long)puVar7 + 1);
          puVar7 = (ushort *)((long)puVar7 + 1);
        } while (cVar2 != '\0');
      }
      uVar6 = (int)puVar7 - iVar4;
      iVar4 = 0;
      if (uVar6 < uVar8) {
        puVar7 = (ushort *)((ulong)uVar8 + (long)__dest);
        iVar4 = -1;
        do {
          puVar7 = (ushort *)((long)puVar7 + -1);
          iVar3 = isalpha((int)*(char *)puVar7);
          iVar4 = iVar4 + 1;
          if (puVar7 <= __dest) break;
        } while (iVar3 == 0);
      }
      goto LAB_001815b8;
    }
    uVar1 = *__dest;
    puVar7 = __dest;
    while ((uVar1 != 0 && (iVar4 = iswalpha((uint)uVar1), iVar4 == 0))) {
      uVar1 = puVar7[1];
      puVar7 = puVar7 + 1;
    }
    iVar4 = 0;
    uVar6 = (uint)((ulong)((long)puVar7 - (long)__dest) >> 1);
    if (uVar6 < uVar8) {
      puVar7 = __dest + uVar8;
      iVar4 = -1;
      do {
        puVar7 = puVar7 + -1;
        iVar3 = iswalpha((uint)*puVar7);
        iVar4 = iVar4 + 1;
        if (puVar7 <= __dest) break;
      } while (iVar3 == 0);
    }
LAB_00181728:
    uVar8 = uVar8 - (iVar4 + uVar6);
    if ((uVar6 == 0) || (iVar4 + uVar6 == 0)) goto LAB_0018174c;
    uVar5 = (ulong)uVar6 * 2;
    __n = (ulong)uVar8 * 2;
  }
  else {
    if (param_1 == 1) {
      if ((uVar6 & 0x40000000) == 0) {
        cVar2 = (char)*__dest;
        puVar7 = __dest;
        if (cVar2 != '\0') {
          do {
            iVar3 = isalnum((int)cVar2);
            if (iVar3 != 0) break;
            cVar2 = *(char *)((long)puVar7 + 1);
            puVar7 = (ushort *)((long)puVar7 + 1);
          } while (cVar2 != '\0');
        }
        uVar6 = (int)puVar7 - iVar4;
        iVar4 = 0;
        if (uVar6 < uVar8) {
          puVar7 = (ushort *)((ulong)uVar8 + (long)__dest);
          iVar4 = -1;
          do {
            puVar7 = (ushort *)((long)puVar7 + -1);
            iVar3 = isalnum((int)*(char *)puVar7);
            iVar4 = iVar4 + 1;
            if (puVar7 <= __dest) break;
          } while (iVar3 == 0);
        }
        goto LAB_001815b8;
      }
      uVar1 = *__dest;
      puVar7 = __dest;
      while ((uVar1 != 0 && (iVar4 = iswalnum((uint)uVar1), iVar4 == 0))) {
        uVar1 = puVar7[1];
        puVar7 = puVar7 + 1;
      }
      iVar4 = 0;
      uVar6 = (uint)((ulong)((long)puVar7 - (long)__dest) >> 1);
      if (uVar6 < uVar8) {
        puVar7 = __dest + uVar8;
        iVar4 = -1;
        do {
          puVar7 = puVar7 + -1;
          iVar3 = iswalnum((uint)*puVar7);
          iVar4 = iVar4 + 1;
          if (puVar7 <= __dest) break;
        } while (iVar3 == 0);
      }
      goto LAB_00181728;
    }
    if (param_1 != 0) {
      return 0;
    }
    if ((uVar6 & 0x40000000) != 0) {
      uVar1 = *__dest;
      puVar7 = __dest;
      while ((uVar1 != 0 && (iVar4 = iswspace((uint)uVar1), iVar4 != 0))) {
        uVar1 = puVar7[1];
        puVar7 = puVar7 + 1;
      }
      iVar4 = 0;
      uVar6 = (uint)((ulong)((long)puVar7 - (long)__dest) >> 1);
      if (uVar6 < uVar8) {
        puVar7 = __dest + uVar8;
        iVar4 = -1;
        do {
          puVar7 = puVar7 + -1;
          iVar3 = iswspace((uint)*puVar7);
          iVar4 = iVar4 + 1;
          if (puVar7 <= __dest) break;
        } while (iVar3 != 0);
      }
      goto LAB_00181728;
    }
    cVar2 = (char)*__dest;
    puVar7 = __dest;
    if (cVar2 != '\0') {
      do {
        iVar3 = isspace((int)cVar2);
        if (iVar3 == 0) break;
        cVar2 = *(char *)((long)puVar7 + 1);
        puVar7 = (ushort *)((long)puVar7 + 1);
      } while (cVar2 != '\0');
    }
    uVar6 = (int)puVar7 - iVar4;
    iVar4 = 0;
    if (uVar6 < uVar8) {
      puVar7 = (ushort *)((ulong)uVar8 + (long)__dest);
      iVar4 = -1;
      do {
        puVar7 = (ushort *)((long)puVar7 + -1);
        iVar3 = isspace((int)*(char *)puVar7);
        iVar4 = iVar4 + 1;
        if (puVar7 <= __dest) break;
      } while (iVar3 != 0);
    }
LAB_001815b8:
    uVar8 = uVar8 - (iVar4 + uVar6);
    if ((uVar6 == 0) || (iVar4 + uVar6 == 0)) goto LAB_0018174c;
    uVar5 = (ulong)uVar6;
    __n = (size_t)uVar8;
  }
  memmove(__dest,(char *)(uVar5 + (long)__dest),__n);
LAB_0018174c:
  if (uVar8 == (*(uint *)(this + 0x10) & 0x3fffffff)) {
    return 0;
  }
  resize(this,uVar8,*(uint *)(this + 0x10) >> 0x1e & 1,'\0');
  uVar6 = *(uint *)(this + 0x10) & 0xc0000000 | uVar8 & 0x3fffffff;
  *(uint *)(this + 0x10) = uVar6;
  return CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
}


