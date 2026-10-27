// Function : prependString8
// Namespace: Steinberg:Buffer
// Entry    : 00176eb0
// Prototype: bool prependString8(Buffer * this, char * param_1)
// Body     : 00176eb0 - 00176f6b


/* Steinberg::Buffer::prependString8(char const*) */

bool __thiscall Steinberg::Buffer::prependString8(Buffer *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *__src;
  void *__dest;
  
  if (param_1 == (char *)0x0) {
    return false;
  }
  sVar3 = strlen(param_1);
  iVar5 = (int)sVar3;
  if (iVar5 == 0) goto LAB_00176f61;
  uVar6 = *(uint *)(this + 0x14);
  if (iVar5 < 1) {
    if ((uVar6 != 0) && ((uint)-iVar5 < uVar6)) {
      __dest = *(void **)(this + 8);
      __src = (void *)((ulong)(uint)-iVar5 + (long)__dest);
      uVar6 = uVar6 + iVar5;
      goto LAB_00176f40;
    }
  }
  else {
    if (*(uint *)(this + 0x10) < uVar6 + iVar5) {
      uVar4 = *(uint *)(this + 0x18);
      if (uVar4 == 0) {
        *(undefined4 *)(this + 0x18) = 0x1000;
        uVar4 = 0x1000;
      }
      uVar6 = (uVar6 + iVar5 + uVar4) - 1;
      bVar1 = setSize(this,uVar6 - uVar6 % uVar4);
      if (!bVar1) goto LAB_00176f53;
      uVar6 = *(uint *)(this + 0x14);
    }
    if (uVar6 == 0) {
      iVar2 = 0;
    }
    else {
      __src = *(void **)(this + 8);
      __dest = (void *)((sVar3 & 0xffffffff) + (long)__src);
LAB_00176f40:
      memmove(__dest,__src,(ulong)uVar6);
      iVar2 = *(int *)(this + 0x14);
    }
    *(int *)(this + 0x14) = iVar2 + iVar5;
  }
LAB_00176f53:
  memcpy(*(void **)(this + 8),param_1,sVar3 & 0xffffffff);
LAB_00176f61:
  return iVar5 != 0;
}


