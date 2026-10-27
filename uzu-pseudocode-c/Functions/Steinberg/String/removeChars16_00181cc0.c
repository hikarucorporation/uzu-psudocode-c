// Function : removeChars16
// Namespace: Steinberg:String
// Entry    : 00181cc0
// Prototype: ulong removeChars16(String * this, short * param_1)
// Body     : 00181cc0 - 00181f3b


/* Steinberg::String::removeChars16(char16_t const*) */

ulong __thiscall Steinberg::String::removeChars16(String *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  String *pSVar3;
  short sVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  short sVar8;
  short *psVar9;
  short *__dest;
  uint uVar10;
  undefined8 unaff_R15;
  undefined **local_50;
  char *local_48;
  uint local_40;
  String *local_38;
  
  uVar6 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
  if ((param_1 == (short *)0x0) || (psVar2 = *(short **)(this + 8), psVar2 == (short *)0x0))
  goto LAB_00181ee0;
  uVar10 = *(uint *)(this + 0x10) & 0x3fffffff;
  if (uVar10 == 0) goto LAB_00181ee0;
  if ((*(uint *)(this + 0x10) & 0x40000000) != 0) {
    sVar8 = *psVar2;
    if ((sVar8 != 0) &&
       (sVar1 = *param_1, psVar9 = param_1, local_38 = this, __dest = psVar2, sVar4 = sVar1,
       sVar1 != 0)) {
      do {
        while( true ) {
          while (sVar1 == 0) {
            sVar8 = __dest[1];
            psVar9 = param_1;
            sVar1 = sVar4;
            __dest = __dest + 1;
            if (sVar8 == 0) goto LAB_00181e8e;
          }
          psVar9 = psVar9 + 1;
          if (sVar8 == sVar1) break;
          sVar1 = *psVar9;
        }
        memmove(__dest,__dest + 1,((ulong)uVar10 - ((ulong)((long)__dest - (long)psVar2) >> 1)) * 2)
        ;
        uVar10 = uVar10 - 1;
        sVar1 = *param_1;
        sVar8 = *__dest;
        psVar9 = param_1;
        sVar4 = sVar1;
      } while (sVar8 != 0);
LAB_00181e8e:
      pSVar3 = local_38;
      if (uVar10 != (*(uint *)(local_38 + 0x10) & 0x3fffffff)) {
        resize(local_38,uVar10,1,'\0');
        *(uint *)(pSVar3 + 0x10) = *(uint *)(pSVar3 + 0x10) & 0xc0000000 | uVar10 & 0x3fffffff;
      }
    }
    goto LAB_00181ee0;
  }
  local_48 = (char *)0x0;
  local_50 = &PTR__String_00702c10;
  uVar6 = 0;
  do {
    psVar2 = (short *)((long)param_1 + uVar6);
    uVar6 = uVar6 + 2;
  } while (*psVar2 != 0);
  uVar10 = (int)(uVar6 >> 1) - 1;
  if (uVar10 == 0) {
LAB_00181d89:
    local_40 = uVar10 & 0x3fffffff | 0x40000000;
  }
  else {
    local_40 = 0x40000000;
    pcVar5 = malloc(uVar6 & 0x1fffffffe);
    if (pcVar5 != (char *)0x0) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      (pcVar5 + (ulong)uVar10 * 2)[0] = '\0';
      (pcVar5 + (ulong)uVar10 * 2)[1] = '\0';
      local_48 = pcVar5;
      if (0 < (int)uVar10) {
        memcpy(pcVar5,param_1,(ulong)uVar10 * 2);
      }
      goto LAB_00181d89;
    }
  }
                    /* try { // try from 00181d99 to 00181dd9 has its CatchHandler @ 00181f3c */
  uVar6 = toMultiByte((String *)&local_50,0);
  if ((char)uVar6 == '\0') {
    uVar6 = 0;
  }
  else {
    if ((local_40 & 0x40000000) == 0) {
      pcVar7 = "";
      if (local_48 != (char *)0x0) {
        pcVar7 = local_48;
      }
LAB_00181dcf:
      pcVar5 = pcVar7;
    }
    else {
      pcVar5 = "";
      if ((local_48 != (char *)0x0) && ((local_40 & 0x3fffffff) != 0)) {
                    /* try { // try from 00181f0d to 00181f18 has its CatchHandler @ 00181f3c */
        toMultiByte((String *)&local_50,0);
        pcVar5 = "";
        pcVar7 = local_48;
        if (local_48 == (char *)0x0) {
          pcVar7 = "";
        }
        if ((local_40 & 0x40000000) == 0) goto LAB_00181dcf;
      }
    }
    uVar6 = removeChars8(this,pcVar5);
    uVar6 = uVar6 & 0xffffffff;
  }
  if (local_48 != (char *)0x0) {
    local_50 = &PTR__String_00702c10;
    free(local_48);
  }
LAB_00181ee0:
  return uVar6 & 0xffffffff;
}


