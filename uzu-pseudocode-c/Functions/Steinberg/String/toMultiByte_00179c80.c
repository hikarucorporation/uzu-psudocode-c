// Function : toMultiByte
// Namespace: Steinberg:String
// Entry    : 00179c80
// Prototype: ulong toMultiByte(String * this, int param_1)
// Body     : 00179c80 - 00179ea5


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Steinberg::String::toMultiByte(unsigned int) */

ulong __thiscall Steinberg::String::toMultiByte(String *this,int param_1)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  void *__ptr;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  long unaff_RBP;
  
  uVar7 = *(uint *)(this + 0x10);
  if ((uVar7 & 0x40000000) == 0) {
    if (param_1 != 0) {
      pcVar6 = *(char **)(this + 8);
      if (pcVar6 == (char *)0x0) {
        uVar7 = uVar7 | 0x40000000;
        *(uint *)(this + 0x10) = uVar7;
      }
      else {
        uVar5 = 0;
        while ((pcVar6 != (char *)0x0 && ((uVar7 & 0x3fffffff) != 0))) {
          uVar4 = _toWideString(this,pcVar6,uVar7 & 0x3fffffff,0);
          if ((char)uVar4 == '\0') goto LAB_00179e19;
          uVar7 = *(uint *)(this + 0x10);
          if ((uVar7 & 0x40000000) != 0) goto LAB_00179d14;
          pcVar6 = *(char **)(this + 8);
        }
        uVar7 = uVar7 | 0x40000000;
        *(uint *)(this + 0x10) = uVar7;
      }
      goto LAB_00179d14;
    }
  }
  else {
LAB_00179d14:
    unaff_RBP = *(long *)(this + 8);
    if ((unaff_RBP != 0) && ((uVar7 & 0x3fffffff) != 0)) {
      if ((param_1 == 0) || (param_1 == 0x4e9f)) {
        uVar5 = 0;
        do {
          psVar1 = (short *)(unaff_RBP + uVar5);
          uVar5 = uVar5 + 2;
        } while (*psVar1 != 0);
        iVar3 = (int)(uVar5 >> 1);
      }
      else if (param_1 == 0xfde9) {
        uVar5 = 0;
        do {
          psVar1 = (short *)(unaff_RBP + uVar5);
          uVar5 = uVar5 + 2;
        } while (*psVar1 != 0);
        if ((converterFacet()::gFacet == '\0') &&
           (iVar3 = __cxa_guard_acquire(&converterFacet()::gFacet), iVar3 != 0)) {
          _DAT_0071b460 = 0;
          _DAT_0071b468 = "ll";
          _DAT_0071b470 = 0;
          converterFacet()::gFacet = PTR_vtable_00715e88 + 0x10;
          __cxa_atexit(PTR____codecvt_utf8_utf16_base_007158f0,&converterFacet()::gFacet,
                       &__dso_handle);
          __cxa_guard_release(&converterFacet()::gFacet);
        }
        iVar3 = (**(code **)(converterFacet()::gFacet + 0x40))(&converterFacet()::gFacet);
        iVar3 = iVar3 * ((int)(uVar5 >> 1) + -1);
        unaff_RBP = *(long *)(this + 8);
      }
      else {
        iVar3 = 0;
      }
      __ptr = malloc((long)(int)(iVar3 + 1U));
      uVar5 = ConstString::wideStringToMultiByte(__ptr,unaff_RBP,iVar3 + 1U,param_1);
      if ((int)uVar5 < 1) {
        free(__ptr);
        uVar5 = 0;
        goto LAB_00179e19;
      }
      free(*(void **)(this + 8));
      *(void **)(this + 8) = __ptr;
      this[0x13] = (String)((byte)this[0x13] & 0xbf);
      pcVar6 = (char *)(**(code **)(*(long *)this + 0x18))(this);
      uVar7 = 0xffffffff;
      do {
        uVar7 = uVar7 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      uVar7 = *(uint *)(this + 0x10) & 0xc0000000 | uVar7 & 0x3fffffff;
    }
    *(uint *)(this + 0x10) = uVar7 & 0xbfffffff;
  }
  uVar5 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
LAB_00179e19:
  return uVar5 & 0xffffffff;
}


