// Function : parseString
// Namespace: juce:JSONParser
// Entry    : 004b12b0
// Prototype: undefined parseString(undefined8 * param_1, JSONParser * param_2, uint param_3)
// Body     : 004b12b0 - 004b1bf7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JSONParser::parseString(wchar_t) */

void __cdecl juce::JSONParser::parseString(undefined8 *param_1,JSONParser *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  char *__src;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  sbyte sVar12;
  uint uVar13;
  undefined1 uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  byte *pbVar18;
  int *piVar19;
  byte *unaff_R13;
  byte *local_98;
  uint local_8c;
  String local_88 [8];
  undefined8 *local_80;
  undefined **local_78;
  long local_70;
  long *local_68;
  void *local_60;
  char *local_50;
  ulong local_40;
  
  local_8c = param_3;
  local_80 = param_1;
  MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_78,0x100);
LAB_004b12e0:
  pbVar18 = *(byte **)(param_2 + 8);
  pbVar6 = pbVar18 + 1;
  *(byte **)(param_2 + 8) = pbVar6;
  bVar11 = *pbVar18;
  uVar13 = (uint)bVar11;
  if ((char)bVar11 < '\0') {
    uVar16 = (uint)bVar11;
    if ((bVar11 & 0x40) == 0) {
      uVar13 = uVar16 & 0x7f;
    }
    else {
      uVar13 = uVar16 & 0x10 ^ 0x1f;
      if ((bVar11 & 0x20) == 0) {
        uVar13 = 0x3f;
      }
      uVar13 = uVar13 & uVar16;
      bVar2 = *pbVar6;
      if ((bVar2 & 0xffffffc0) == 0x80) {
        pbVar6 = pbVar18 + 2;
        uVar13 = bVar2 & 0x3f | uVar13 << 6;
        *(byte **)(param_2 + 8) = pbVar6;
        if (((bVar11 & 0x20) != 0) && (bVar11 = *pbVar6, (bVar11 & 0xc0) == 0x80)) {
          pbVar6 = pbVar18 + 3;
          *(byte **)(param_2 + 8) = pbVar6;
          uVar13 = bVar11 & 0x3f | uVar13 << 6;
          if (((byte)((byte)((uVar16 & 0x10) >> 4) & (byte)((uVar16 & 0x20) >> 5)) != 0) &&
             (bVar11 = *pbVar6, (bVar11 & 0xffffffc0) == 0x80)) {
            pbVar6 = pbVar18 + 4;
            *(byte **)(param_2 + 8) = pbVar6;
            uVar13 = bVar11 & 0x3f | uVar13 << 6;
          }
        }
      }
    }
  }
  if (uVar13 == local_8c) {
    __src = local_50;
    if (local_68 != (long *)0x0) {
      if (local_40 < (ulong)local_68[1]) {
        *(undefined1 *)(*local_68 + local_40) = 0;
      }
      __src = (char *)*local_68;
    }
    puVar9 = (undefined4 *)&DAT_0061ac58;
    if ((__src != (char *)0x0) && (puVar9 = (undefined4 *)&DAT_0061ac58, *__src != '\0')) {
      uVar15 = local_40 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004b193e to 004b1942 has its CatchHandler @ 004b1b75 */
      puVar8 = operator_new__(uVar15 + 0x17);
      LOCK();
      *puVar8 = 0;
      UNLOCK();
      *(ulong *)(puVar8 + 2) = uVar15;
      puVar9 = puVar8 + 4;
      memcpy(puVar9,__src,local_40);
      *(undefined1 *)((long)puVar8 + local_40 + 0x10) = 0;
    }
    *local_80 = puVar9;
    local_78 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 004b197e to 004b1987 has its CatchHandler @ 004b1b7b */
    MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_78);
    free(local_60);
    local_78 = &PTR__OutputStream_00713440;
    piVar19 = (int *)(local_70 + -0x10);
    if (piVar19 != &emptyString) {
      LOCK();
      iVar1 = *piVar19;
      *piVar19 = *piVar19 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar19);
      }
    }
    return;
  }
  if (uVar13 != 0x5c) goto switchD_004b14af_caseD_63;
  unaff_R13 = pbVar6 + 1;
  *(byte **)(param_2 + 8) = unaff_R13;
  bVar11 = *pbVar6;
  uVar13 = (uint)bVar11;
  if ((char)bVar11 < '\0') {
    uVar16 = (uint)bVar11;
    if ((bVar11 & 0x40) == 0) {
      uVar13 = uVar16 & 0x7f;
    }
    else {
      uVar13 = uVar16 & 0x10 ^ 0x1f;
      if ((bVar11 & 0x20) == 0) {
        uVar13 = 0x3f;
      }
      uVar13 = uVar13 & uVar16;
      bVar2 = *unaff_R13;
      if ((bVar2 & 0xffffffc0) == 0x80) {
        unaff_R13 = pbVar6 + 2;
        uVar13 = bVar2 & 0x3f | uVar13 << 6;
        *(byte **)(param_2 + 8) = unaff_R13;
        if (((bVar11 & 0x20) != 0) && (bVar11 = *unaff_R13, (bVar11 & 0xffffffc0) == 0x80)) {
          unaff_R13 = pbVar6 + 3;
          *(byte **)(param_2 + 8) = unaff_R13;
          uVar13 = bVar11 & 0x3f | uVar13 << 6;
          if (((byte)((byte)((uVar16 & 0x10) >> 4) & (byte)((uVar16 & 0x20) >> 5)) != 0) &&
             (bVar11 = *unaff_R13, (bVar11 & 0xffffffc0) == 0x80)) {
            unaff_R13 = pbVar6 + 4;
            *(byte **)(param_2 + 8) = unaff_R13;
            uVar13 = bVar11 & 0x3f | uVar13 << 6;
          }
        }
      }
    }
  }
  uVar14 = 7;
  switch(uVar13) {
  case 0x61:
    break;
  case 0x62:
    uVar14 = 8;
    break;
  default:
    goto switchD_004b14af_caseD_63;
  case 0x66:
    uVar14 = 0xc;
    break;
  case 0x6e:
    uVar14 = 10;
    break;
  case 0x72:
    uVar14 = 0xd;
    break;
  case 0x74:
    uVar14 = 9;
    break;
  case 0x75:
    if ((unaff_R13[-1] & 0xc0) == 0x80) {
      if ((unaff_R13[-2] & 0xc0) != 0x80) {
        pbVar6 = unaff_R13 + -2;
        bVar11 = unaff_R13[-3];
        goto joined_r0x004b1522;
      }
      if ((unaff_R13[-3] & 0xc0) != 0x80) {
        pbVar6 = unaff_R13 + -3;
        bVar11 = unaff_R13[-4];
        goto joined_r0x004b1522;
      }
      pbVar6 = unaff_R13 + -4;
      if ((unaff_R13[-5] & 0xc0) == 0x80) goto LAB_004b1524;
LAB_004b154f:
      unaff_R13 = pbVar6 + -1;
    }
    else {
      pbVar6 = unaff_R13 + -1;
      bVar11 = unaff_R13[-2];
joined_r0x004b1522:
      if ((bVar11 & 0xc0) != 0x80) goto LAB_004b154f;
LAB_004b1524:
      if ((pbVar6[-2] & 0xc0) == 0x80) {
        if ((pbVar6[-3] & 0xc0) == 0x80) {
          unaff_R13 = pbVar6 + -4;
        }
        else {
          unaff_R13 = pbVar6 + -3;
        }
      }
      else {
        unaff_R13 = pbVar6 + -2;
      }
    }
                    /* try { // try from 004b1570 to 004b18d0 has its CatchHandler @ 004b1be3 */
    uVar16 = parseHexDigit(param_2);
    uVar3 = parseHexDigit(param_2);
    uVar4 = parseHexDigit(param_2);
    uVar13 = parseHexDigit(param_2);
    uVar13 = uVar4 << 4 | uVar16 << 0xc | uVar3 << 8 | uVar13;
    uVar16 = 0;
    if ((uVar13 & 0xf800) == 0xd800) {
      if ((uVar13 & 0xfc00) != 0xd800) goto LAB_004b1ab3;
      unaff_R13 = *(byte **)(param_2 + 8);
      pbVar6 = unaff_R13 + 1;
      *(byte **)(param_2 + 8) = pbVar6;
      bVar11 = *unaff_R13;
      uVar16 = (uint)bVar11;
      if ((char)bVar11 < '\0') {
        uVar3 = (uint)bVar11;
        if ((bVar11 & 0x40) == 0) {
          uVar16 = uVar3 & 0x7f;
        }
        else {
          bVar2 = *pbVar6;
          if ((bVar2 & 0xc0) != 0x80) goto LAB_004b19f6;
          uVar16 = uVar3 & 0x10 ^ 0x1f;
          if ((bVar11 & 0x20) == 0) {
            uVar16 = 0x3f;
          }
          pbVar6 = unaff_R13 + 2;
          uVar16 = bVar2 & 0x3f | (uVar16 & uVar3) << 6;
          *(byte **)(param_2 + 8) = pbVar6;
          if (((bVar11 & 0x20) != 0) && (bVar2 = *pbVar6, (bVar2 & 0xffffffc0) == 0x80)) {
            pbVar6 = unaff_R13 + 3;
            *(byte **)(param_2 + 8) = pbVar6;
            uVar16 = bVar2 & 0x3f | uVar16 << 6;
            if (((byte)((byte)((uVar3 & 0x10) >> 4) & bVar11 >> 5) != 0) &&
               (bVar11 = *pbVar6, (bVar11 & 0xffffffc0) == 0x80)) {
              pbVar6 = unaff_R13 + 4;
              *(byte **)(param_2 + 8) = pbVar6;
              uVar16 = uVar16 << 6 | bVar11 & 0x3f;
            }
          }
        }
      }
      if (uVar16 != 0x5c) goto LAB_004b19f6;
      *(byte **)(param_2 + 8) = pbVar6 + 1;
      bVar11 = *pbVar6;
      uVar16 = (uint)bVar11;
      if ((char)bVar11 < '\0') {
        uVar3 = (uint)bVar11;
        if ((bVar11 & 0x40) == 0) {
          uVar16 = uVar3 & 0x7f;
        }
        else {
          uVar16 = (uint)pbVar6[1];
          if ((uVar16 & 0xffffffc0) != 0x80) goto LAB_004b19f6;
          uVar4 = uVar3 & 0x10 ^ 0x1f;
          if ((bVar11 & 0x20) == 0) {
            uVar4 = 0x3f;
          }
          uVar16 = uVar16 & 0x3f | (uVar4 & uVar3) << 6;
          *(byte **)(param_2 + 8) = pbVar6 + 2;
          if (((bVar11 & 0x20) != 0) && (bVar2 = pbVar6[2], (bVar2 & 0xc0) == 0x80)) {
            *(byte **)(param_2 + 8) = pbVar6 + 3;
            uVar16 = bVar2 & 0x3f | uVar16 << 6;
            if (((byte)((byte)((uVar3 & 0x10) >> 4) & bVar11 >> 5) != 0) &&
               (uVar3 = (uint)pbVar6[3], (uVar3 & 0xffffffc0) == 0x80)) {
              *(byte **)(param_2 + 8) = pbVar6 + 4;
              uVar16 = uVar16 << 6 | uVar3 & 0x3f;
            }
          }
        }
      }
      if (uVar16 != 0x75) goto LAB_004b19f6;
      uVar3 = parseHexDigit(param_2);
      uVar4 = parseHexDigit(param_2);
      uVar5 = parseHexDigit(param_2);
      uVar16 = parseHexDigit(param_2);
      uVar16 = uVar5 << 4 | uVar3 << 0xc | uVar4 << 8 | uVar16;
      if ((uVar16 & 0xfc00) != 0xdc00) goto LAB_004b1ad0;
      uVar16 = uVar16 << 0x10;
    }
    uVar13 = uVar13 & 0xffff;
    if (((uVar16 | uVar13) & 0xfc00fc00) == 0xdc00d800) {
      uVar13 = ((uVar16 >> 0x10) - 0xdc00 | uVar13 * 0x400 + 0xfca00000) + 0x10000;
    }
switchD_004b14af_caseD_63:
    if (uVar13 == 0) {
                    /* try { // try from 004b19d4 to 004b19e4 has its CatchHandler @ 004b1be1 */
      juce::String::String(local_88,(byte *)"Unexpected EOF in string constant");
                    /* try { // try from 004b19e9 to 004b19f5 has its CatchHandler @ 004b1bb5 */
      throwError(param_2,(undefined8 *)local_88,*(byte **)(param_2 + 8));
LAB_004b19f6:
                    /* try { // try from 004b19f6 to 004b19ff has its CatchHandler @ 004b1bb3 */
      puVar9 = operator_new__(0x37);
      LOCK();
      *puVar9 = 0;
      UNLOCK();
      *(undefined8 *)(puVar9 + 2) = 0x20;
      local_98 = (byte *)(puVar9 + 4);
      bVar11 = 0x45;
      lVar17 = 2;
      pbVar6 = local_98;
      while( true ) {
        if ((char)bVar11 < '\0') {
          *pbVar6 = bVar11 >> 6 | 0xc0;
          pbVar6[1] = bVar11 & 0x3f | 0x80;
          pbVar18 = pbVar6 + 2;
          pbVar6 = pbVar6 + 1;
        }
        else {
          *pbVar6 = bVar11;
          pbVar18 = pbVar6 + 1;
        }
        if (lVar17 == 0x1e) break;
        bVar11 = "Invalid hex character"[lVar17 + 0x15];
        if ((char)bVar11 < '\0') {
          pbVar6[1] = bVar11 >> 6 | 0xc0;
          pbVar6[2] = bVar11 & 0x3f | 0x80;
        }
        else {
          *pbVar18 = bVar11;
          pbVar18 = pbVar6;
        }
        pbVar6 = pbVar18 + 2;
        bVar11 = "Expected UTF-16 low surrogate"[lVar17];
        lVar17 = lVar17 + 2;
      }
      *pbVar18 = 0;
                    /* try { // try from 004b1aa5 to 004b1ab2 has its CatchHandler @ 004b1b9a */
      throwError(param_2,&local_98,unaff_R13);
LAB_004b1ab3:
                    /* try { // try from 004b1ab3 to 004b1ac1 has its CatchHandler @ 004b1bb3 */
      juce::String::String((String *)&local_98,(byte *)"Invalid UTF-16 escape sequence");
                    /* try { // try from 004b1ac2 to 004b1acf has its CatchHandler @ 004b1b79 */
      throwError(param_2,&local_98,unaff_R13);
LAB_004b1ad0:
                    /* try { // try from 004b1ad0 to 004b1ad9 has its CatchHandler @ 004b1bb3 */
      puVar9 = operator_new__(0x37);
      LOCK();
      *puVar9 = 0;
      UNLOCK();
      *(undefined8 *)(puVar9 + 2) = 0x20;
      local_98 = (byte *)(puVar9 + 4);
      bVar11 = 0x45;
      lVar17 = 2;
      pbVar6 = local_98;
      while( true ) {
        if ((char)bVar11 < '\0') {
          *pbVar6 = bVar11 >> 6 | 0xc0;
          pbVar6[1] = bVar11 & 0x3f | 0x80;
          pbVar18 = pbVar6 + 2;
          pbVar6 = pbVar6 + 1;
        }
        else {
          *pbVar6 = bVar11;
          pbVar18 = pbVar6 + 1;
        }
        if (lVar17 == 0x1e) break;
        bVar11 = "Invalid hex character"[lVar17 + 0x15];
        if ((char)bVar11 < '\0') {
          pbVar6[1] = bVar11 >> 6 | 0xc0;
          pbVar6[2] = bVar11 & 0x3f | 0x80;
        }
        else {
          *pbVar18 = bVar11;
          pbVar18 = pbVar6;
        }
        pbVar6 = pbVar18 + 2;
        bVar11 = "Expected UTF-16 low surrogate"[lVar17];
        lVar17 = lVar17 + 2;
      }
      *pbVar18 = 0;
                    /* try { // try from 004b1b67 to 004b1b74 has its CatchHandler @ 004b1b77 */
      uVar10 = throwError(param_2,&local_98,unaff_R13);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b193e with catch @ 004b1b75
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b1570 with catch @ 004b1be3
                        */
      MemoryOutputStream::~MemoryOutputStream((MemoryOutputStream *)&local_78);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar10);
    }
    if (uVar13 < 0x80) {
      uVar14 = (undefined1)uVar13;
      break;
    }
    lVar17 = 4 - (ulong)(uVar13 < 0x10000);
    if (uVar13 < 0x800) {
      lVar17 = 2;
    }
    pbVar6 = (byte *)MemoryOutputStream::prepareToWrite((MemoryOutputStream *)&local_78,lVar17);
    if (pbVar6 != (byte *)0x0) {
      uVar16 = 0xffff < uVar13 | 2;
      if (uVar13 < 0x800) {
        uVar16 = 1;
      }
      bVar11 = (byte)uVar16;
      sVar12 = bVar11 * '\x06';
      *pbVar6 = (byte)(uVar13 >> sVar12) | (byte)(0xff << (bVar11 ^ 7));
      pbVar6[1] = (byte)(uVar13 >> ((bVar11 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
      if ((0x7ff < uVar13) &&
         (pbVar6[2] = (byte)(uVar13 >> (sVar12 - 0xcU & 0x1f)) & 0x3f | 0x80, 1 < uVar16 - 1)) {
        pbVar6[3] = (byte)(uVar13 >> (sVar12 - 0x12U & 0x1f)) & 0x3f | 0x80;
      }
    }
    goto LAB_004b12e0;
  }
  puVar7 = (undefined1 *)MemoryOutputStream::prepareToWrite((MemoryOutputStream *)&local_78,1);
  if (puVar7 != (undefined1 *)0x0) {
    *puVar7 = uVar14;
  }
  goto LAB_004b12e0;
}


