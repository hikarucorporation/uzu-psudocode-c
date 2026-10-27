// Function : removeChars8
// Namespace: Steinberg:String
// Entry    : 00181a60
// Prototype: ulong removeChars8(String * this, char * param_1)
// Body     : 00181a60 - 00181c9f


/* Steinberg::String::removeChars8(char const*) */

ulong __thiscall Steinberg::String::removeChars8(String *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  String *pSVar3;
  size_t sVar4;
  short *psVar5;
  ulong uVar6;
  char cVar7;
  char *pcVar8;
  char *__dest;
  uint uVar9;
  char cVar10;
  undefined8 unaff_R15;
  undefined **local_50;
  short *local_48;
  uint local_40;
  String *local_38;
  
  uVar6 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
  if ((param_1 == (char *)0x0) || (pcVar2 = *(char **)(this + 8), pcVar2 == (char *)0x0))
  goto LAB_00181c7a;
  uVar9 = *(uint *)(this + 0x10) & 0x3fffffff;
  if (uVar9 == 0) goto LAB_00181c7a;
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    cVar7 = *pcVar2;
    if ((cVar7 != '\0') &&
       (cVar1 = *param_1, pcVar8 = param_1, local_38 = this, cVar10 = cVar1, __dest = pcVar2,
       cVar1 != '\0')) {
      do {
        while( true ) {
          while (cVar1 == '\0') {
            cVar7 = __dest[1];
            pcVar8 = param_1;
            cVar1 = cVar10;
            __dest = __dest + 1;
            if (cVar7 == '\0') goto LAB_00181b41;
          }
          pcVar8 = pcVar8 + 1;
          if (cVar7 == cVar1) break;
          cVar1 = *pcVar8;
        }
        memmove(__dest,__dest + 1,(size_t)(pcVar2 + ((ulong)uVar9 - (long)__dest)));
        uVar9 = uVar9 - 1;
        cVar1 = *param_1;
        cVar7 = *__dest;
        pcVar8 = param_1;
        cVar10 = cVar1;
      } while (cVar7 != '\0');
LAB_00181b41:
      pSVar3 = local_38;
      if (uVar9 != (*(uint *)(local_38 + 0x10) & 0x3fffffff)) {
        resize(local_38,uVar9,0,'\0');
        *(uint *)(pSVar3 + 0x10) = *(uint *)(pSVar3 + 0x10) & 0xc0000000 | uVar9 & 0x3fffffff;
      }
    }
    goto LAB_00181c7a;
  }
  local_48 = (short *)0x0;
  local_50 = &PTR__String_00702c10;
  sVar4 = strlen(param_1);
  uVar9 = (uint)sVar4;
  if ((uVar9 == 0) || (psVar5 = malloc((ulong)(uVar9 + 1)), psVar5 == (short *)0x0)) {
LAB_00181c35:
    local_40 = 0x40000000;
    uVar9 = 0x40000000;
LAB_00181c42:
    psVar5 = local_48;
    if (local_48 == (short *)0x0) {
      psVar5 = &kEmptyString16;
    }
    if (uVar9 == 0) {
      psVar5 = &kEmptyString16;
    }
    uVar6 = removeChars16(this,psVar5);
    uVar6 = uVar6 & 0xffffffff;
  }
  else {
    *(char *)psVar5 = '\0';
    *(char *)((long)psVar5 + (sVar4 & 0xffffffff)) = '\0';
    local_48 = psVar5;
    if (0 < (int)uVar9) {
      memcpy(psVar5,param_1,sVar4 & 0xffffffff);
    }
    local_40 = uVar9 & 0x3fffffff;
    if ((sVar4 & 0x3fffffff) == 0) goto LAB_00181c35;
                    /* try { // try from 00181be4 to 00181c62 has its CatchHandler @ 00181ca0 */
    uVar6 = _toWideString((String *)&local_50,(char *)psVar5,local_40,0);
    if ((char)uVar6 != '\0') {
      uVar9 = local_40 & 0x40000000;
      if (((uVar9 == 0) && (uVar9 = 0, local_48 != (short *)0x0)) && ((local_40 & 0x3fffffff) != 0))
      {
        _toWideString((String *)&local_50,(char *)local_48,local_40 & 0x3fffffff,0);
        uVar9 = local_40 & 0x40000000;
      }
      goto LAB_00181c42;
    }
    uVar6 = 0;
  }
  if (local_48 != (short *)0x0) {
    local_50 = &PTR__String_00702c10;
    free(local_48);
  }
LAB_00181c7a:
  return uVar6 & 0xffffffff;
}


