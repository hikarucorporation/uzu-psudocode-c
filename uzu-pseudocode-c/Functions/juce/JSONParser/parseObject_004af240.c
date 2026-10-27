// Function : parseObject
// Namespace: juce:JSONParser
// Entry    : 004af240
// Prototype: undefined parseObject(long * param_1, JSONParser * param_2)
// Body     : 004af240 - 004afbee


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JSONParser::parseObject() */

void __cdecl juce::JSONParser::parseObject(long *param_1,JSONParser *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  byte *pbVar15;
  bool bVar16;
  long local_90;
  undefined1 local_88 [8];
  char *local_80;
  long local_78;
  String local_70 [8];
  String local_68 [8];
  String local_60 [8];
  String local_58 [8];
  byte *local_50;
  long *local_48;
  long *local_40;
  NamedValueSet *local_38;
  
  puVar8 = operator_new(0x20);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = &PTR__DynamicObject_00713988;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *param_1 = (long)&var::Instance::attributesObject;
  param_1[1] = (long)puVar8;
  LOCK();
  *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
  UNLOCK();
  local_38 = (NamedValueSet *)(puVar8 + 2);
  local_48 = param_1 + 1;
  local_50 = *(byte **)(param_2 + 8);
  pbVar15 = local_50;
  local_40 = param_1;
  do {
    while( true ) {
      pbVar11 = pbVar15;
      bVar1 = *pbVar11;
      uVar7 = (uint)bVar1;
      if ((char)bVar1 < '\0') break;
LAB_004af370:
      iVar6 = iswspace(uVar7);
      if (iVar6 == 0) goto LAB_004af3d0;
LAB_004af37d:
      bVar1 = *pbVar11;
      pbVar15 = pbVar11 + 1;
      if ((((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) &&
         (pbVar15 = pbVar11 + 2, (bVar1 & 0x20) != 0)) {
        pbVar15 = pbVar11 + (4 - (ulong)((bVar1 & 0x10) == 0));
      }
    }
    uVar10 = (uint)bVar1;
    if ((bVar1 & 0x40) == 0) {
      iVar6 = iswspace(uVar10 & 0x7f);
    }
    else {
      uVar7 = uVar10 & 0x10 ^ 0x1f;
      if ((bVar1 & 0x20) == 0) {
        uVar7 = 0x3f;
      }
      uVar7 = uVar7 & uVar10;
      if ((pbVar11[1] & 0xffffffc0) != 0x80) goto LAB_004af370;
      uVar7 = pbVar11[1] & 0x3f | uVar7 << 6;
      if (((bVar1 & 0x20) == 0) || ((pbVar11[2] & 0xffffffc0) != 0x80)) {
        iVar6 = iswspace(uVar7);
      }
      else {
        uVar7 = pbVar11[2] & 0x3f | uVar7 << 6;
        if (((bVar1 >> 5 & (bVar1 & 0x10) == 0) != 0) || ((pbVar11[3] & 0xffffffc0) != 0x80))
        goto LAB_004af370;
        iVar6 = iswspace(uVar7 << 6 | pbVar11[3] & 0x3f);
      }
    }
    if (iVar6 != 0) goto LAB_004af37d;
LAB_004af3d0:
    pbVar15 = pbVar11 + 1;
    *(byte **)(param_2 + 8) = pbVar15;
    bVar1 = *pbVar11;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar7 = uVar7 & 0x7f;
      }
      else {
        uVar12 = uVar7 & 0x20;
        uVar10 = uVar7 & 0x10;
        uVar13 = uVar10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar13 = 0x3f;
        }
        uVar7 = uVar13 & uVar7;
        bVar2 = *pbVar15;
        if ((bVar2 & 0xffffffc0) == 0x80) {
          pbVar15 = pbVar11 + 2;
          uVar7 = bVar2 & 0x3f | uVar7 << 6;
          *(byte **)(param_2 + 8) = pbVar15;
          if (((bVar1 & 0x20) != 0) && (bVar1 = *pbVar15, (bVar1 & 0xffffffc0) == 0x80)) {
            pbVar15 = pbVar11 + 3;
            *(byte **)(param_2 + 8) = pbVar15;
            uVar7 = bVar1 & 0x3f | uVar7 << 6;
            if (((byte)((byte)(uVar10 >> 4) & (byte)(uVar12 >> 5)) != 0) &&
               (bVar1 = *pbVar15, (bVar1 & 0xffffffc0) == 0x80)) {
              pbVar15 = pbVar11 + 4;
              *(byte **)(param_2 + 8) = pbVar15;
              uVar7 = uVar7 << 6 | bVar1 & 0x3f;
            }
          }
        }
      }
    }
    if (uVar7 != 0x22) {
      if (uVar7 == 0x7d) {
        return;
      }
      if (uVar7 == 0) {
                    /* try { // try from 004afa1b to 004afa2b has its CatchHandler @ 004afb68 */
        juce::String::String(local_58,(byte *)"Unexpected EOF in object declaration");
                    /* try { // try from 004afa2c to 004afa3d has its CatchHandler @ 004afb01 */
        throwError(param_2,(undefined8 *)local_58,local_50);
LAB_004afa3e:
                    /* try { // try from 004afa3e to 004afa4e has its CatchHandler @ 004afbad */
        juce::String::String(local_70,(byte *)"Expected \':\'");
                    /* try { // try from 004afa4f to 004afa5e has its CatchHandler @ 004afb3c */
        throwError(param_2,(undefined8 *)local_70,pbVar11);
        goto LAB_004afa5f;
      }
LAB_004afa80:
                    /* try { // try from 004afa80 to 004afa90 has its CatchHandler @ 004afb68 */
      juce::String::String(local_60,(byte *)"Expected a property name in double-quotes");
                    /* try { // try from 004afa91 to 004afaa0 has its CatchHandler @ 004afae0 */
      throwError(param_2,(undefined8 *)local_60,pbVar11);
LAB_004afaa1:
                    /* try { // try from 004afaa1 to 004afab1 has its CatchHandler @ 004afbad */
      juce::String::String((String *)&local_78,(byte *)"Expected \',\' or \'}\'");
                    /* try { // try from 004afab6 to 004afac2 has its CatchHandler @ 004afac3 */
      uVar9 = throwError(param_2,&local_78,*(byte **)(param_2 + 8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004afab6 with catch @ 004afac3
                        */
      piVar14 = (int *)(local_78 + -0x10);
      if (piVar14 != &emptyString) {
        LOCK();
        iVar6 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          operator_delete__(piVar14);
        }
      }
      piVar14 = (int *)(local_80 + -0x10);
      if (piVar14 != &emptyString) {
        LOCK();
        iVar6 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          operator_delete__(piVar14);
        }
      }
                    /* try { // try from 004afbdf to 004afbe6 has its CatchHandler @ 004afbef */
      (**(code **)(*local_40 + 0x58))(local_48);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar9);
    }
                    /* try { // try from 004af499 to 004af4ad has its CatchHandler @ 004afb6a */
    parseString(&local_90,param_2,0x22);
                    /* try { // try from 004af4ae to 004af4ba has its CatchHandler @ 004afb6f */
    Identifier::Identifier((Identifier *)&local_80,&local_90);
    piVar14 = (int *)(local_90 + -0x10);
    if (piVar14 != &emptyString) {
      LOCK();
      iVar6 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(piVar14);
      }
    }
    pcVar4 = local_80;
    if (*local_80 == '\0') {
LAB_004afa5f:
                    /* try { // try from 004afa5f to 004afa6f has its CatchHandler @ 004afbad */
      juce::String::String(local_68,(byte *)"Invalid property name");
                    /* try { // try from 004afa70 to 004afa7f has its CatchHandler @ 004afb22 */
      throwError(param_2,(undefined8 *)local_68,pbVar15);
      goto LAB_004afa80;
    }
    pbVar5 = *(byte **)(param_2 + 8);
