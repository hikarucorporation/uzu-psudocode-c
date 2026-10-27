// Function : parseURL
// Namespace: juce:SVGState
// Entry    : 002a1af0
// Prototype: undefined parseURL(SVGState * this, long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 002a1af0 - 002a1ce2


/* juce::SVGState::parseURL(juce::String const&) */

void __thiscall
juce::SVGState::parseURL
          (SVGState *this,long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined8 extraout_RDX;
  byte *pbVar7;
  size_t __n;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *local_38;
  byte *local_30;
  
  iVar3 = 0;
  pcVar5 = "url";
  do {
    if (*pcVar5 < '\0') {
      do {
        pbVar8 = (byte *)(pcVar5 + 1);
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar5;
      } while ((*pbVar8 & 0xc0) == 0x80);
    }
    else {
      pcVar4 = pcVar5 + 1;
      if (*pcVar5 == '\0') break;
    }
    iVar3 = iVar3 + 1;
    pcVar5 = pcVar4;
  } while( true );
  uVar2 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)*param_1,&DAT_005e3b23,iVar3);
  uVar9 = (uint)param_5;
  if (uVar2 == 0) {
    juce::String::fromFirstOccurrenceOf
              ((long *)&local_30,param_1,(byte *)0x5e6401,pcVar5,param_4,param_5);
    iVar3 = juce::String::lastIndexOf
                      ((String *)&local_30,&DAT_00657c65,extraout_RDX,pcVar5,param_4,uVar9);
    pbVar8 = local_30;
    if (iVar3 < 0) {
      local_38 = local_30;
      pbVar8 = local_30 + -0x10;
      if (pbVar8 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar8 = *(int *)pbVar8 + 1;
        UNLOCK();
      }
    }
    else if (iVar3 == 0) {
      local_38 = &DAT_0061ac58;
    }
    else {
      pbVar10 = local_30;
      do {
        bVar1 = *pbVar10;
        if (bVar1 == 0) {
          local_38 = local_30;
          pbVar8 = local_30 + -0x10;
          if (pbVar8 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar8 = *(int *)pbVar8 + 1;
            UNLOCK();
          }
          goto LAB_002a1c85;
        }
        pbVar7 = pbVar10 + 1;
        if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
          if ((bVar1 & 0x20) == 0) {
            pbVar7 = pbVar10 + 2;
          }
          else {
            pbVar7 = pbVar10 + (4 - (ulong)((bVar1 & 0x10) == 0));
          }
        }
        iVar3 = iVar3 + -1;
        pbVar10 = pbVar7;
      } while (iVar3 != 0);
      pbVar10 = &DAT_0061ac58;
      if ((local_30 != (byte *)0x0) && (*local_30 != 0)) {
        __n = (long)pbVar7 - (long)local_30;
        uVar11 = __n + 4 & 0xfffffffffffffffc;
                    /* try { // try from 002a1c54 to 002a1c58 has its CatchHandler @ 002a1ce3 */
        puVar6 = operator_new__(uVar11 + 0x17);
        LOCK();
        *puVar6 = 0;
        UNLOCK();
        *(ulong *)(puVar6 + 2) = uVar11;
        pbVar10 = (byte *)(puVar6 + 4);
        memcpy(pbVar10,pbVar8,__n);
        *(undefined1 *)((long)puVar6 + __n + 0x10) = 0;
      }
      local_38 = pbVar10;
    }
LAB_002a1c85:
                    /* try { // try from 002a1c85 to 002a1c8f has its CatchHandler @ 002a1ce8 */
    juce::String::trim((long *)this,(long *)&local_38);
    pbVar8 = local_38 + -0x10;
    if (pbVar8 != (byte *)&emptyString) {
      LOCK();
      iVar3 = *(int *)pbVar8;
      *(int *)pbVar8 = *(int *)pbVar8 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(pbVar8);
      }
    }
    local_30 = local_30 + -0x10;
    if (local_30 != (byte *)&emptyString) {
      LOCK();
      iVar3 = *(int *)local_30;
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(local_30);
      }
    }
  }
  else {
    *(undefined1 **)this = &DAT_0061ac58;
  }
  return;
}


