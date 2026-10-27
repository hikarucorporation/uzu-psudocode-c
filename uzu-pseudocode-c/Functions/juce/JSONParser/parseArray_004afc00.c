// Function : parseArray
// Namespace: juce:JSONParser
// Entry    : 004afc00
// Prototype: undefined parseArray(long * param_1, JSONParser * param_2)
// Body     : 004afc00 - 004b034f


/* WARNING: Removing unreachable block (ram,0x004afc74) */
/* WARNING: Removing unreachable block (ram,0x004afc80) */
/* WARNING: Removing unreachable block (ram,0x004afc94) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JSONParser::parseArray() */

void __cdecl juce::JSONParser::parseArray(long *param_1,JSONParser *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ArrayBase<juce::var,juce::DummyCriticalSection> *this;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  byte *pbVar13;
  long local_68;
  long lStack_60;
  long local_58;
  String local_50 [8];
  byte *local_48;
  long *local_40;
  long *local_38;
  
  local_68 = 0;
  lStack_60 = 0;
  *param_1 = (long)&var::Instance::attributesArray;
                    /* try { // try from 004afc25 to 004afc2e has its CatchHandler @ 004b02fa */
  puVar7 = operator_new(0x20);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = &PTR__RefCountedArray_00713d88;
  puVar7[2] = 0;
  puVar7[3] = 0;
  LOCK();
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
  UNLOCK();
  param_1[1] = (long)puVar7;
  lStack_60 = 0;
  local_68 = 0;
  free((void *)0x0);
                    /* try { // try from 004afcae to 004afcb8 has its CatchHandler @ 004b02f2 */
  local_40 = param_1 + 1;
  local_38 = param_1;
  this = (ArrayBase<juce::var,juce::DummyCriticalSection> *)
         (**(code **)(*param_1 + 0x40))(param_1 + 1);
  local_48 = *(byte **)(param_2 + 8);
  pbVar1 = local_48;
LAB_004afcd0:
  do {
    pbVar13 = pbVar1;
    bVar2 = *pbVar13;
    uVar6 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar10 = (uint)bVar2;
      if ((bVar2 & 0x40) == 0) {
        iVar5 = iswspace(uVar10 & 0x7f);
      }
      else {
        uVar6 = uVar10 & 0x10 ^ 0x1f;
        if ((bVar2 & 0x20) == 0) {
          uVar6 = 0x3f;
        }
        uVar6 = uVar6 & uVar10;
        if ((pbVar13[1] & 0xffffffc0) != 0x80) goto LAB_004afd90;
        uVar6 = pbVar13[1] & 0x3f | uVar6 << 6;
        if (((bVar2 & 0x20) == 0) || ((pbVar13[2] & 0xffffffc0) != 0x80)) {
          iVar5 = iswspace(uVar6);
        }
        else {
          uVar6 = pbVar13[2] & 0x3f | uVar6 << 6;
          if (((bVar2 >> 5 & (bVar2 & 0x10) == 0) != 0) || ((pbVar13[3] & 0xffffffc0) != 0x80))
          goto LAB_004afd90;
          iVar5 = iswspace(uVar6 << 6 | pbVar13[3] & 0x3f);
        }
      }
    }
    else {
LAB_004afd90:
      iVar5 = iswspace(uVar6);
    }
    if (iVar5 == 0) {
      *(byte **)(param_2 + 8) = pbVar13;
      bVar2 = *pbVar13;
      uVar6 = (uint)bVar2;
      if (-1 < (char)bVar2) {
        if (bVar2 != 0x5d) goto joined_r0x004b0195;
LAB_004b01be:
        *(byte **)(param_2 + 8) = pbVar13 + 1;
        bVar2 = *pbVar13;
        if (-1 < (char)bVar2) {
          return;
        }
        if ((bVar2 & 0x40) == 0) {
          return;
        }
        goto joined_r0x004b02a9;
      }
      uVar10 = (uint)bVar2;
      if ((bVar2 & 0x40) == 0) {
        uVar9 = uVar10 & 0x7f;
LAB_004afe14:
        if (uVar9 == 0x5d) goto LAB_004b01be;
        if (-1 < (char)bVar2) goto joined_r0x004b0195;
        if ((bVar2 & 0x40) != 0) goto LAB_004afec1;
        if ((bVar2 & 0x7f) == 0) goto LAB_004b019b;
      }
      else {
        if ((pbVar13[1] & 0xffffffc0) == 0x80) {
          uVar9 = uVar10 & 0x10 ^ 0x1f;
          if ((bVar2 & 0x20) == 0) {
            uVar9 = 0x3f;
          }
          uVar9 = pbVar13[1] & 0x3f | (uVar9 & uVar10) << 6;
          if ((((bVar2 & 0x20) != 0) && ((pbVar13[2] & 0xffffffc0) == 0x80)) &&
             ((uVar9 = pbVar13[2] & 0x3f | uVar9 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
              ((pbVar13[3] & 0xffffffc0) == 0x80)))) {
            uVar9 = uVar9 << 6 | pbVar13[3] & 0x3f;
          }
          goto LAB_004afe14;
        }
LAB_004afec1:
        uVar10 = uVar10 & 0x10 ^ 0x1f;
        if ((bVar2 & 0x20) == 0) {
          uVar10 = 0x3f;
        }
        uVar10 = uVar10 & bVar2;
        bVar3 = pbVar13[1];
        uVar6 = uVar10;
        if ((bVar3 & 0xffffffc0) == 0x80) {
          uVar6 = bVar3 & 0x3f | uVar10 << 6;
          if ((bVar2 & 0x20) != 0) {
            bVar4 = pbVar13[2];
            if ((bVar4 & 0xffffffc0) == 0x80) {
              uVar6 = bVar4 & 0x3f | uVar6 << 6;
              if ((bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0) {
                if ((pbVar13[3] & 0xc0) == 0x80) {
                  if (((bVar4 & 0x3f) == 0 && ((bVar3 & 0x3f) == 0 && uVar10 == 0)) &&
                      (pbVar13[3] & 0x3f) == 0) goto LAB_004b019b;
                  goto LAB_004aff58;
                }
              }
            }
          }
        }
joined_r0x004b0195:
        if (uVar6 == 0) {
LAB_004b019b:
                    /* try { // try from 004b019b to 004b01ab has its CatchHandler @ 004b0333 */
          juce::String::String(local_50,(byte *)"Unexpected EOF in array declaration");
                    /* try { // try from 004b01ac to 004b01bd has its CatchHandler @ 004b0307 */
          throwError(param_2,(undefined8 *)local_50,local_48);
          goto LAB_004b01be;
        }
      }
LAB_004aff58:
                    /* try { // try from 004aff58 to 004aff62 has its CatchHandler @ 004b0335 */
      parseAny(&local_68,param_2);
      ArrayBase<juce::var,juce::DummyCriticalSection>::addImpl<juce::var>(this,&local_68);
                    /* try { // try from 004aff72 to 004aff79 has its CatchHandler @ 004b0350 */
      (**(code **)(local_68 + 0x58))(&lStack_60);
      pbVar1 = *(byte **)(param_2 + 8);
LAB_004aff80:
      pbVar13 = pbVar1;
      bVar2 = *pbVar13;
      uVar6 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar10 = (uint)bVar2;
        if ((bVar2 & 0x40) == 0) {
          iVar5 = iswspace(uVar10 & 0x7f);
        }
        else {
          uVar6 = uVar10 & 0x10 ^ 0x1f;
          if ((bVar2 & 0x20) == 0) {
            uVar6 = 0x3f;
          }
          uVar6 = uVar6 & uVar10;
          if ((pbVar13[1] & 0xffffffc0) != 0x80) goto LAB_004b0040;
          uVar6 = pbVar13[1] & 0x3f | uVar6 << 6;
          if (((bVar2 & 0x20) == 0) || ((pbVar13[2] & 0xffffffc0) != 0x80)) {
            iVar5 = iswspace(uVar6);
          }
          else {
            uVar6 = pbVar13[2] & 0x3f | uVar6 << 6;
            if (((bVar2 >> 5 & (bVar2 & 0x10) == 0) != 0) || ((pbVar13[3] & 0xffffffc0) != 0x80))
            goto LAB_004b0040;
            iVar5 = iswspace(uVar6 << 6 | pbVar13[3] & 0x3f);
          }
        }
      }
      else {
LAB_004b0040:
        iVar5 = iswspace(uVar6);
      }
      if (iVar5 != 0) {
        bVar2 = *pbVar13;
        pbVar1 = pbVar13 + 1;
        if ((((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) &&
           (pbVar1 = pbVar13 + 2, (bVar2 & 0x20) != 0)) {
          pbVar1 = pbVar13 + (4 - (ulong)((bVar2 & 0x10) == 0));
        }
        goto LAB_004aff80;
      }
      *(byte **)(param_2 + 8) = pbVar13;
      bVar2 = *pbVar13;
      uVar6 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0x40) == 0) {
          uVar10 = uVar6 & 0x7f;
        }
        else {
          uVar10 = uVar6 & 0x10 ^ 0x1f;
          if ((bVar2 & 0x20) == 0) {
            uVar10 = 0x3f;
          }
          uVar10 = uVar10 & uVar6;
          if ((((pbVar13[1] & 0xffffffc0) == 0x80) &&
              (uVar10 = pbVar13[1] & 0x3f | uVar10 << 6, (bVar2 & 0x20) != 0)) &&
             (((pbVar13[2] & 0xffffffc0) == 0x80 &&
              ((uVar10 = pbVar13[2] & 0x3f | uVar10 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
               ((pbVar13[3] & 0xffffffc0) == 0x80)))))) {
            uVar10 = uVar10 << 6 | pbVar13[3] & 0x3f;
          }
        }
        if (uVar10 != 0x2c) {
          if ((char)bVar2 < '\0') {
            if ((bVar2 & 0x40) == 0) {
              uVar6 = uVar6 & 0x7f;
            }
            else {
              if ((pbVar13[1] & 0xffffffc0) != 0x80) goto LAB_004b02c6;
              uVar10 = 0x3f;
              if ((bVar2 & 0x20) != 0) {
                uVar10 = uVar6 & 0x10 ^ 0x1f;
              }
              uVar6 = pbVar13[1] & 0x3f | (uVar10 & uVar6) << 6;
              if (((((bVar2 & 0x20) != 0) && ((pbVar13[2] & 0xffffffc0) == 0x80)) &&
                  (uVar6 = pbVar13[2] & 0x3f | uVar6 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0))
                 && ((pbVar13[3] & 0xffffffc0) == 0x80)) {
                uVar6 = uVar6 << 6 | pbVar13[3] & 0x3f;
              }
            }
          }
LAB_004b028c:
          if (uVar6 != 0x5d) {
LAB_004b02c6:
                    /* try { // try from 004b02c6 to 004b02d6 has its CatchHandler @ 004b0333 */
            juce::String::String((String *)&local_58,(byte *)"Expected \',\' or \']\'");
                    /* try { // try from 004b02db to 004b02e7 has its CatchHandler @ 004b02e8 */
            uVar8 = throwError(param_2,&local_58,*(byte **)(param_2 + 8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b02db with catch @ 004b02e8
                        */
            piVar12 = (int *)(local_58 + -0x10);
            if (piVar12 != &emptyString) {
              LOCK();
              iVar5 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                operator_delete__(piVar12);
              }
            }
                    /* try { // try from 004b0340 to 004b0347 has its CatchHandler @ 004b0358 */
            (**(code **)(*local_38 + 0x58))(local_40);
                    /* WARNING: Subroutine does not return */
            _Unwind_Resume(uVar8);
          }
          *(byte **)(param_2 + 8) = pbVar13 + 1;
          bVar2 = *pbVar13;
          if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
joined_r0x004b02a9:
            if ((bVar2 & 0x20) == 0) {
              pbVar13 = pbVar13 + 2;
            }
            else {
              pbVar13 = pbVar13 + (4 - (ulong)((bVar2 & 0x10) == 0));
            }
            *(byte **)(param_2 + 8) = pbVar13;
          }
          return;
        }
      }
      else if (uVar6 != 0x2c) goto LAB_004b028c;
      pbVar1 = pbVar13 + 1;
      *(byte **)(param_2 + 8) = pbVar1;
      bVar2 = *pbVar13;
      if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
        lVar11 = 4 - (ulong)((bVar2 & 0x10) == 0);
        if ((bVar2 & 0x20) == 0) {
          lVar11 = 2;
        }
        *(byte **)(param_2 + 8) = pbVar13 + lVar11;
        pbVar1 = pbVar13 + lVar11;
      }
      goto LAB_004afcd0;
    }
    bVar2 = *pbVar13;
    pbVar1 = pbVar13 + 1;
    if ((((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) &&
       (pbVar1 = pbVar13 + 2, (bVar2 & 0x20) != 0)) {
      pbVar1 = pbVar13 + (4 - (ulong)((bVar2 & 0x10) == 0));
    }
  } while( true );
}