LAB_004af500:
    pbVar11 = pbVar5;
    bVar1 = *pbVar11;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar10 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        iVar6 = iswspace(uVar10 & 0x7f);
      }
      else {
        uVar7 = uVar10 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar7 = 0x3f;
        }
        uVar7 = uVar7 & uVar10;
        if ((pbVar11[1] & 0xffffffc0) != 0x80) goto LAB_004af5c0;
        uVar7 = pbVar11[1] & 0x3f | uVar7 << 6;
        if (((bVar1 & 0x20) == 0) || ((pbVar11[2] & 0xffffffc0) != 0x80)) {
          iVar6 = iswspace(uVar7);
        }
        else {
          uVar7 = pbVar11[2] & 0x3f | uVar7 << 6;
          if (((bVar1 >> 5 & (bVar1 & 0x10) == 0) != 0) || ((pbVar11[3] & 0xffffffc0) != 0x80))
          goto LAB_004af5c0;
          iVar6 = iswspace(uVar7 << 6 | pbVar11[3] & 0x3f);
        }
      }
    }
    else {
LAB_004af5c0:
      iVar6 = iswspace(uVar7);
    }
    if (iVar6 != 0) {
      bVar1 = *pbVar11;
      pbVar5 = pbVar11 + 1;
      if ((((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) &&
         (pbVar5 = pbVar11 + 2, (bVar1 & 0x20) != 0)) {
        pbVar5 = pbVar11 + (4 - (ulong)((bVar1 & 0x10) == 0));
      }
      goto LAB_004af500;
    }
    *(byte **)(param_2 + 8) = pbVar11 + 1;
    bVar1 = *pbVar11;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar7 = uVar7 & 0x7f;
      }
      else {
        uVar12 = uVar7 & 0x20;
        uVar10 = uVar7 & 0x10;
        uVar13 = uVar10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar13 = 0x3f;
        }
        uVar7 = uVar13 & uVar7;
        bVar2 = pbVar11[1];
        if ((bVar2 & 0xc0) == 0x80) {
          uVar7 = bVar2 & 0x3f | uVar7 << 6;
          *(byte **)(param_2 + 8) = pbVar11 + 2;
          if (((bVar1 & 0x20) != 0) && (uVar13 = (uint)pbVar11[2], (uVar13 & 0xffffffc0) == 0x80)) {
            *(byte **)(param_2 + 8) = pbVar11 + 3;
            uVar7 = uVar13 & 0x3f | uVar7 << 6;
            if (((byte)((byte)(uVar10 >> 4) & (byte)(uVar12 >> 5)) != 0) &&
               (uVar10 = (uint)pbVar11[3], (uVar10 & 0xffffffc0) == 0x80)) {
              *(byte **)(param_2 + 8) = pbVar11 + 4;
              uVar7 = uVar7 << 6 | uVar10 & 0x3f;
            }
          }
        }
      }
    }
    if (uVar7 != 0x3a) goto LAB_004afa3e;
                    /* try { // try from 004af6e9 to 004af6f8 has its CatchHandler @ 004afb89 */
    parseAny(&local_90,param_2);
                    /* try { // try from 004af6f9 to 004af70a has its CatchHandler @ 004afb8b */
    NamedValueSet::set(local_38,(long *)&local_80,&local_90);
                    /* try { // try from 004af710 to 004af717 has its CatchHandler @ 004afba5 */
    (**(code **)(local_90 + 0x58))(local_88);
    pbVar15 = *(byte **)(param_2 + 8);
LAB_004af720:
    pbVar11 = pbVar15;
    bVar1 = *pbVar11;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar10 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        iVar6 = iswspace(uVar10 & 0x7f);
      }
      else {
        uVar7 = uVar10 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar7 = 0x3f;
        }
        uVar7 = uVar7 & uVar10;
        if ((pbVar11[1] & 0xffffffc0) != 0x80) goto LAB_004af7e0;
        uVar7 = pbVar11[1] & 0x3f | uVar7 << 6;
        if (((bVar1 & 0x20) == 0) || ((pbVar11[2] & 0xffffffc0) != 0x80)) {
          iVar6 = iswspace(uVar7);
        }
        else {
          uVar7 = pbVar11[2] & 0x3f | uVar7 << 6;
          if (((bVar1 >> 5 & (bVar1 & 0x10) == 0) != 0) || ((pbVar11[3] & 0xffffffc0) != 0x80))
          goto LAB_004af7e0;
          iVar6 = iswspace(uVar7 << 6 | pbVar11[3] & 0x3f);
        }
      }
    }
    else {
LAB_004af7e0:
      iVar6 = iswspace(uVar7);
    }
    if (iVar6 != 0) {
      bVar1 = *pbVar11;
      pbVar15 = pbVar11 + 1;
      if ((((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) &&
         (pbVar15 = pbVar11 + 2, (bVar1 & 0x20) != 0)) {
        pbVar15 = pbVar11 + (4 - (ulong)((bVar1 & 0x10) == 0));
      }
      goto LAB_004af720;
    }
    *(byte **)(param_2 + 8) = pbVar11;
    bVar1 = *pbVar11;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar10 = uVar7 & 0x7f;
      }
      else {
        uVar10 = uVar7 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar10 = 0x3f;
        }
        uVar10 = uVar10 & uVar7;
        if ((((pbVar11[1] & 0xffffffc0) == 0x80) &&
            (uVar10 = pbVar11[1] & 0x3f | uVar10 << 6, (bVar1 & 0x20) != 0)) &&
           (((pbVar11[2] & 0xffffffc0) == 0x80 &&
            ((uVar10 = pbVar11[2] & 0x3f | uVar10 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
             ((pbVar11[3] & 0xffffffc0) == 0x80)))))) {
          uVar10 = uVar10 << 6 | pbVar11[3] & 0x3f;
        }
      }
      bVar16 = uVar10 == 0x2c;
      if (!bVar16) {
        if ((char)bVar1 < '\0') {
          if ((bVar1 & 0x40) == 0) {
            uVar7 = uVar7 & 0x7f;
          }
          else {
            if ((pbVar11[1] & 0xffffffc0) != 0x80) goto LAB_004afaa1;
            uVar10 = uVar7 & 0x10 ^ 0x1f;
            if ((bVar1 & 0x20) == 0) {
              uVar10 = 0x3f;
            }
            uVar7 = pbVar11[1] & 0x3f | (uVar10 & uVar7) << 6;
            if (((((bVar1 & 0x20) != 0) && ((pbVar11[2] & 0xffffffc0) == 0x80)) &&
                (uVar7 = pbVar11[2] & 0x3f | uVar7 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0))
               && ((pbVar11[3] & 0xffffffc0) == 0x80)) {
              uVar7 = uVar7 << 6 | pbVar11[3] & 0x3f;
            }
          }
        }
        goto LAB_004af98c;
      }
LAB_004af8d3:
      *(byte **)(param_2 + 8) = pbVar11 + 1;
      bVar1 = *pbVar11;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
joined_r0x004af9ad:
        if ((bVar1 & 0x20) == 0) {
          pbVar11 = pbVar11 + 2;
        }
        else {
          pbVar11 = pbVar11 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
        bVar3 = (bool)(bVar16 ^ 1);
        *(byte **)(param_2 + 8) = pbVar11;
      }
      else {
        bVar3 = false;
      }
    }
    else {
      bVar16 = uVar7 == 0x2c;
      if (bVar16) goto LAB_004af8d3;
LAB_004af98c:
      if (uVar7 != 0x7d) goto LAB_004afaa1;
      *(byte **)(param_2 + 8) = pbVar11 + 1;
      bVar1 = *pbVar11;
      bVar3 = true;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) goto joined_r0x004af9ad;
    }
    piVar14 = (int *)(pcVar4 + -0x10);
    if (piVar14 != &emptyString) {
      LOCK();
      iVar6 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(piVar14);
      }
    }
    if (bVar3) {
      return;
    }
    pbVar15 = *(byte **)(param_2 + 8);
  } while( true );
}


